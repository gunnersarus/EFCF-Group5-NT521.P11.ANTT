Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/wallet_04_confused_sign.bin.e3ba4396eb7204469e7f14e46726cee7.qpyhkedt.fuzz/fuzz/dict/wallet_04_confused_sign.dict -S e2 -p rare -V 3600 -- /tmp/efcf/wallet_04_confused_sign.bin.e3ba4396eb7204469e7f14e46726cee7.qpyhkedt.fuzz/fuzz/build/afuzz/wallet_04_confused_sign/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 1.95 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

