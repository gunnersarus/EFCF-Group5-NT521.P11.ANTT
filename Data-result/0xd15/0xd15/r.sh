#!/usr/bin/env bash
set -u
export EVM_DEBUG_PRINT=1
if test -e ./fuzz-config.sh; then
    export $(cat ./fuzz-config.sh)
fi
ANALYZER=/efcf/src/ethmutator/target/release/efuzzcaseanalyzer
if ! command -v "$ANALYZER" >/dev/null; then
    ANALYZER=efuzzcaseanalyzer
fi
if test -e ./build/fuzz_multitx; then
    ./build/fuzz_multitx $1
elif test -e ./fuzz_multitx; then
    ./fuzz_multitx $1
else
    echo "can't find fuzz_multitx binary"
    find . -name "fuzz_multitx"
    exit 1
fi
if test -e ./contract.abi; then
    $ANALYZER -a ./contract.abi $1
else
    $ANALYZER $1
fi
