Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/parity_wallet_bug_2.bin.b9b0a4f2ae90421efd0a926073ed11aa.o3jzsv7a.fuzz/fuzz/dict/parity_wallet_bug_2.dict -S w3 -p fast -V 3600 -- /tmp/efcf/parity_wallet_bug_2.bin.b9b0a4f2ae90421efd0a926073ed11aa.o3jzsv7a.fuzz/fuzz/build/afuzz/parity_wallet_bug_2/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 1.95 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

