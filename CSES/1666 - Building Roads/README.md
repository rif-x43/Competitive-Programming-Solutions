# 1666. Building Roads

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1666 — Building Roads](https://cses.fi/problemset/task/1666/) |
| **Category** | Graph Algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++20) |
| **Runtime** | 2026-10-10 20:09:18 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/19033775/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

Byteland has $n$ cities, and $m$ roads between them. The goal is to construct new roads so that there is a route between any two cities.

Your task is to find out the minimum number of roads required, and also determine which roads should be built.

## Input

The first input line has two integers $n$ and $m$: the number of cities and roads. The cities are numbered $1,2,\dots,n$.

After that, there are $m$ lines describing the roads. Each line has two integers $a$ and $b$: there is a road between those cities.

A road always connects two different cities, and there is at most one road between any two cities.

## Output

First print an integer $k$: the number of required roads.

Then, print $k$ lines that describe the new roads. You can print any valid solution.

## Constraints

- $1 \le n \le 10^5$
- $1 \le m \le 2 \cdot 10^5$
- $1 \le a,b \le n$

## Examples

**Example:**

**Input:**
```
4 2
1 2
3 4
```

**Output:**
```
1
2 3
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1666/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
