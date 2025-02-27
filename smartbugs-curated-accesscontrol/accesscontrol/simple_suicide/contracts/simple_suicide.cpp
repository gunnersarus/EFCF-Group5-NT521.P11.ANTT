// auto-generated by evm2cpp
    
// associated header file
#include "eEVM/evm2cpp/contracts/simple_suicide.h"

// additional tracing code
#include "eEVM/fuzz/tracecomp.hpp"


// this is generated code and we might have emitted some variables/labels that are not actually used anymore
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-label"

const eevm::Code _contract_bytecode = {
0x60, /* [0'0x0] PUSH1 */
0x80,/* constant data */
0x60, /* [2'0x2] PUSH1 */
0x40,/* constant data */
0x52, /* [4'0x4] MSTORE */
0x60, /* [5'0x5] PUSH1 */
0x04,/* constant data */
0x36, /* [7'0x7] CALLDATASIZE */
0x10, /* [8'0x8] LT */
0x60, /* [9'0x9] PUSH1 */
0x3f,/* constant data */
0x57, /* [11'0xb] JUMPI */
0x60, /* [12'0xc] PUSH1 */
0x00,/* constant data */
0x35, /* [14'0xe] CALLDATALOAD */
0x7c, /* [15'0xf] PUSH29 */
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/* constant data */
0x90, /* [45'0x2d] SWAP1 */
0x04, /* [46'0x2e] DIV */
0x63, /* [47'0x2f] PUSH4 */
0xff,0xff,0xff,0xff,/* constant data */
0x16, /* [52'0x34] AND */
0x80, /* [53'0x35] DUP1 */
0x63, /* [54'0x36] PUSH4 */
0xa5,0x6a,0x3b,0x5a,/* constant data */
0x14, /* [59'0x3b] EQ */
0x60, /* [60'0x3c] PUSH1 */
0x44,/* constant data */
0x57, /* [62'0x3e] JUMPI */
0x5b, /* [63'0x3f] JUMPDEST */
0x60, /* [64'0x40] PUSH1 */
0x00,/* constant data */
0x80, /* [66'0x42] DUP1 */
0xfd, /* [67'0x43] REVERT */
0x5b, /* [68'0x44] JUMPDEST */
0x34, /* [69'0x45] CALLVALUE */
0x80, /* [70'0x46] DUP1 */
0x15, /* [71'0x47] ISZERO */
0x60, /* [72'0x48] PUSH1 */
0x4f,/* constant data */
0x57, /* [74'0x4a] JUMPI */
0x60, /* [75'0x4b] PUSH1 */
0x00,/* constant data */
0x80, /* [77'0x4d] DUP1 */
0xfd, /* [78'0x4e] REVERT */
0x5b, /* [79'0x4f] JUMPDEST */
0x50, /* [80'0x50] POP */
0x60, /* [81'0x51] PUSH1 */
0x56,/* constant data */
0x60, /* [83'0x53] PUSH1 */
0x58,/* constant data */
0x56, /* [85'0x55] JUMP */
0x5b, /* [86'0x56] JUMPDEST */
0x00, /* [87'0x57] STOP */
0x5b, /* [88'0x58] JUMPDEST */
0x33, /* [89'0x59] CALLER */
0x73, /* [90'0x5a] PUSH20 */
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,/* constant data */
0x16, /* [111'0x6f] AND */
0xff, /* [112'0x70] SELFDESTRUCT */
0x00, /* [113'0x71] STOP */
0xa1, /* [114'0x72] LOG1 */
0x65, /* [115'0x73] PUSH6 */
0x62,0x7a,0x7a,0x72,0x30,0x58,/* constant data */
0x20, /* [122'0x7a] SHA3 */
0xb9, /* [123'0x7b] INVALID' byte */
0x5d, /* [124'0x7c] INVALID' byte */
0xe1, /* [125'0x7d] INVALID' byte */
0x21, /* [126'0x7e] INVALID' byte */
0x04, /* [127'0x7f] DIV */
0x1f, /* [128'0x80] INVALID' byte */
0xee, /* [129'0x81] INVALID' byte */
0xc2, /* [130'0x82] INVALID' byte */
0xdc, /* [131'0x83] INVALID' byte */
0x88, /* [132'0x84] DUP9 */
0x0c, /* [133'0x85] INVALID' byte */
0x22, /* [134'0x86] INVALID' byte */
0xa1, /* [135'0x87] LOG1 */
0x30, /* [136'0x88] ADDRESS */
0x1c, /* [137'0x89] SHR */
0x12, /* [138'0x8a] SLT */
0xfd, /* [139'0x8b] REVERT */
0xfc, /* [140'0x8c] INVALID' byte */
0x68, /* [141'0x8d] PUSH9 */
0x1d,0x85,0x01,0x88,0xcb,0x4f,0xfb,0x73,0x95,/* constant data */
0x25, /* [151'0x97] INVALID' byte */
0x4b, /* [152'0x98] INVALID' byte */
0x1e, /* [153'0x99] INVALID' byte */
0x64, /* [154'0x9a] PUSH5 */
0x00,0x29,};

