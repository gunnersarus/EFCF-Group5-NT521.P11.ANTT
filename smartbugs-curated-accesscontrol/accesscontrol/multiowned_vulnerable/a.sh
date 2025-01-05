#!/usr/bin/env bash
set -eu
ANALYZER=/efcf/src/ethmutator/target/release/efuzzcaseanalyzer
if test -e ./fuzz-config.sh; then
    export $(cat ./fuzz-config.sh)
fi
if ! command -v "$ANALYZER" >/dev/null; then
    ANALYZER=efuzzcaseanalyzer
fi
if test -e ./contract.abi; then
    $ANALYZER -a ./contract.abi $@
else
    $ANALYZER $@
fi
