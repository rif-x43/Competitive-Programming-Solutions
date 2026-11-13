# A. Twin Permutations
 
| Field | Value |
|---|---|
| **Contest** | [1831](https://codeforces.com/contest/1831) |
| **Problem** | [1831A — Twin Permutations](https://codeforces.com/contest/1831/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given a permutation`^dagger` `a` of length `n`.

Find any permutation `b` of length `n` such that `a₁+b₁ ≤ a₂+b₂ ≤ a₃+b₃ ≤ … ≤ aₙ+bₙ`.

It can be proven that a permutation `b` that satisfies the condition above always exists.

`^dagger` A permutation of length `n` is an array consisting of `n` distinct integers from `1` to `n` in arbitrary order. For example, `[2,3,1,5,4]` is a permutation, but `[1,2,2]` is not a permutation (`2` appears twice in the array), and `[1,3,4]` is also not a permutation (`n=3` but there is `4` in the array).

## Input

Each test contains multiple test cases. The first line of input contains a single integer `t` (`1 ≤ t ≤ 2000`) — the number of test cases. The description of test cases follows.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 100`) — the length of permutations `a` and `b`.

The second line of each test case contains `n` distinct integers `a₁,a₂,…,aₙ` (`1 ≤ aᵢ ≤ n`) — the elements of permutation `a`. All elements of `a` are distinct.

Note that there is no bound on the sum of `n` over all test cases.

## Output

For each test case, output **any** permutation `b` which satisfies the constraints mentioned in the statement. It can be proven that a permutation `b` that satisfies the condition above always exists.

## Examples

**Example:**

```
5
5
1 2 4 5 3
2
1 2
1
1
3
3 2 1
4
1 4 3 2
```

**Output:**

```
1 2 4 3 5
2 1
1
1 2 3
1 2 3 4
```

## Note

In the first test case `a=[1, 2, 4, 5, 3]`. Then the permutation `b=[1, 2, 4, 3, 5]` satisfies the condition because `1 + 1 ≤ 2 + 2 ≤ 4 + 4 ≤ 5 + 3 ≤ 3 + 5`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1831/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
