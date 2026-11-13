# C. Omsk Programmers
 
| Field | Value |
|---|---|
| **Contest** | [2236](https://codeforces.com/contest/2236) |
| **Problem** | [2236C — Omsk Programmers](https://codeforces.com/contest/2236/problem/C) |
| **Rating** | 1000 |
| **Tags** | brute force, greedy, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

An annual programmers fair is taking place on the main square of Omsk. You, as the main programmer of Omsk, decided to take part in this wonderful event and went there. At the entrance, a guard decided to check your skills and gave you a problem:

You are given three integers `a`, `b`, `x`. You want to make `a` and `b` equal. In order to do so, you can apply the following operations:

 - Choose one of the integers `a` or `b` and add `1` to it.
- Choose one of the integers `a` or `b` and divide it by `x` with rounding down.

You need to find the minimum number of operations after which `a` becomes equal to `b`. Can you prove your skills, or will you have to go back home?

## Input

The first line contains a single integer `t` `(1 ≤ t ≤ 10⁴)` — the number of test cases.

Then `t` test cases follow.

Each test case consists of a single line containing three integers `a`, `b`, `x` (`1 ≤ a, b ≤ 10⁹`, `2 ≤ x ≤ 10⁹`).

## Output

For each test case, output a single integer — the minimum number of operations required to make `a` and `b` equal.

## Examples

**Example:**

```
7
1 2 3
2 3 2
7 3 10
17 3 3
10 10 2
4 7 2
1 6 2
```

**Output:**

```
1
1
2
3
0
2
2
```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2236/problem/C)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
