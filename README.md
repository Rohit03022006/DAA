# Design and Analysis of Algorithms (DAA)

<p align="center">
  <b>A Collection of DAA Algorithms Implemented in C and C++</b>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%20%7C%20C++-blue?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Course-DAA-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Status-Learning%20%26%20Coursework-green?style=for-the-badge" />
</p>

## About the Repository

This repository contains implementations of various algorithms studied in **Design and Analysis of Algorithms (DAA)** as part of academic coursework.

The objective of this repository is to understand algorithmic problem-solving techniques, implement fundamental algorithms using C and C++, and explore their efficiency through time and space complexity analysis.

The repository covers essential algorithmic paradigms such as:

- Searching and Sorting
- Divide and Conquer
- Greedy Algorithms
- Dynamic Programming
- Backtracking
- Graph Algorithms
- Matrix Multiplication

## Repository Structure

```text
DAA/
│
├── Lab1/
│
├── 01_Knapsack_Problem.cpp
├── Bellman–Ford.cpp
├── BinarySearch.c
├── Bubble_heap_sort.cpp
├── Dijkstra's_algorithm.cpp
├── Floyd_Warshall_Algorithm.cpp
├── Longest_Common_Subsequence .cpp
├── N-Queens. cpp
├── Sorting_algo.cpp
├── Strassen_Matrix.cpp
│
└── README.md
```

## Algorithms Implemented

### 1. Searching Algorithms

| Algorithm | Description | Time Complexity |
|---|---|---|
| Binary Search | Searches for an element in a sorted array by repeatedly dividing the search interval. | O(log n) |

### 2. Sorting Algorithms

| Algorithm | Description | Average Time Complexity |
|---|---|---|
| Bubble Sort | Repeatedly compares adjacent elements and swaps them if necessary. | O(n²) |
| Heap Sort | Uses a binary heap to sort elements efficiently. | O(n log n) |
| Sorting Algorithms | Collection of sorting algorithm implementations. | Depends on algorithm |

### 3. Dynamic Programming

| Algorithm | Description | Time Complexity |
|---|---|---|
| 0/1 Knapsack | Finds the maximum value of items that can fit within a given capacity. | O(nW) for standard DP |
| Longest Common Subsequence (LCS) | Finds the longest subsequence common to two sequences. | O(mn) |

### 4. Graph Algorithms

| Algorithm | Description | Time Complexity |
|---|---|---|
| Bellman–Ford | Finds single-source shortest paths and detects reachable negative-weight cycles. | O(VE) |
| Dijkstra's Algorithm | Finds shortest paths from a source vertex in graphs with non-negative edge weights. | O(V²) with adjacency matrix |
| Floyd–Warshall | Computes shortest paths between all pairs of vertices. | O(V³) |

### 5. Backtracking

| Algorithm | Description | Time Complexity |
|---|---|---|
| N-Queens Problem | Places N queens on an N × N chessboard without attacking each other. | O(N!) upper bound |

### 6. Divide and Conquer

| Algorithm | Description | Time Complexity |
|---|---|---|
| Strassen's Matrix Multiplication | Multiplies matrices using seven recursive multiplications. | O(n^2.807) |

*Complexities represent standard algorithmic versions and may differ from the specific implementation.*

## Technologies Used

- **Programming Languages:** C, C++
- **Compiler:** GCC / G++
- **Development Environment:** VS Code
- **Version Control:** Git
- **Repository Hosting:** GitHub

## Getting Started

### Prerequisites

Install a C/C++ compiler such as GCC or MinGW.

Verify the installation:

```bash
gcc --version
g++ --version
```

### Clone the Repository

```bash
git clone https://github.com/Rohit03022006/DAA.git
```

### Navigate to the Repository

```bash
cd DAA
```

### Compile and Run Programs

For C programs:

```bash
gcc BinarySearch.c -o BinarySearch
```

For C++ programs:

```bash
g++ -std=c++17 01_Knapsack_Problem.cpp -o Knapsack
```

Run the executable on Windows:

```bash
Knapsack.exe
```

Run the executable on Linux/macOS:

```bash
./Knapsack
```

### Example: Compile Bellman–Ford

```bash
g++ -std=c++17 "Bellman–Ford.cpp" -o BellmanFord
```

```bash
./BellmanFord
```

Each source file can be compiled and executed independently.

## Learning Objectives

Through these implementations, the repository aims to develop an understanding of:

- Algorithm design and problem-solving techniques
- Asymptotic analysis and Big-O notation
- Time and space complexity
- Recursion and iterative approaches
- Divide and conquer strategies
- Greedy algorithm design
- Dynamic programming and optimization
- Backtracking and constraint satisfaction
- Graph traversal and shortest-path algorithms
- Efficient implementation using C and C++

## Purpose

This repository serves as an academic reference for learning and practicing Design and Analysis of Algorithms.

It is intended for:

- DAA coursework and laboratory practice
- Algorithm revision
- Understanding algorithm implementations
- Complexity analysis
- Programming practice and technical interview preparation

## Author

**Rohit**

B.Tech Computer Science and Applied Mathematics

GitHub: [@Rohit03022006](https://github.com/Rohit03022006)

---

<p align="center">
  <b>Learning algorithms one problem at a time.</b>
</p>