const eevm::Code& eevm::EVM2CPP_simple_suicide::bytecode() {
    return _contract_bytecode;
}

const std::string eevm::EVM2CPP_simple_suicide::_contract_name = "simple_suicide";
[[maybe_unused]] const eevm::DerivedRegister<eevm::EVM2CPP_simple_suicide> eevm::EVM2CPP_simple_suicide::reg{};
const std::string& eevm::EVM2CPP_simple_suicide::name() {
    return _contract_name;
}

// interned globals

constexpr uint256_t c_0 = 0x0_u256;
constexpr uint256_t c_4 = 0x4_u256;
constexpr uint256_t c_29 = 0x29_u256;
constexpr uint256_t c_3f = 0x3f_u256;
constexpr uint256_t c_40 = 0x40_u256;
constexpr uint256_t c_44 = 0x44_u256;
constexpr uint256_t c_4f = 0x4f_u256;
constexpr uint256_t c_56 = 0x56_u256;
constexpr uint256_t c_58 = 0x58_u256;
constexpr uint256_t c_80 = 0x80_u256;
constexpr uint256_t c_a56a3b5a = 0xa56a3b5a_u256;
constexpr uint256_t c_ffffffff = 0xffffffff_u256;
constexpr uint256_t g_13 = 0x627a7a723058_u256;
constexpr uint256_t g_12 = 0xffffffffffffffffffffffffffffffffffffffff_u256;
constexpr uint256_t g_5 = 0x100000000000000000000000000000000000000000000000000000000_u256;

// code
void eevm::EVM2CPP_simple_suicide::dispatch() {
    
static void* _JUMP_TABLE_ARR[] = {&&_evm_start,

    &&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&pc_3f,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&pc_44,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&pc_4f,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&pc_56,
&&__invld,
&&pc_58,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,
&&__invld,

};

goto _evm_start;

__invld:
    throw Exception(ET::illegalInstruction, "EVM-level invalid jump target");

#define JUMP(target) { \
    uint64_t _jump_target = static_cast<uint64_t>(target); \
    if (_jump_target < (std::size(_JUMP_TABLE_ARR))) { \
        goto *_JUMP_TABLE_ARR[_jump_target]; \
    } else { goto __invld; }}

