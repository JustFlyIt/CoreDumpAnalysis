# CoreDumpAnalysis
Code for causing core dumps under various conditions.  All code will cause a core dump that can then be analyzed by gdb or other tool.

DivideByZero.c - line 20 attempts to divide by zero and causes a core dump.  Compile with:  
    gcc -o DivideByZero DivideByZero.c
