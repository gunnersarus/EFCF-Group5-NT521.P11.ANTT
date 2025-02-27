// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "address.h"
#include "bigint.h"
#include "exception.h"
#include "util.h"

#include <fmt/format_header_only.h>
#include <vector>

namespace eevm
{
  using Code = std::vector<uint8_t>;

  /**
   * Abstract interface for interacting with EVM accounts
   */
  struct Account
  {
    using Nonce = size_t;

    virtual ~Account() {}

    virtual Address get_address() const = 0;

    virtual void* get_specialized_processor() const = 0;

    virtual uint256_t get_balance() const = 0;

    virtual void set_specialized_processor(void* specialized_processor) = 0;

    virtual void set_balance(const uint256_t& b) = 0;

    virtual bool pay_to_noexcept(Account& other, const uint256_t& amount)
    {
      const uint256_t this_balance = get_balance();

      // not enough funds in this->get_balance();
      if (amount > this_balance)
      {
        return false;
      }

      // transfer of value to ourselves - no change. early return true;
      if (other.get_address() == get_address()) {
        return true;
      }

      const uint256_t other_balance = other.get_balance();
      const uint256_t proposed_balance = other_balance + amount;
      // IO check
      if (proposed_balance < other_balance)
      {
        return false;
      }

      // update balances
      set_balance(this_balance - amount);
      other.set_balance(proposed_balance);

      // all good
      return true;
    }

    virtual void pay_to(Account& other, const uint256_t& amount)
    {
      if (other.get_address() == get_address()) {
        return;
      }

      const auto this_balance = get_balance();

      if (amount > this_balance)
      {
        throw Exception(
          Exception::Type::outOfFunds,
          "Insufficient funds to pay " + to_hex_string(amount) + " to " +
            to_hex_string(other.get_address()) + " (from " +
            to_hex_string(get_address()) + ", current balance " +
            to_hex_string(this_balance) + ")");
      }

      const auto other_balance = other.get_balance();
      const auto proposed_balance = other_balance + amount;
      if (proposed_balance < other_balance)
      {
        throw Exception(
          Exception::Type::overflow,
          "Overflow while attempting to pay " + to_hex_string(amount) + " to " +
            to_hex_string(other.get_address()) + " (current balance " +
            to_hex_string(other_balance) + ") from " +
            to_hex_string(get_address()));
      }

      set_balance(this_balance - amount);
      other.set_balance(proposed_balance);
    }

    virtual Nonce get_nonce() const = 0;
    virtual void increment_nonce() = 0;

    virtual std::shared_ptr<Code> get_code_ref() = 0;
    virtual Code& get_code() const = 0;
    virtual void set_code(Code&& code) = 0;

    virtual bool has_code()
    {
      return !get_code().empty();
    }

    virtual bool is_mocked() = 0;
    virtual void set_mocked(bool) = 0;
  };
} // namespace evm
