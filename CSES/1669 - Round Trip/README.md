# 1669. Round Trip

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1669 — Round Trip](https://cses.fi/problemset/task/1669/) |
| **Category** | Graph Algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++20) |
| **Runtime** | 2026-10-13 06:23:01 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/19056942/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

Byteland has $n$ cities and $m$ roads between them. Your task is to design a round trip that begins in a city, goes through two or more other cities, and finally returns to the starting city. Every intermediate city on the route has to be distinct.

## Input

The first input line has two integers $n$ and $m$: the number of cities and roads. The cities are numbered $1,2,\dots,n$.

Then, there are $m$ lines describing the roads. Each line has two integers $a$ and $b$: there is a road between those cities.

Every road is between two different cities, and there is at most one road between any two cities.

## Output

First print an integer $k$: the number of cities on the route. Then print $k$ cities in the order they will be visited. You can print any valid solution.

If there are no solutions, print "IMPOSSIBLE".

## Constraints

- $1 \le n \le 10^5$
- $1 \le m \le 2 \cdot 10^5$
- $1 \le a,b \le n$

## Examples

**Example:**

**Input:**
```
5 6
1 3
1 2
5 3
1 5
2 4
4 5
```

**Output:**
```
4
3 5 1 3
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1669/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
