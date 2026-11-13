# B. Everything Everywhere
 
| Field | Value |
|---|---|
| **Contest** | [2226](https://codeforces.com/contest/2226) |
| **Problem** | [2226B — Everything Everywhere](https://codeforces.com/contest/2226/problem/B) |
| **Rating** | 900 |
| **Tags** | greedy, math, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 78 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.5 seconds | 256 megabytes |

---

An array is called *good* if the difference between the maximum value and the minimum value in the array is equal to the greatest common divisor (GCD) of all the elements in the array. Note that an empty array is considered to be not good.

More formally, an array `[a₁, a₂, …, aₘ]` is *good* if and only if ```max(a₁, a₂, …, aₘ) - min(a₁, a₂, …, aₘ) = gcd(a₁, a₂, …, aₘ).```

You are given a permutation`∗` `p` of length `n`. Determine the number of good subarrays`†` in the given permutation. 

`∗`A permutation of length `m` is an array consisting of `m` distinct integers from `1` to `m` in arbitrary order. For example, `[2,3,1,5,4]` is a permutation, but `[1,2,2]` is not a permutation (`2` appears twice in the array), and `[1,3,4]` is also not a permutation (`m=3` but there is `4` in the array). 

`†`An array `b` is a subarray of an array `a` if `b` can be obtained from `a` by the deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.  In particular, an array is a subarray of itself.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows. 

The first line of each testcase contains a single integer `n` (`2 ≤ n ≤ 2 · 10⁵`) — the length of the permutation `p`.

The second line of each testcase contains `n` integers `p₁, p₂, …, pₙ` (`1 ≤ pᵢ ≤ n`) — the permutation `p`. It is guaranteed that `p` is a permutation.

It is guaranteed that the sum of `n` over all the test cases does not exceed `2 · 10⁵`.

## Output

For each testcase, print a single integer — the number of good subarrays in the given permutation.

## Examples

**Example:**

```
3
2
1 2
9
6 1 5 9 4 7 2 8 3
4
1 2 3 4
```

**Output:**

```
1
0
3
```

## Note

For the first testcase, only one subarray is good, which is `[1, 2]`.

For the second testcase, it can be proven that no good subarrays exist in the given permutation.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2226/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
