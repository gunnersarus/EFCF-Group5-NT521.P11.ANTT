// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include "eEVM/util.h"

#include "eEVM/exception.h"
#include "eEVM/processor.h"
#include "eEVM/rlp.h"

#include <iomanip>

using namespace std;

namespace eevm
{
  string strip(const string& s)
  {
    return (s.size() >= 2 && s[1] == 'x') ? s.substr(2) : s;
  }

  uint64_t to_uint64(const std::string& s)
  {
    return strtoull(s.c_str(), nullptr, 16);
  }

  vector<uint8_t> to_bytes(const string& _s)
  {
    auto s = strip(_s);

    const size_t byte_len = (s.size() + 1) / 2; // round up
    vector<uint8_t> v(byte_len);

    // Handle odd-length strings
    size_t n = 0;
    if (s.size() % 2 != 0)
    {
      v[0] = static_cast<uint8_t>(strtoul(s.substr(0, 1).c_str(), nullptr, 16));
      ++n;
    }

    auto x = n;
    for (auto i = n; i < byte_len; ++i, x += 2)
    {
      v[i] = static_cast<uint8_t>(strtoul(s.substr(x, 2).c_str(), nullptr, 16));
    }
    return v;
  }

  Address generate_address(const Address& sender, uint64_t nonce)
  {
    const auto rlp_encoding = rlp::encode(sender, nonce);

    uint8_t buffer[32u];
    keccak_256(
      rlp_encoding.data(),
      static_cast<unsigned int>(rlp_encoding.size()),
      buffer);

    return from_big_endian(buffer + 12u, 20u);
  }

  std::ostream& operator<<(std::ostream& out, const eevm::ExecResult& value)
  {
    return out << "ExecResult {" << std::endl
               << "  er: " << value.er << std::endl
               << "  ex: " << value.ex << std::endl
               << "  exmsg: " << value.exmsg << std::endl
               << "  output: " << eevm::to_hex_string(value.output) << std::endl
               << "  last_pc: " << value.last_pc << std::endl
               << "}";
  }

  std::ostream& operator<<(std::ostream& out, const eevm::ExitReason value)
  {
    using namespace eevm;
    const char* s = 0;
#define PROCESS_VAL(p) \
  case (p): \
    s = #p; \
    break;

    switch (value)
    {
      PROCESS_VAL(ExitReason::returned);
      PROCESS_VAL(ExitReason::halted);
      PROCESS_VAL(ExitReason::threw);
    }
#undef PROCESS_VAL

    return out << s;
  }

  std::ostream& operator<<(std::ostream& out, const eevm::Exception::Type value)
  {
    using namespace eevm;
    const char* s = 0;
    // macro definition as a shortcut for switch case
#define PROCESS_VAL(p) \
  case (p): \
    s = #p; \
    break;
    // now the actual switch
    switch (value)
    {
      PROCESS_VAL(Exception::Type::none);
      PROCESS_VAL(Exception::Type::outOfBounds);
      PROCESS_VAL(Exception::Type::outOfGas);
      PROCESS_VAL(Exception::Type::outOfFunds);
      PROCESS_VAL(Exception::Type::overflow);
      PROCESS_VAL(Exception::Type::illegalInstruction);
      PROCESS_VAL(Exception::Type::reverted);
      PROCESS_VAL(Exception::Type::notImplemented);
      PROCESS_VAL(Exception::Type::staticViolation);
      PROCESS_VAL(Exception::Type::callStackExhausted);
    }
#undef PROCESS_VAL
    return out << s;
  }
} // namespace eevm
