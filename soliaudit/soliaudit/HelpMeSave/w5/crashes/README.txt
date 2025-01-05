Command line used to find this crash:

afl-fuzz -m 2000 -i seeds -o . -x /tmp/efcf/HelpMeSave.bin.f124f5cf3ee3287e50546bf40157defb.dwo8io3m.fuzz/fuzz/dict/HelpMeSave.dict -S w5 -p rare -V 3600 -- /tmp/efcf/HelpMeSave.bin.f124f5cf3ee3287e50546bf40157defb.dwo8io3m.fuzz/fuzz/build/afuzz/HelpMeSave/fuzz_multitx

If you can't reproduce a bug outside of afl-fuzz, be sure to set the same
memory limit. The limit used for this fuzzing session was 1.95 GB.

Need a tool to minimize test cases before investigating the crashes or sending
them to a vendor? Check out the afl-tmin that comes with the fuzzer!

Found any cool bugs in open-source tools using afl-fuzz? If yes, please post
to https://github.com/AFLplusplus/AFLplusplus/issues/286 once the issues
 are fixed :)

