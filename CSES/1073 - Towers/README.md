# 1073. Towers

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1073 — Towers](https://cses.fi/problemset/task/1073/) |
| **Category** | Sorting and Searching |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++20) |
| **Runtime** | 2026-10-09 20:05:01 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/19022596/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

You are given $n$ cubes in a certain order, and your task is to build towers using them. Whenever two cubes are one on top of the other, the upper cube must be smaller than the lower cube.

You must process the cubes in the given order. You can always either place the cube on top of an existing tower, or begin a new tower. What is the minimum possible number of towers?

## Input

The first input line contains an integer $n$: the number of cubes.

The next line contains $n$ integers $k_1,k_2,\ldots,k_n$: the sizes of the cubes.

## Output

Print one integer: the minimum number of towers.

## Constraints

- $1 \le n \le 2 \cdot 10^5$
- $1 \le k_i \le 10^9$

## Examples

**Example:**

**Input:**
```
5
3 8 2 1 5
```

**Output:**
```
2
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1073/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
