# C1. We Be Flipping (Easy Version)
 
| Field | Value |
|---|---|
| **Contest** | [2229](https://codeforces.com/contest/2229) |
| **Problem** | [2229C1 — We Be Flipping (Easy Version)](https://codeforces.com/contest/2229/problem/C1) |
| **Rating** | 900 |
| **Tags** | constructive algorithms, greedy |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 93 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

**This is the easy version of the problem. The difference between the versions is that in this version, you must minimise the sum. You can hack only if you solved all versions of this problem.** 

You have an array `a` of length `n` which consists of non-zero (but possibly negative) integers. You will perform the following operation at most `n` times (possibly none):

 - select an index `i` (`1 ≤ i ≤ n`) such that `aᵢ > 0`
- then for each `j` where `1 ≤ j ≤ i` do `aⱼ := -aⱼ`.

Output a valid sequence of operations of length at most `n` which `colorredminimises` the sum of `a` at the end.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows. 

The first line of each testcase contains an integer `n` (`2 ≤ n ≤ 2 · 10⁵`) — the length of the array `a`.

The second line of each testcase contains `n` integers `a₁,a₂,…,aₙ` (`-10⁹ ≤ aᵢ ≤ 10⁹, aᵢ ≠ 0`).

It is guaranteed that the sum of `n` over all test cases does not exceed `2 · 10⁵`.

## Output

For each testcase, output a single integer `k` (`0 ≤ k ≤ n`) — the number of operations you will perform.

Now output `k` integers `b₁,…,bₖ` where `bᵢ` is the index you perform the `i`th operation on.

After performing the operations, the sum of `a` should be minimal.

## Examples

**Example:**

```
3
5
-1 -2 -3 -5 -4
5
-1 -2 3 -5 4
4
5 7 10 19
```

**Output:**

```
0

4
3 5 4 2
1
4

```

## Note

In the first testcase, the sum is already minimised. So no operations are required.

In the second testcase, the operations are made as follows: 

 - `[-1, -2, 3, -5, 4] xrightarrowi = 3 [colorred1, 2, -3, -5, 4]`
- `[1, 2, -3, -5, 4] xrightarrowi = 5 [colorred-1, -2, 3, 5, -4]`
- `[-1, -2, 3, 5, -4] xrightarrowi = 4 [colorred1, 2, -3, -5, -4]`
- `[1, 2, -3, -5, -4] xrightarrowi = 2 [colorred-1, -2, -3, -5, -4]`

This has a sum of `-15`, which is the minimum possible.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2229/problem/C1)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
