# A. Extremely Round
 
| Field | Value |
|---|---|
| **Contest** | [1766](https://codeforces.com/contest/1766) |
| **Problem** | [1766A — Extremely Round](https://codeforces.com/contest/1766/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 3 seconds | 512 megabytes |

---

Let's call a positive integer *extremely round* if it has only one non-zero digit. For example, `5000`, `4`, `1`, `10`, `200` are extremely round integers; `42`, `13`, `666`, `77`, `101` are not.

You are given an integer `n`. You have to calculate the number of extremely round integers `x` such that `1 ≤ x ≤ n`.

## Input

The first line contains one integer `t` (`1 ≤ t ≤ 10⁴`) — the number of test cases.

Then, `t` lines follow. The `i`-th of them contains one integer `n` (`1 ≤ n ≤ 999999`) — the description of the `i`-th test case.

## Output

For each test case, print one integer — the number of extremely round integers `x` such that `1 ≤ x ≤ n`.

## Examples

**Example:**

```
5
9
42
13
100
111
```

**Output:**

```
9
13
10
19
19

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1766/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
