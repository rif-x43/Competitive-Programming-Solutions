# A. Grasshopper on a Line
 
| Field | Value |
|---|---|
| **Contest** | [1837](https://codeforces.com/contest/1837) |
| **Problem** | [1837A — Grasshopper on a Line](https://codeforces.com/contest/1837/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

You are given two integers `x` and `k`. Grasshopper starts in a point `0` on an OX axis. In one move, it can jump some integer distance, **that is not divisible by `k`**, to the left or to the right.

What's the smallest number of moves it takes the grasshopper to reach point `x`? What are these moves? If there are multiple answers, print any of them.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 1000`) — the number of testcases.

The only line of each testcase contains two integers `x` and `k` (`1 ≤ x ≤ 100`; `2 ≤ k ≤ 100`) — the endpoint and the constraint on the jumps, respectively.

## Output

For each testcase, in the first line, print a single integer `n` — the smallest number of moves it takes the grasshopper to reach point `x`.

In the second line, print `n` integers, each of them not divisible by `k`. A positive integer would mean jumping to the right, a negative integer would mean jumping to the left. The endpoint after the jumps should be exactly `x`.

Each jump distance should be from `-10⁹` to `10⁹`. In can be shown that, for any solution with the smallest number of jumps, there exists a solution with the same number of jumps such that each jump is from `-10⁹` to `10⁹`.

It can be shown that the answer always exists under the given constraints. If there are multiple answers, print any of them.

## Examples

**Example:**

```
3
10 2
10 3
3 4
```

**Output:**

```
2
7 3
1
10
1
3

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1837/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
