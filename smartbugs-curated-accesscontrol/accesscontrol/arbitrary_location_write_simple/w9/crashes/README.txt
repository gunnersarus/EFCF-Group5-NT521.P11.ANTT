Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/arbitrary_location_write_simple.bin.c992fbd7869c2fa19d6a887155289808.17qchs4o.fuzz/fuzz/dict/arbitrary_location_write_simple.dict -S w9 -p fast -V 86400 -- /tmp/efcf/arbitrary_location_write_simple.bin.c992fbd7869c2fa19d6a887155289808.17qchs4o.fuzz/fuzz/build/afuzz/arbitrary_location_write_simple/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 1.95 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

