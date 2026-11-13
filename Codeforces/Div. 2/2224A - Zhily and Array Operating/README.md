# A. Zhily and Array Operating
 
| Field | Value |
|---|---|
| **Contest** | [2224](https://codeforces.com/contest/2224) |
| **Problem** | [2224A — Zhily and Array Operating](https://codeforces.com/contest/2224/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms, greedy |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 512 megabytes |

---

Deep in the wilderness, Zhily and Jily discovered a series of gathering places that contain abstract logic. Some of these gathering places harbor inconsistent errors in their logic, which may collapse at any moment. They hope to transmit logic between adjacent gathering places through reasonable transfer arrangements so that as many gathering places as possible can eventually restore logical stability.

You are given an array `a` of `n` integers. You can perform the following operation any number of times:

 - Choose an index `i` (`1 ≤ i < n`) and assign `aᵢ← aᵢ+aᵢ₊₁`.

Each index can be chosen **at most once**.

Find the maximum number of positive integers in the final array after all operations.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows. 

The first line of each test case contains a single integer `n` (`2≤ n ≤ 2· 10⁵`).

The second line of each test case contains `n` integers `a₁,a₂,…,aₙ` (`-10⁹≤ aᵢ≤ 10⁹`).

It is guaranteed that the sum of `n` over all test cases does not exceed `2·10⁵`.

## Output

For each test case, you should output a single line containing an integer `k`, the number of positive numbers in the final sequence.

## Examples

**Example:**

```
4
5
0 -1 3 -3 0
5
0 -2 1 2 3
5
0 1 0 1 0
2
1000000000 -1000000000
```

**Output:**

```
3
5
4
1
```

## Note

In the first test case, the array `a` is operated on by the following process:

`[0,-1,3,-3,0]→ [0,colorred2,3,-3,0]→ [colorred2,2,3,-3,0]`.

There are `3` positive numbers in the final array, and it can be proven that this is the maximum count of positive integers.

In the second test case, the final array can be:`[4,4,6,5,3]`, which is operated on by the following process:

`[0,-2,1,2,3]→ [0,-2,1,colorred5,3]→ [0,-2,colorred6,5,3]→ [0,colorred4,6,5,3]→ [colorred4,4,6,5,3]`.

In the third test case, the final array can be:`[1,1,1,1,0]`, which is operated on by the following process:

`[0,1,0,1,0]→ [colorred1,1,0,1,0]→ [1,1,colorred1,1,0]`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2224/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
