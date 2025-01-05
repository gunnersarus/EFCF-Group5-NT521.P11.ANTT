Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/incorrect_constructor_name1.bin.4b5e16535beadb38cc7b32c76450ae15.u4oqcva7.fuzz/fuzz/dict/incorrect_constructor_name1.dict -S w4 -p explore -V 86400 -- /tmp/efcf/incorrect_constructor_name1.bin.4b5e16535beadb38cc7b32c76450ae15.u4oqcva7.fuzz/fuzz/build/afuzz/incorrect_constructor_name1/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 1.95 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

