# 1068. Weird Algorithm

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1068 — Weird Algorithm](https://cses.fi/problemset/task/1068/) |
| **Category** | Introductory Problems |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++23) |
| **Runtime** | 2026-10-07 07:14:02 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/18993877/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

Consider an algorithm that takes as input a positive integer $n$. If $n$ is even, the algorithm divides it by two, and if $n$ is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until $n$ is one. For example, the sequence for $n=3$ is as follows:


$$3 \rightarrow 10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1$$


Your task is to simulate the execution of the algorithm for a given value of $n$.

## Input

The only input line contains an integer $n$.

## Output

Print a line that contains all values of $n$ during the algorithm.

## Constraints

- $1 \le n \le 10^6$

## Examples

**Example:**

**Input:**
```
3
```

**Output:**
```
3 10 5 16 8 4 2 1
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1068/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
