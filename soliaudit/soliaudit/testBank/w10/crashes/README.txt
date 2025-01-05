Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/testBank.bin.5fd71f4f8998b334f1eaaafb935618b8.8afmgeee.fuzz/fuzz/dict/testBank.dict -S w10 -p explore -V 3600 -- /tmp/efcf/testBank.bin.5fd71f4f8998b334f1eaaafb935618b8.8afmgeee.fuzz/fuzz/build/afuzz/testBank/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 1.95 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

