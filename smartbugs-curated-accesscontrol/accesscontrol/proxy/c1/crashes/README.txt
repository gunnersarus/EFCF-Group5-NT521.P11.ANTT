Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/proxy.bin.95ccac55dd0959733999f896f334237a.wzgw4m1k.fuzz/fuzz/dict/proxy.dict -S c1 -c /tmp/efcf/proxy.bin.95ccac55dd0959733999f896f334237a.wzgw4m1k.fuzz/fuzz/build/afuzz_cmplog/proxy/fuzz_multitx -l 2AT -p rare -V 3600 -- /tmp/efcf/proxy.bin.95ccac55dd0959733999f896f334237a.wzgw4m1k.fuzz/fuzz/build/afuzz/proxy/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 2.21 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

