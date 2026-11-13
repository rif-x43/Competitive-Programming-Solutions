# B. Blank Space
 
| Field | Value |
|---|---|
| **Contest** | [1829](https://codeforces.com/contest/1829) |
| **Problem** | [1829B — Blank Space](https://codeforces.com/contest/1829/problem/B) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given a binary array `a` of `n` elements, a binary array is an array consisting only of `0`s and `1`s. 

A blank space is a segment of **consecutive** elements consisting of only `0`s. 

Your task is to find the length of the longest blank space.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 1000`) — the number of test cases.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 100`) — the length of the array.

The second line of each test case contains `n` space-separated integers `aᵢ` (`0 ≤ aᵢ ≤ 1`) — the elements of the array.

## Output

For each test case, output a single integer — the length of the longest blank space.

## Examples

**Example:**

```
5
5
1 0 0 1 0
4
0 1 1 1
1
0
3
1 1 1
9
1 0 0 0 1 0 0 0 1
```

**Output:**

```
2
1
1
0
3

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1829/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
