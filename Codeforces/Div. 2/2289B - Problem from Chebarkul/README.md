# B. Problem from Chebarkul
 
| Field | Value |
|---|---|
| **Contest** | [2289](https://codeforces.com/contest/2289) |
| **Problem** | [2289B — Problem from Chebarkul](https://codeforces.com/contest/2289/problem/B) |
| **Rating** | Gym/Unrated |
| **Tags** | data structures, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given an array of integers `a₁, a₂, …, aₙ` and an integer `k`.

Find the number of integers `1 ≤ i ≤ k` such that in all subsequences`∗` of the array `a` of length `k`, the same number is located at the `i`-th position. 

`∗`A sequence `b` is a subsequence of a sequence `a` if `b` can be obtained from `a` by the deletion of several (possibly, zero or all) element from arbitrary positions.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows.

The first line of each test case contains two integers `n` and `k` (`1 ≤ k ≤ n ≤ 2 · 10⁵`).

The second line of each test case contains `n` integers `a₁, a₂, …, aₙ` (`1 ≤ aᵢ ≤ n`).

It is guaranteed that the sum of `n` over all test cases does not exceed `2 · 10⁵`.

## Output

For each test case, output one integer — the number of positions at which the same number is located in all subsequences of length `k` of the array `a`.

## Examples

**Example:**

```
7
1 1
1
3 1
2 2 3
4 2
1 1 1 1
4 2
1 2 1 2
4 4
4 1 4 2
5 3
1 2 2 2 5
6 5
1 1 2 2 1 1
```

**Output:**

```
1
0
2
0
4
1
3
```

## Note

In the first test case, the array `a` has exactly one subsequence of length `1`, so the answer is one.

In the second test case, the array `a` has three subsequences of length `1`: `[a₁]`, `[a₂]`, and `[a₃]`. The answer is zero, because at the first position there can be either the number `2` or the number `3`.

In the third test case, all subsequences of length `2` of the array `a` are equal to `[1, 1]`, so the answer is two.

In the fourth test case, the array `a` has six subsequences of length `2`. It is enough to consider two of them: `[a₁, a₄] = [1, 2]` and `[a₂, a₃] = [2, 1]`. The answer for this test case is zero, because at both positions there can be either one or two.

In the fifth test case, the array `a` has exactly one subsequence of length `4`, so the answer is four.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2289/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
