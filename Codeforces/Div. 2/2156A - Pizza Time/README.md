# A. Pizza Time
 
| Field | Value |
|---|---|
| **Contest** | [2156](https://codeforces.com/contest/2156) |
| **Problem** | [2156A — Pizza Time](https://codeforces.com/contest/2156/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, constructive algorithms, greedy |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Hao and Alex are good friends. After winning a coding competition together, they received a huge pizza as their prize.

Initially, they are given `n` slices of pizza. Each day, the following process takes place:

 - If there are at most `2` slices remaining, Alex eats all of them.
- Otherwise, let `m` be the current number of slices (`m≥ 3`). Hao splits them into three groups of sizes `m₁`, `m₂`, and `m₃` such that:```m₁ + m₂ + m₃ = m and 1 ≤ m₁≤ m₂≤ m₃.```

Then:

 - Hao eats `m₁` slices (the smallest group).
- Alex eats `m₂` slices (the middle group).
- The remaining `m₃` slices (the largest group) are carried over to the next day.

Your task is to determine the maximum total number of slices Hao can eat if he always chooses the partition optimally.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 500`). The description of the test cases follows. 

The first and only line of each test case contains a single integer `n` (`3 ≤ n ≤ 10⁹`) — the initial number of pizza slices.

Note that there are no constraints on the sum of `n` over all test cases.

## Output

For each test case, output a single integer representing the maximum total number of slices Hao can eat.

## Examples

**Example:**

```
3
8
4
3
```

**Output:**

```
3
1
1
```

## Note

In the first test case, Hao can eat `3` slices as follows:

 - Split into `m₁ = 2`, `m₂ = 3`, and `m₃ = 3`. Hao eats `2` slices, Alex eats `3` slices, and the remaining `3` slices are carried over to the next day.
- Split into `m₁ = 1`, `m₂ = 1`, and `m₃ = 1`. Hao eats `1` slice, Alex eats `1` slice, and the remaining `1` slice is carried over to the next day.
- Only `1` slice remains, so Alex eats it.

In the second test case, Hao can eat `1` slice as follows:

 - Split into `m₁ = 1`, `m₂ = 1`, and `m₃ = 2`. Hao eats `1` slice, Alex eats `1` slice, and the remaining `2` slices are carried over to the next day.
- Only `2` slices remain, so Alex eats them all.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2156/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
