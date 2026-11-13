# A. A Simple Sequence
 
| Field | Value |
|---|---|
| **Contest** | [2210](https://codeforces.com/contest/2210) |
| **Problem** | [2210A — A Simple Sequence](https://codeforces.com/contest/2210/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms, dp, greedy, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given an integer `n`. You need to construct a permutation`∗` `a₁, a₂, …, aₙ` using integers from `1` to `n` such that the following condition is satisfied:

```a₁ mod a₂ ≥ a₂ mod a₃ ≥ … ≥ aₙ₋₁ mod aₙ,``where`u`mod`v`denotes the remainder of dividing`u`by`v``.

If multiple valid permutations exist, you may output any of them.

It can be shown that a valid permutation always exists for every `n ≥ 2`.

`∗`A permutation of length `n` is an array consisting of `n` distinct integers from `1` to `n` in arbitrary order. For example, `[2,3,1,5,4]` is a permutation, but `[1,2,2]` is not a permutation (`2` appears twice in the array), and `[1,3,4]` is also not a permutation (`n=3` but there is `4` in the array).

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 100`). The description of the test cases follows. 

The first line of each test case contains a single integer `n` (`2 ≤ n ≤ 100`).

## Output

For each test case, output on a single line `n` space-separated integers `a₁, a₂, … aₙ`.

If multiple valid permutations exist, you may output any of them.

## Examples

**Example:**

```
4
2
3
4
5
```

**Output:**

```
2 1
2 3 1
2 4 3 1
3 5 4 2 1
```

## Note

In the second test case, `2 mod 3 ≥ 3 mod 1`, so the permutation `[2, 3, 1]` is valid.

In the third test case, `2 mod 4 ≥ 4 mod 3 ≥ 3 mod 1`, so the permutation `[2, 4, 3, 1]` is valid.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2210/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
