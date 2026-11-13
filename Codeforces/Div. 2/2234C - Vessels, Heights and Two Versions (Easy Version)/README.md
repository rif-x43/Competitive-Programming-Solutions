# C. Vessels, Heights and Two Versions (Easy Version)
 
| Field | Value |
|---|---|
| **Contest** | [2234](https://codeforces.com/contest/2234) |
| **Problem** | [2234C — Vessels, Heights and Two Versions (Easy Version)](https://codeforces.com/contest/2234/problem/C) |
| **Rating** | 1200 |
| **Tags** | dfs and similar, dsu, greedy, implementation, two pointers |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 296 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

**This is the easy version of the problem. The difference between the versions is that in this version, constraints on `n` and on the number of test cases are smaller. You can hack only if you solved all versions of this problem.**

There are `n` communicating vessels of infinite height arranged in a circle. The base area of each vessel is `1` cm`²`, and between the `i`-th vessel and the `(i mod n) + 1`-th vessel there is a connection of negligible volume at height `hᵢ` cm. For each vessel `i`, find the maximum total volume of water in cm`³` that can be placed in these vessels under the condition that the `i`-th vessel remains empty.

Formally, you are given an array `h₁, h₂, …, hₙ`. A cyclic array of non-negative integers `w₁, w₂, …, wₙ` is called good if the following holds:

- For every `i` from `1` to `n`, if `max(wᵢ, wᵢ ₘₒd ₙ ₊ ₁) > hᵢ`, then `wᵢ = wᵢ ₘₒd ₙ ₊ ₁`. In other words, if the maximum of two neighboring elements of the array `w` exceeds the corresponding element of the array `h`, then these two neighboring elements of the array `w` must be equal.

For each `i` from `1` to `n`, output the maximum possible sum `w₁ + w₂ + … + wₙ` among all good arrays `w₁, w₂, …, wₙ`, under the condition that `wᵢ = 0`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 1000`). The description of the test cases follows.

The first line of each test case contains one integer `n` (`3 ≤ n ≤ 3000`) — the number of vessels.

The second line of each test case contains `n` integers `h₁, h₂, …, hₙ` (`1 ≤ hᵢ ≤ 10⁹`) — the heights of the partitions between the vessels.

It is guaranteed that the sum of `n` over all test cases does not exceed `3000`.

## Output

For each test case, output `n` integers — the `l`-th integer means the maximum total volume of water in cm`³` in the vessels under the condition that the `l`-th vessel remains empty.

## Examples

**Example:**

```
4
4
1 2 3 4
5
5 3 1 5 2
6
3 4 2 6 1 5
7
1 2 1 4 2 3 5
```

**Output:**

```
6 6 7 9 
17 16 14 14 17 
21 21 20 20 21 21 
17 17 17 17 21 21 22 
```

## Note

Consider the first test case.

 - To keep vessel `1` empty, one good array is `w = [0, 1, 2, 3]`, with a total of `6` cm`³` of water.
- To keep vessel `2` empty, one good array is `w = [1, 0, 2, 3]`, with a total of `6` cm`³` of water.
- To keep vessel `3` empty, one good array is `w = [2, 2, 0, 3]`, with a total of `7` cm`³` of water.
- To keep vessel `4` empty, one good array is `w = [3, 3, 3, 0]`, with a total of `9` cm`³` of water.

For example, the array `w = [2, 2, 0, 4]` is not good, because `max(w₃, w₄) > h₃`, and therefore `w₃ = w₄` must hold.

It can be shown that each of the arrays above has the maximum possible sum among all suitable options.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2234/problem/C)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
