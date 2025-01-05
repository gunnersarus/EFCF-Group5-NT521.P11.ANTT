#!/usr/bin/env bash
set -eu
MINIMIZER=/efcf/src/ethmutator/target/release/efuzzcaseminimizer
if test -e ./fuzz-config.sh; then
    export $(cat ./fuzz-config.sh)
fi
if ! command -v "$MINIMIZER" >/dev/null; then
    MINIMIZER=efuzzcaseminimizer
fi
bin=""
if test -e ./build/fuzz_multitx; then
    bin=./build/fuzz_multitx
elif test -e ./fuzz_multitx; then
    bin=./fuzz_multitx
else
    echo "can't find fuzz_multitx binary"
    find . -name "fuzz_multitx"
    exit 1
fi
testcase=$1
shift
if test -e ./contract.abi; then
    $MINIMIZER -a ./contract.abi $@ $bin $testcase
else
    $MINIMIZER $@ $bin $testcase
fi
