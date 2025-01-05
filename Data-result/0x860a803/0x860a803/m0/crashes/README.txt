Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/SEC.src.968786279677f6dca756c83f3a3dbc9d.na3bqlu2.fuzz/fuzz/dict/SEC.dict -M m0 -D -p rare -V 86400 -- /tmp/efcf/SEC.src.968786279677f6dca756c83f3a3dbc9d.na3bqlu2.fuzz/fuzz/build/afuzz/SEC/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 1.95 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

