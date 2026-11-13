# B. Woeful Permutation
 
| Field | Value |
|---|---|
| **Contest** | [1712](https://codeforces.com/contest/1712) |
| **Problem** | [1712B — Woeful Permutation](https://codeforces.com/contest/1712/problem/B) |
| **Rating** | 800 |
| **Tags** | constructive algorithms, greedy, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

*I wonder, does the falling rain* *Forever yearn for it's disdain?*Effluvium of the MindYou are given a positive integer `n`.

Find any permutation `p` of length `n` such that the sum `lcm(1,p₁) + lcm(2, p₂) + … + lcm(n, pₙ)` is as large as possible. 

Here `lcm(x, y)` denotes the least common multiple (LCM) of integers `x` and `y`.

A permutation is an array consisting of `n` distinct integers from `1` to `n` in arbitrary order. For example, `[2,3,1,5,4]` is a permutation, but `[1,2,2]` is not a permutation (`2` appears twice in the array) and `[1,3,4]` is also not a permutation (`n=3` but there is `4` in the array).

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 1 000`). Description of the test cases follows.

The only line for each test case contains a single integer `n` (`1 ≤ n ≤ 10⁵`).

It is guaranteed that the sum of `n` over all test cases does not exceed `10⁵`.

## Output

For each test case print `n` integers `p₁`, `p₂`, `…`, `pₙ` — the permutation with the maximum possible value of `lcm(1,p₁) + lcm(2, p₂) + … + lcm(n, pₙ)`.

If there are multiple answers, print any of them.

## Examples

**Example:**

```
2
1
2
```

**Output:**

```
1 
2 1 

```

## Note

For `n = 1`, there is only one permutation, so the answer is `[1]`.

For `n = 2`, there are two permutations: 

 - `[1, 2]` — the sum is `lcm(1,1) + lcm(2, 2) = 1 + 2 = 3`.
- `[2, 1]` — the sum is `lcm(1,2) + lcm(2, 1) = 2 + 2 = 4`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1712/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
