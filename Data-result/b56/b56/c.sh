#!/usr/bin/env bash
EVM_DIR="/tmp/efcf/GTIX.src.b24755bcc05505f0b217f6ee2894973d.du2dtzda.fuzz"
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
