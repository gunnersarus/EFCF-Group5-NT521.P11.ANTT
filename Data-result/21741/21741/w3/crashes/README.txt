Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/MultiBuyer.src.e320db9a0ab83a33e3ea9bfaec0d37cd.6a09_49e.fuzz/fuzz/dict/MultiBuyer.dict -S w3 -p fast -V 86400 -- /tmp/efcf/MultiBuyer.src.e320db9a0ab83a33e3ea9bfaec0d37cd.6a09_49e.fuzz/fuzz/build/afuzz/MultiBuyer/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 1.95 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

