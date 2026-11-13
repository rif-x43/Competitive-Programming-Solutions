# B. Deletion Sort
 
| Field | Value |
|---|---|
| **Contest** | [2200](https://codeforces.com/contest/2200) |
| **Problem** | [2200B — Deletion Sort](https://codeforces.com/contest/2200/problem/B) |
| **Rating** | 800 |
| **Tags** | bitmasks, brute force, greedy, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

AksLolCoding is playing a game on an array `a` of `n` positive integers. During each turn:

 - If `a` is **non-decreasing**`∗`, the game ends.
- Otherwise, AksLolCoding can choose **any** single element and remove it from the array.

Determine the **minimum** possible number of elements that can be remaining in the array after the game ends.

`∗``a` is non-decreasing if `aᵢ≤ aᵢ₊₁` for all `1≤ i≤ m-1`, where `m` is the length of `a`.

## Input

The first line contains an integer `t` (`1 ≤ t ≤ 1000`), the number of test cases.

The first line of each test case contains an integer `n` (`1 ≤ n ≤ 10`).

The second line of each test case contains `n` integers, the elements of `a` (`1 ≤ aᵢ ≤ 100`).

## Output

For each test case, output an integer: the minimum possible number of elements left once the array is sorted.

## Examples

**Example:**

```
3
4
1 4 2 3
1
100
2
6 7
```

**Output:**

```
1
1
2
```

## Note

In the first test case, the minimum of `1` element can be achieved by removing `1`, `2`, and `3` in that order.

In the second and third test cases, no elements can be removed.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2200/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
