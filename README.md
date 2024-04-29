# Binary Search Algorithm

This repository contains C++ code for implementing the binary search algorithm. The binary search algorithm is used to efficiently find a target value within a sorted array. Also, can find Sequential Search Algorithm in repistory.

## Contents

- [Introduction](#introduction)
- [Implementation](#implementation)
- [Usage](#usage)

## Introduction

Binary search is a fundamental algorithm used for searching in ordered data structures such as arrays. It works by repeatedly dividing in half the portion of the list that could contain the target value until you've narrowed down the possible locations to just one.

## Implementation

The repository contains two implementations of the binary search algorithm:
1. **Iterative Binary Search:** This implementation uses a while loop to iteratively search for the target value in the array.
2. **Recursive Binary Search:** This implementation uses recursion to search for the target value in the array.

Both implementations are provided in the `main.cpp` file.

## Usage

To use the binary search algorithm, follow these steps:
1. Include the `main.cpp` file in your C++ project.
2. Call the `binarySearch()` or `recursiveBinarySearch()` function with the appropriate arguments.
3. The functions return the index of the target value if found, otherwise -1.

Example usage:

```cpp
int main() {
    int a[] = {7,15,27,45,87,93};
    int result = recursiveBinarySearch(a, 93, 0, 5);
    if(result >= 0)
        cout << "Find, index: " << result;
    else
        cout << "Couldn't find.";
    return 0;
}
