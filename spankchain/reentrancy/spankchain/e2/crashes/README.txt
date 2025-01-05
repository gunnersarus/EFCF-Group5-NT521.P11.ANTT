Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/SpankChainLedgerChannel.src.b2f891793fd7d863a310af5123a1965c.sct6uq0n.fuzz/fuzz/dict/SpankChainLedgerChannel.dict -S e2 -p rare -V 86400 -- /tmp/efcf/SpankChainLedgerChannel.src.b2f891793fd7d863a310af5123a1965c.sct6uq0n.fuzz/fuzz/build/afuzz/SpankChainLedgerChannel/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 1.95 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

