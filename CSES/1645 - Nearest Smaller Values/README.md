# 1645. Nearest Smaller Values

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1645 — Nearest Smaller Values](https://cses.fi/problemset/task/1645/) |
| **Category** | Sorting and Searching |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++20) |
| **Runtime** | 2026-10-10 11:44:27 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/19028635/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

Given an array of $n$ integers, your task is to find for each array position the nearest position to its left having a smaller value.

## Input

The first input line has an integer $n$: the size of the array.

The second line has $n$ integers $x_1,x_2,\dots,x_n$: the array values.

## Output

Print $n$ integers: for each array position the nearest position with a smaller value. If there is no such position, print $0$.

## Constraints

- $1 \le n \le 2 \cdot 10^5$
- $1 \le x_i \le 10^9$

## Examples

**Example:**

**Input:**
```
8
2 5 1 4 8 3 2 5
```

**Output:**
```
0 1 0 3 4 3 3 7
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1645/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
