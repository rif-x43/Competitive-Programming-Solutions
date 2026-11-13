# 1620. Factory Machines

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1620 — Factory Machines](https://cses.fi/problemset/task/1620/) |
| **Category** | Sorting and Searching |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++20) |
| **Runtime** | 2026-10-09 22:22:18 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/19023997/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

A factory has $n$ machines which can be used to make products. Your goal is to make a total of $t$ products.

For each machine, you know the number of seconds it needs to make a single product. The machines can work simultaneously, and you can freely decide their schedule.

What is the shortest time needed to make $t$ products?

## Input

The first input line has two integers $n$ and $t$: the number of machines and products.

The next line has $n$ integers $k_1,k_2,\dots,k_n$: the time needed to make a product using each machine.

## Output

Print one integer: the minimum time needed to make $t$ products.

## Constraints

- $1 \le n \le 2 \cdot 10^5$
- $1 \le t \le 10^9$
- $1 \le k_i \le 10^9$

## Examples

**Example:**

**Input:**
```
3 7
3 2 5
```

**Output:**
```
8
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1620/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
