#!/usr/bin/env bash
EVM_DIR="/tmp/efcf/Disperse.src.3eda4e77a7a41bf95462e28d99f289d9.bdc_3vok.fuzz"
if test -e ./fuzz-config.sh; then
    export $(cat ./fuzz-config.sh)
fi
if ! test -d "$EVM_DIR"; then
    if test -d "$EFCF_INSTALL_DIR"; then
        EVM_DIR="$EFCF_INSTALL_DIR/src/eEVM/"
    fi
    if test -e ./build; then
        rp="$(realpath ./build/../../../../)"
        if test -d "$rp/fuzz"; then
            EVM_DIR="$rp"
        fi
    fi
fi
test -e "$EVM_DIR" || exit 1
python3 $EVM_DIR/fuzz/crash-chain.py $1 | fzf --preview './a.sh {}'
