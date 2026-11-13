# B. Prefix Max
 
| Field | Value |
|---|---|
| **Contest** | [2185](https://codeforces.com/contest/2185) |
| **Problem** | [2185B — Prefix Max](https://codeforces.com/contest/2185/problem/B) |
| **Rating** | 800 |
| **Tags** | greedy |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.5 seconds | 256 megabytes |

---

You are given an array of `n` integers `a₁, a₂, …, aₙ`. 

The value of an array is the sum of the maximums of each prefix of the array. More formally, the value of an array `a` is `Σᵢ₌₁ ⁿ max(a₁, …, aᵢ)`. For example, the value of the array [`1, 2, 1`] is `max(1) + max(1, 2) + max(1, 2, 1) = 1 + 2 + 2 = 5`.

You can choose two indices `i` and `j` and swap elements `aᵢ` and `aⱼ`; this operation can be applied **at most** one time.

Find the maximum possible value of the array `a` after at most one operation.

## Input

The first line of the input contains a single integer `t` (`1 ≤ t ≤ 100`) — the number of test cases.

The first line of each test case contains a single integer `n` (`2 ≤ n ≤ 50`) — the length of the array `a`.

The second line contains `n` integers `a₁, a₂, …, aₙ` (`1 ≤ aᵢ ≤ 10⁴`) — the array `a`.

## Output

For each test case, output the maximum possible value of the array `a` after the swap has been performed.

## Examples

**Example:**

```
4
5
2 1 4 5 3
2
5 1
3
3 2 1
2
6 7
```

**Output:**

```
25
10
9
14
```

## Note

For the first test case, we can swap `a₁` with `a₄` to get the array [`5, 1, 4, 2, 3`], which has a value of `max(5) + max(5, 1) + max(5, 1, 4) + max(5, 1, 4, 2) + max(5, 1, 4, 2, 3) = 25`.

For the second test case, the current value of the array is `max(5) + max(5, 1) = 10`. If we were to swap `a₁` and `a₂`, `a` would be equal to [`1, 5`], which has a value of `max(1) + max(1, 5) = 6`, meaning the best option is to not perform a swap.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2185/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
