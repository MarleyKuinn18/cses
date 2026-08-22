cmake_minimum_required(VERSION 4.0)
project(cses)

set(CMAKE_CXX_STANDARD 14)

include_directories(introductory-problems)

add_executable(cses
        introductory-problems/MissingNumber.cpp
        introductory-problems/IncreasingArray.cpp
        introductory-problems/Permutations.cpp
        sorting-and-searching/MaximumSubarraySum.cpp
        sorting-and-searching/ArrayDivision.cpp
)
