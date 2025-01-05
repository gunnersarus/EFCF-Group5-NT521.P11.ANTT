Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/multiowned_vulnerable.bin.63bcd4343fc4790828ae3dde710c5725.r5vt23ma.fuzz/fuzz/dict/multiowned_vulnerable.dict -S c1 -c /tmp/efcf/multiowned_vulnerable.bin.63bcd4343fc4790828ae3dde710c5725.r5vt23ma.fuzz/fuzz/build/afuzz_cmplog/multiowned_vulnerable/fuzz_multitx -l 2AT -p rare -V 7200 -- /tmp/efcf/multiowned_vulnerable.bin.63bcd4343fc4790828ae3dde710c5725.r5vt23ma.fuzz/fuzz/build/afuzz/multiowned_vulnerable/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 2.21 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

