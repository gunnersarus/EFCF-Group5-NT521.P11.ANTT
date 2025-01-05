Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/baby_bank.src.2b455400ac4da8796d9a28c5cc0d60d3.g0jw_x9y.fuzz/fuzz/dict/baby_bank.dict -c /tmp/efcf/baby_bank.src.2b455400ac4da8796d9a28c5cc0d60d3.g0jw_x9y.fuzz/fuzz/build/afuzz_cmplog/baby_bank/fuzz_multitx -l 2AT -p rare -V 86400 -- /tmp/efcf/baby_bank.src.2b455400ac4da8796d9a28c5cc0d60d3.g0jw_x9y.fuzz/fuzz/build/afuzz/baby_bank/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 2.21 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

