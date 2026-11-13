# A. Doremy's Paint 3
 
| Field | Value |
|---|---|
| **Contest** | [1890](https://codeforces.com/contest/1890) |
| **Problem** | [1890A — Doremy's Paint 3](https://codeforces.com/contest/1890/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

An array `b₁, b₂, …, bₙ` of positive integers is good if all the sums of two adjacent elements are equal to the same value. More formally, the array is good if there exists a `k` such that `b₁ + b₂ = b₂ + b₃ = … = bₙ₋₁ + bₙ = k`.

Doremy has an array `a` of length `n`. Now Doremy can permute its elements (change their order) however she wants. Determine if she can make the array good.

## Input

The input consists of multiple test cases. The first line contains a single integer `t` (`1≤ t≤ 100`) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer `n` (`2 ≤ n ≤ 100`) — the length of the array `a`.

The second line of each test case contains `n` integers `a₁,a₂,…,aₙ` (`1 ≤ aᵢ ≤ 10⁵`).

There are no constraints on the sum of `n` over all test cases.

## Output

For each test case, print "`Yes`" (without quotes), if it is possible to make the array good, and "`No`" (without quotes) otherwise.

You can output the answer in any case (upper or lower). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive responses.

## Examples

**Example:**

```
5
2
8 9
3
1 1 2
4
1 1 4 5
5
2 3 3 3 3
4
100000 100000 100000 100000
```

**Output:**

```
Yes
Yes
No
No
Yes

```

## Note

In the first test case, `[8,9]` and `[9,8]` are good.

In the second test case, `[1,2,1]` is good because `a₁+a₂=a₂+a₃=3`.

In the third test case, it can be shown that no permutation is good.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1890/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
