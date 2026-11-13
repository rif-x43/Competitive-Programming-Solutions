# A. Coins
 
| Field | Value |
|---|---|
| **Contest** | [1814](https://codeforces.com/contest/1814) |
| **Problem** | [1814A — Coins](https://codeforces.com/contest/1814/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

In Berland, there are two types of coins, having denominations of `2` and `k` burles.

Your task is to determine whether it is possible to represent `n` burles in coins, i. e. whether there exist non-negative integers `x` and `y` such that `2 · x + k · y = n`.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 10⁴`) — the number of test cases.

The only line of each test case contains two integers `n` and `k` (`1 ≤ k ≤ n ≤ 10¹⁸`; `k ≠ 2`).

## Output

For each test case, print `YES` if it is possible to represent `n` burles in coins; otherwise, print `NO`. You may print each letter in any case (`YES`, `yes`, `Yes` will all be recognized as positive answer, `NO`, `no` and `nO` will all be recognized as negative answer).

## Examples

**Example:**

```
4
5 3
6 1
7 4
8 8
```

**Output:**

```
YES
YES
NO
YES

```

## Note

In the first test case, you can take one coin with denomination `2` and one coin with denomination `k = 3`.

In the second test case, you can take three coins with denomination `2`. Alternatively, you can take six coins with denomination `k = 1`.

In the third test case, there is no way to represent `7` burles.

In the fourth test case, you can take one coin with denomination `k = 8`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1814/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
