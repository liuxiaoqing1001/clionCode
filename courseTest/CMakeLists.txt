cmake_minimum_required(VERSION 3.10)
project(Expert)

set(CMAKE_CXX_STANDARD 11)


add_executable(Expert Data/Bisearch.cpp Data/FindSort.cpp Data/GraphByList.cpp Data/GraphByMatrix.cpp Data/LinkList.cpp Data/Tree.cpp OS/Bank.cpp OS/SpaceAllocation.cpp OS/Job.cpp Algorithm/KnapsackProblem.cpp Algorithm/Sudu.cpp Algorithm/Test_2.cpp Algorithm/Test_1.cpp Algorithm/Matrix_Chain.cpp Algorithm/LCS.cpp)