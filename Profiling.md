
# C++ Profiling Tools


## References
- https://en.wikipedia.org/wiki/List_of_performance_analysis_tools#C_and_C++


## Memory Profiling Tools

- AddressSanitizer
  + https://github.com/google/sanitizers/wiki/AddressSanitizer
    * AddressSanitizer (aka ASan) is a memory error detector for C/C++. It finds:
      * Use after free (dangling pointer dereference)
      * Heap buffer overflow
      * Stack buffer overflow
      * Global buffer overflow
      * Use after return
      * Use after scope
      * Initialization order bugs
      * Memory leaks


- heaptrack - a heap memory profiler for Linux
  + https://github.com/KDE/heaptrack


- MALT
  + https://memtt.github.io/malt/
    * Find where you allocate your memory and how, reduce the memory footprint of your applications and limit overhead of memory management. 
  + https://github.com/memtt/malt


- Visualizer for Valgrind Massif data files. 
  + https://github.com/KDE/massif-visualizer
  + http://valgrind.org/docs/manual/ms-manual.html
  

- MTuner
  + https://github.com/milostosic/MTuner
    * MTuner is a C/C++ memory profiler and memory leak finder for Windows, PlayStation 4 and 3, Android and other platforms 
  + https://milostosic.github.io/MTuner/


- Valingrand
  + http://valgrind.org/
    * Valgrind is an instrumentation framework for building dynamic analysis tools. There are Valgrind tools that can automatically detect many memory management and threading bugs, and profile your programs in detail. You can also use Valgrind to build new tools.
  + http://valgrind.org/docs/manual/index.html
  + http://valgrind.org/docs/manual/manual.html
  + http://valgrind.org/docs/download_docs.html
  + https://sourceware.org/git/?p=valgrind.git


- Visual Studio 2019 
  + Find memory leaks with the CRT library
    * https://docs.microsoft.com/en-us/visualstudio/debugger/finding-memory-leaks-using-the-crt-library?view=vs-2019
  + Measure memory usage in Visual Studio
    * https://docs.microsoft.com/en-us/visualstudio/profiling/memory-usage?view=vs-2019

