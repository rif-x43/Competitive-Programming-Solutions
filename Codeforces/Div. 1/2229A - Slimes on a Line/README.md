# A. Slimes on a Line
 
| Field | Value |
|---|---|
| **Contest** | [2229](https://codeforces.com/contest/2229) |
| **Problem** | [2229A — Slimes on a Line](https://codeforces.com/contest/2229/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, greedy, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

There are `n` slimes on a line, where slime `i` is at position `aᵢ` on the line. You will perform the following operation some number of times (possibly none):

 - select an integer `x`, then for each `j` (`1 ≤ j ≤ n`):  - if `aⱼ < x` then do `aⱼ := aⱼ + 1`.
- if `aⱼ > x` then do `aⱼ := aⱼ - 1`.
- if `aⱼ = x` then do nothing.

Determine the minimum number of operations to make all slimes occupy the same position.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 100`). The description of the test cases follows. 

The first line of each testcase contains an integer `n` (`2 ≤ n ≤ 1000`) — the number of slimes.

The second line of each testcase contains `n` integers `a₁,a₂,…,aₙ` (`1 ≤ aᵢ ≤ 1000`) — the initial positions of the slimes.

It is guaranteed that the sum of `n` over all test cases does not exceed `1000`.

## Output

For each testcase, output the minimum number of operations required to make all slimes occupy the same position.

## Examples

**Example:**

```
10
5
1 2 3 4 5
5
3 3 3 3 3
6
5 6 7 1 2 3
2
2 5
4
1 3 8 7
4
6 2 1 8
3
1 3 9
5
1 10 1 10 10
8
10 8 5 9 1 6 9 10
2
1 1000
```

**Output:**

```
2
0
3
2
4
4
4
5
5
500
```

## Note

**Test Case 1:** We can perform `2` operations, both with `x = 3`. The first operation updates the array of positions to `a = [2, 3, 3, 3, 4]`, and then the second operation updates it to `a = [3, 3, 3, 3, 3]`.

**Test Case 2:** All the slimes are already at position `3`, and hence `0` operations are needed.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2229/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
