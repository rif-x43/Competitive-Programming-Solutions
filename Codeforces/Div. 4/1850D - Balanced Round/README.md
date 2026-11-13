# D. Balanced Round
 
| Field | Value |
|---|---|
| **Contest** | [1850](https://codeforces.com/contest/1850) |
| **Problem** | [1850D — Balanced Round](https://codeforces.com/contest/1850/problem/D) |
| **Rating** | 900 |
| **Tags** | brute force, greedy, implementation, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 78 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

You are the author of a Codeforces round and have prepared `n` problems you are going to set, problem `i` having difficulty `aᵢ`. You will do the following process: 

 - remove some (possibly zero) problems from the list;
- rearrange the remaining problems in any order you wish.

A round is considered *balanced* if and only if the absolute difference between the difficulty of any two consecutive problems is at most `k` (less or equal than `k`).

What is the minimum number of problems you have to remove so that an arrangement of problems is balanced?

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 1000`) — the number of test cases.

The first line of each test case contains two positive integers `n` (`1 ≤ n ≤ 2 · 10⁵`) and `k` (`1 ≤ k ≤ 10⁹`) — the number of problems, and the maximum allowed absolute difference between consecutive problems.

The second line of each test case contains `n` space-separated integers `aᵢ` (`1 ≤ aᵢ ≤ 10⁹`) — the difficulty of each problem.

Note that the sum of `n` over all test cases doesn't exceed `2 · 10⁵`.

## Output

For each test case, output a single integer — the minimum number of problems you have to remove so that an arrangement of problems is balanced.

## Examples

**Example:**

```
7
5 1
1 2 4 5 6
1 2
10
8 3
17 3 1 20 12 5 17 12
4 2
2 4 6 8
5 3
2 3 19 10 8
3 4
1 10 5
8 1
8 3 1 4 5 10 7 3
```

**Output:**

```
2
0
5
0
3
1
4

```

## Note

For the first test case, we can remove the first `2` problems and construct a set using problems with the difficulties `[4, 5, 6]`, with difficulties between adjacent problems equal to `|5 - 4| = 1 ≤ 1` and `|6 - 5| = 1 ≤ 1`.

For the second test case, we can take the single problem and compose a round using the problem with difficulty `10`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1850/problem/D)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
