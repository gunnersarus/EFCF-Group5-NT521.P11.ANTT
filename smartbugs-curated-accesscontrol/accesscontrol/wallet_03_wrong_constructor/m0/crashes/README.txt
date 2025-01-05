Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/wallet_03_wrong_constructor.bin.25871a43fe60fca3f9f2fc5be22844d3.pvcyadwm.fuzz/fuzz/dict/wallet_03_wrong_constructor.dict -M m0 -D -p rare -V 3600 -- /tmp/efcf/wallet_03_wrong_constructor.bin.25871a43fe60fca3f9f2fc5be22844d3.pvcyadwm.fuzz/fuzz/build/afuzz/wallet_03_wrong_constructor/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 1.95 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