_evm_start:
    pc_0:
{ /* <============ */ 
on_bb_start(0);
/* PUSH1 */
/* val = [128] */

/* PUSH1 */
/* val = [64] */

/* MSTORE */
/* op_0 = Constant((1, 64)) */
/* op_1 = Constant((0, 128)) */
mstore_v(c_40, c_80);


/* PUSH1 */
/* val = [4] */

/* CALLDATASIZE */
const uint256_t v_4_0 = calldatasize_v();


/* LT */
/* op_0 = InstructionRef((4, 0)) */
/* op_1 = Constant((3, 4)) */
const uint256_t v_5_0 = lt_v(v_4_0, c_4);


/* PUSH1 */
/* val = [63] */

/* JUMPI */
/* op_0 = Constant((6, 63)) */
/* op_1 = InstructionRef((5, 0)) */
if ( v_5_0 ) { 
 /* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
 
 goto pc_3f;
 
 }

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_c:
{ /* <============ */ 
on_bb_start(12);
/* PUSH1 */
/* val = [0] */

/* CALLDATALOAD */
/* op_0 = Constant((0, 0)) */
const uint256_t v_1_0 = calldataload_v(c_0);


/* PUSH29 */
/* val = [26959946667150639794667015087019630673637144422540572481103610249216] */

/* SWAP1 */
/* op_0 = Constant((2, 26959946667150639794667015087019630673637144422540572481103610249216)) */
/* op_1 = InstructionRef((1, 0)) */

/* DIV */
/* op_0 = InstructionRef((1, 0)) */
/* op_1 = Constant((2, 26959946667150639794667015087019630673637144422540572481103610249216)) */
const uint256_t v_4_0 = div_v(v_1_0, g_5);


/* PUSH4 */
/* val = [4294967295] */

/* AND */
/* op_0 = Constant((5, 4294967295)) */
/* op_1 = InstructionRef((4, 0)) */
const uint256_t v_6_0 = and_v(c_ffffffff, v_4_0);


/* DUP1 */
/* op_0 = InstructionRef((6, 0)) */

/* PUSH4 */
/* val = [2775202650] */

/* EQ */
/* op_0 = Constant((8, 2775202650)) */
/* op_1 = InstructionRef((6, 0)) */
const uint256_t v_9_0 = eq_v(c_a56a3b5a, v_6_0);


/* PUSH1 */
/* val = [68] */

/* JUMPI */
/* op_0 = Constant((10, 68)) */
/* op_1 = InstructionRef((9, 0)) */
if ( v_9_0 ) { 
 /* BB finalizer */
/* no stack sets */
/* no pops at end */
/* BB return 0 InstructionRef((6, 0))*/
ctxt->s.push(v_6_0);
 
 goto pc_44;
 
 }

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* BB return 0 InstructionRef((6, 0))*/
ctxt->s.push(v_6_0);
}pc_3f:
{ /* <============ */ 
on_bb_start(63);
/* JUMPDEST */

/* PUSH1 */
/* val = [0] */

/* DUP1 */
/* op_0 = Constant((1, 0)) */
/* val = [0] */

/* REVERT */
/* op_0 = Constant((1, 0)) */
/* op_1 = Constant((1, 0)) */
revert_v(c_0, c_0);
goto exit_label;


/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_44:
{ /* <============ */ 
on_bb_start(68);
/* JUMPDEST */

/* CALLVALUE */
const uint256_t v_1_0 = callvalue_v();


/* DUP1 */
/* op_0 = InstructionRef((1, 0)) */

/* ISZERO */
/* op_0 = InstructionRef((1, 0)) */
const uint256_t v_3_0 = iszero_v(v_1_0);


/* PUSH1 */
/* val = [79] */

/* JUMPI */
/* op_0 = Constant((4, 79)) */
/* op_1 = InstructionRef((3, 0)) */
if ( v_3_0 ) { 
 /* BB finalizer */
/* no stack sets */
/* no pops at end */
/* BB return 0 InstructionRef((1, 0))*/
ctxt->s.push(v_1_0);
 
 goto pc_4f;
 
 }

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* BB return 0 InstructionRef((1, 0))*/
ctxt->s.push(v_1_0);
}pc_4b:
{ /* <============ */ 
on_bb_start(75);
/* PUSH1 */
/* val = [0] */

/* DUP1 */
/* op_0 = Constant((0, 0)) */
/* val = [0] */

/* REVERT */
/* op_0 = Constant((0, 0)) */
/* op_1 = Constant((0, 0)) */
revert_v(c_0, c_0);
goto exit_label;


/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_4f:
{ /* <============ */ 
on_bb_start(79);
/* JUMPDEST */

/* POP */

/* PUSH1 */
/* val = [86] */

/* PUSH1 */
/* val = [88] */

/* JUMP */
/* op_0 = Constant((3, 88)) */
/* BB finalizer */
ctxt->s.set(0, c_56);
/* no pops at end */
/* no BB returns */

goto pc_58;


}pc_56:
{ /* <============ */ 
on_bb_start(86);
/* JUMPDEST */

/* STOP */
stop_v();
goto exit_label;


/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_58:
{ /* <============ */ 
on_bb_start(88);
/* JUMPDEST */

/* CALLER */
const uint256_t v_1_0 = caller_v();


/* PUSH20 */
/* val = [1461501637330902918203684832716283019655932542975] */

/* AND */
/* op_0 = Constant((2, 1461501637330902918203684832716283019655932542975)) */
/* op_1 = InstructionRef((1, 0)) */
const uint256_t v_3_0 = and_v(g_12, v_1_0);


/* SELFDESTRUCT */
/* op_0 = InstructionRef((3, 0)) */
selfdestruct_v(v_3_0);
goto exit_label;


/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_71:
{ /* <============ */ 
on_bb_start(113);
/* STOP */
stop_v();
goto exit_label;


/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_72:
{ /* <============ */ 
on_bb_start(114);
const uint256_t s_0_0 = ctxt->s.peek(0);
const uint256_t s_0_1 = ctxt->s.peek(1);
const uint256_t s_0_2 = ctxt->s.peek(2);
const uint256_t s_0_3 = ctxt->s.peek(3);
/* LOG1 */
/* op_0 = StackRef((0, 0)) */
/* op_1 = StackRef((0, 1)) */
/* op_2 = StackRef((0, 2)) */
log1_v(s_0_0, s_0_1, s_0_2);


/* PUSH6 */
/* val = [108278179835992] */

/* SHA3 */
/* op_0 = Constant((1, 108278179835992)) */
/* op_1 = StackRef((0, 3)) */
const uint256_t v_2_0 = sha3_v(g_13, s_0_3);


throw Exception(ET::illegalInstruction, "invalid instruction @ 0x72 (inst offset 3; byte 0xb9)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_7c:
{ /* <============ */ 
on_bb_start(124);
throw Exception(ET::illegalInstruction, "invalid instruction @ 0x7c (inst offset 0; byte 0x5d)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_7d:
{ /* <============ */ 
on_bb_start(125);
throw Exception(ET::illegalInstruction, "invalid instruction @ 0x7d (inst offset 0; byte 0xe1)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_7e:
{ /* <============ */ 
on_bb_start(126);
throw Exception(ET::illegalInstruction, "invalid instruction @ 0x7e (inst offset 0; byte 0x21)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_7f:
{ /* <============ */ 
on_bb_start(127);
const uint256_t s_0_0 = ctxt->s.peek(0);
const uint256_t s_0_1 = ctxt->s.peek(1);
/* DIV */
/* op_0 = StackRef((0, 0)) */
/* op_1 = StackRef((0, 1)) */
const uint256_t v_0_0 = div_v(s_0_0, s_0_1);


throw Exception(ET::illegalInstruction, "invalid instruction @ 0x7f (inst offset 1; byte 0x1f)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_81:
{ /* <============ */ 
on_bb_start(129);
throw Exception(ET::illegalInstruction, "invalid instruction @ 0x81 (inst offset 0; byte 0xee)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_82:
{ /* <============ */ 
on_bb_start(130);
throw Exception(ET::illegalInstruction, "invalid instruction @ 0x82 (inst offset 0; byte 0xc2)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_83:
{ /* <============ */ 
on_bb_start(131);
throw Exception(ET::illegalInstruction, "invalid instruction @ 0x83 (inst offset 0; byte 0xdc)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_84:
{ /* <============ */ 
on_bb_start(132);
const uint256_t s_0_8 = ctxt->s.peek(8);
/* DUP9 */
/* op_0 = StackRef((0, 8)) */

throw Exception(ET::illegalInstruction, "invalid instruction @ 0x84 (inst offset 1; byte 0xc)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_86:
{ /* <============ */ 
on_bb_start(134);
throw Exception(ET::illegalInstruction, "invalid instruction @ 0x86 (inst offset 0; byte 0x22)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_87:
{ /* <============ */ 
on_bb_start(135);
const uint256_t s_0_0 = ctxt->s.peek(0);
const uint256_t s_0_1 = ctxt->s.peek(1);
const uint256_t s_0_2 = ctxt->s.peek(2);
const uint256_t s_0_3 = ctxt->s.peek(3);
const uint256_t s_0_4 = ctxt->s.peek(4);
const uint256_t s_0_5 = ctxt->s.peek(5);
/* LOG1 */
/* op_0 = StackRef((0, 0)) */
/* op_1 = StackRef((0, 1)) */
/* op_2 = StackRef((0, 2)) */
log1_v(s_0_0, s_0_1, s_0_2);


/* ADDRESS */
const uint256_t v_1_0 = address_v();


/* SHR */
/* op_0 = InstructionRef((1, 0)) */
/* op_1 = StackRef((0, 3)) */
const uint256_t v_2_0 = shr_v(v_1_0, s_0_3);


/* SLT */
/* op_0 = InstructionRef((2, 0)) */
/* op_1 = StackRef((0, 4)) */
TRACE_COMP(eevm::Opcode::SLT, v_2_0, s_0_4);
const uint256_t v_3_0 = slt_v(v_2_0, s_0_4);


/* REVERT */
/* op_0 = InstructionRef((3, 0)) */
/* op_1 = StackRef((0, 5)) */
revert_v(v_3_0, s_0_5);
goto exit_label;


/* BB finalizer */
/* no stack sets */
ctxt->s.pop_drop_n(6);
/* no BB returns */
}pc_8c:
{ /* <============ */ 
on_bb_start(140);
throw Exception(ET::illegalInstruction, "invalid instruction @ 0x8c (inst offset 0; byte 0xfc)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_8d:
{ /* <============ */ 
on_bb_start(141);
/* PUSH9 */
/* val = [544539670026399740821] */

throw Exception(ET::illegalInstruction, "invalid instruction @ 0x8d (inst offset 1; byte 0x25)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_98:
{ /* <============ */ 
on_bb_start(152);
throw Exception(ET::illegalInstruction, "invalid instruction @ 0x98 (inst offset 0; byte 0x4b)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_99:
{ /* <============ */ 
on_bb_start(153);
throw Exception(ET::illegalInstruction, "invalid instruction @ 0x99 (inst offset 0; byte 0x1e)");

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* no BB returns */
}pc_9a:
{ /* <============ */ 
on_bb_start(154);
/* PUSH5 */
/* val = [41] */

/* BB finalizer */
/* no stack sets */
/* no pops at end */
/* BB return 0 Constant((0, 41))*/
ctxt->s.push(c_29);
}exit_label:
  return;
}

const eevm::Code _constructor_bytecode = {
0x60,0x80,0x60,0x40,0x52,0x34,0x80,0x15,0x60,0xf,0x57,0x60,0x0,0x80,0xfd,0x5b,0x50,0x60,0x9d,0x80,0x61,0x0,0x1e,0x60,0x0,0x39,0x60,0x0,0xf3,0x0,0x60,0x80,0x60,0x40,0x52,0x60,0x4,0x36,0x10,0x60,0x3f,0x57,0x60,0x0,0x35,0x7c,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x90,0x4,0x63,0xff,0xff,0xff,0xff,0x16,0x80,0x63,0xa5,0x6a,0x3b,0x5a,0x14,0x60,0x44,0x57,0x5b,0x60,0x0,0x80,0xfd,0x5b,0x34,0x80,0x15,0x60,0x4f,0x57,0x60,0x0,0x80,0xfd,0x5b,0x50,0x60,0x56,0x60,0x58,0x56,0x5b,0x0,0x5b,0x33,0x73,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x16,0xff,0x0,0xa1,0x65,0x62,0x7a,0x7a,0x72,0x30,0x58,0x20,0xb9,0x5d,0xe1,0x21,0x4,0x1f,0xee,0xc2,0xdc,0x88,0xc,0x22,0xa1,0x30,0x1c,0x12,0xfd,0xfc,0x68,0x1d,0x85,0x1,0x88,0xcb,0x4f,0xfb,0x73,0x95,0x25,0x4b,0x1e,0x64,0x0,0x29,};


const eevm::Code& eevm::EVM2CPP_simple_suicide::constructor_bytecode() {
    return _constructor_bytecode;
}

// TODO: update this if you want constructor arguments.
const eevm::Code _constructor_args = {};

const eevm::Code& eevm::EVM2CPP_simple_suicide::constructor_args() {
    return _constructor_args;
}
