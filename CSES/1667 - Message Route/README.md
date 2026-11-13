# 1667. Message Route

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1667 — Message Route](https://cses.fi/problemset/task/1667/) |
| **Category** | Graph Algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++20) |
| **Runtime** | 2026-10-10 21:39:12 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/19034584/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

Syrjälä's network has $n$ computers and $m$ connections. Your task is to find out if Uolevi can send a message to Maija, and if it is possible, what is the minimum number of computers on such a route.

## Input

The first input line has two integers $n$ and $m$: the number of computers and connections. The computers are numbered $1,2,\dots,n$. Uolevi's computer is $1$ and Maija's computer is $n$.

Then, there are $m$ lines describing the connections. Each line has two integers $a$ and $b$: there is a connection between those computers.

Every connection is between two different computers, and there is at most one connection between any two computers.

## Output

If it is possible to send a message, first print $k$: the minimum number of computers on a valid route. After this, print an example of such a route. You can print any valid solution.

If there are no routes, print "IMPOSSIBLE".

## Constraints

- $2 \le n \le 10^5$
- $1 \le m \le 2 \cdot 10^5$
- $1 \le a,b \le n$

## Examples

**Example:**

**Input:**
```
5 5
1 2
1 3
1 4
2 3
5 4
```

**Output:**
```
3
1 4 5
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1667/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
