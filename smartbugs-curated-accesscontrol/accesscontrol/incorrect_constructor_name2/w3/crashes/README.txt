Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/incorrect_constructor_name2.bin.e707be0de55b33b527331cb0c8455e8a.ekj8k85l.fuzz/fuzz/dict/incorrect_constructor_name2.dict -S w3 -p fast -V 86400 -- /tmp/efcf/incorrect_constructor_name2.bin.e707be0de55b33b527331cb0c8455e8a.ekj8k85l.fuzz/fuzz/build/afuzz/incorrect_constructor_name2/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 1.95 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

