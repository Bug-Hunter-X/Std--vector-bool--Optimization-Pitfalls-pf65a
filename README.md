# std::vector<bool> Optimization Pitfalls

This repository demonstrates a common, yet often subtle, bug related to the use of `std::vector<bool>` in C++.  `std::vector<bool>` is often implemented using bit manipulation for memory efficiency.  However, this optimization can lead to unexpected behavior and is often a source of confusion for developers.

## The Bug

The primary issue stems from the fact that `std::vector<bool>` doesn't directly store `bool` values. Instead, it often packs multiple `bool` values into a single byte or word.  This means that accessing elements might not behave as expected compared to other `std::vector` types.

## The Solution

To avoid these problems, it's generally recommended to avoid `std::vector<bool>` altogether and instead use either `std::vector<char>` (for single-bit storage) or `std::vector<bool>` with caution and careful understanding of how it is specialized.

## How to run the code

- Compile and run the files using a standard C++ compiler (such as g++).
  ```bash
g++ vectorBoolBug.cpp -o vectorBoolBug
./vectorBoolBug
g++ vectorBoolSolution.cpp -o vectorBoolSolution
./vectorBoolSolution
```