# A. Blocked
 
| Field | Value |
|---|---|
| **Contest** | [2220](https://codeforces.com/contest/2220) |
| **Problem** | [2220A — Blocked](https://codeforces.com/contest/2220/problem/A) |
| **Rating** | 800 |
| **Tags** | greedy, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Given an array `a` of integers of size `n`, we say that a position `1 ≤ i ≤ n` is *blocked* if `aᵢ` can be expressed as the sum of a subset of `a₁, a₂, …, aᵢ₋₁` (i.e. there exist `1 ≤ j₁ < j₂ < … < jₖ ≤ i-1` such that `aⱼ_₁ + aⱼ_₂ + … + aⱼ_ₖ = aᵢ`). Reorder `a` so that no position is blocked or report that it is impossible.

For example, reordering the array [`3, 2, 5`] to [`2, 3, 5`] makes position `3` blocked, since we can express `5 = 2 + 3`, but if we reorder it to [`3, 5, 2`], no position is blocked.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 400`). The description of the test cases follows. 

The first line of each test case contains an integer `n` (`1 ≤ n ≤ 200`).

The second line contains `n` integers, denoting the array `a` (`1 ≤ aᵢ ≤ 100`).

## Output

For each test case, print any order of `a` such that no position is blocked if it exists, otherwise print `-1`.

## Examples

**Example:**

```
4
3
1 5 9
4
1 3 3 2
3
1 2 3
1
1

```

**Output:**

```
5 9 1
-1
3 1 2
1
```

## Note

In the third test case, the array [`3, 1, 2`] has no position blocked:

Position `1` is not blocked since `3` can't be expressed as the sum of a subset of [].

Position `2` is not blocked since `1` can't be expressed as the sum of a subset of [`3`].

Position `3` is not blocked since `2` can't be expressed as the sum of a subset of [`3, 1`].

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2220/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
