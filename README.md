# C++ Vector Out-of-Bounds Access Bug

This repository demonstrates a common C++ error: accessing an element in a `std::vector` beyond its valid index range.  This results in undefined behavior and can lead to crashes or unpredictable results.

The `bug.cpp` file contains the buggy code. The `bugSolution.cpp` file shows the corrected version.

**Understanding the Problem:**

`std::vector` in C++ uses dynamic memory allocation.  Attempting to access an element beyond the allocated size leads to memory access violations. The behavior is undefined - it could lead to a segmentation fault, data corruption, or seemingly correct outputs, making it difficult to debug.

**Solution:**

Always ensure that you use the correct condition for iterating through a `std::vector`.  Use `i < vec.size()` to ensure the loop does not exceed the valid index range.