# A. Zero Sum
 
| Field | Value |
|---|---|
| **Contest** | [2247](https://codeforces.com/contest/2247) |
| **Problem** | [2247A — Zero Sum](https://codeforces.com/contest/2247/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms, dp, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given an array `a` of length `n`, consisting only of `-1` and `1`.

You may perform the following operation on `a` any number of times:

 - Choose an index `i` satisfying `1 ≤ i ≤ n - 1`.
- Assign `aᵢ = -aᵢ` and `aᵢ ₊ ₁ = -aᵢ ₊ ₁`.

Determine whether it is possible to make the sum of elements of `a` equal to `0`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 200`). The description of the test cases follows.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 100`) — the length of array `a`.

The second line of each test case contains `n` integers `a₁, a₂, …, aₙ` (`aᵢ ∈ {-1, 1}`) — the array `a`.

## Output

For each test case, print "`YES`" if it is possible to make the sum of elements of `a` equal to `0`, and "`NO`" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive responses.

## Examples

**Example:**

```
5
1
-1
2
1 -1
2
1 1
5
1 -1 1 -1 1
6
-1 1 -1 -1 -1 -1
```

**Output:**

```
NO
YES
NO
NO
YES
```

## Note

In the first example, we cannot perform any operations, and the sum of elements of `a` equals `-1 ≠ 0`, so the answer is "`NO`".

In the second example, the sum of elements of `a` is already `0`, so the answer is "`YES`".

In the fifth example, we can perform an operation with `i = 3`, transforming `a` as follows: `[-1, 1, colorred-1, -1, -1, -1] arrow [-1, 1, colorred1, 1, -1, -1]`. The sum of the resulting array is `0`, so the answer is "`YES`".

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2247/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
