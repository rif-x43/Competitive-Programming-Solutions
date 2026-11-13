# A. Two Permutations
 
| Field | Value |
|---|---|
| **Contest** | [1761](https://codeforces.com/contest/1761) |
| **Problem** | [1761A — Two Permutations](https://codeforces.com/contest/1761/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given three integers `n`, `a`, and `b`. Determine if there exist two permutations `p` and `q` of length `n`, for which the following conditions hold:

 - The length of the longest common prefix of `p` and `q` is `a`.
- The length of the longest common suffix of `p` and `q` is `b`.

A permutation of length `n` is an array containing each integer from `1` to `n` exactly once. For example, `[2,3,1,5,4]` is a permutation, but `[1,2,2]` is not a permutation (`2` appears twice in the array), and `[1,3,4]` is also not a permutation (`n=3` but there is `4` in the array).

## Input

Each test contains multiple test cases. The first line contains a single integer `t` (`1≤ t≤ 10⁴`) — the number of test cases. The description of test cases follows.

The only line of each test case contains three integers `n`, `a`, and `b` (`1≤ a,b≤ n≤ 100`).

## Output

For each test case, if such a pair of permutations exists, output "`Yes`"; otherwise, output "`No`". You can output each letter in any case (upper or lower).

## Examples

**Example:**

```
4
1 1 1
2 1 2
3 1 1
4 1 1
```

**Output:**

```
Yes
No
No
Yes

```

## Note

In the first test case, `[1]` and `[1]` form a valid pair.

In the second test case and the third case, we can show that such a pair of permutations doesn't exist.

In the fourth test case, `[1,2,3,4]` and `[1,3,2,4]` form a valid pair.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1761/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
