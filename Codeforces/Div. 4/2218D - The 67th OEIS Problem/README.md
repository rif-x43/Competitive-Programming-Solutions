# D. The 67th OEIS Problem
 
| Field | Value |
|---|---|
| **Contest** | [2218](https://codeforces.com/contest/2218) |
| **Problem** | [2218D — The 67th OEIS Problem](https://codeforces.com/contest/2218/problem/D) |
| **Rating** | 1100 |
| **Tags** | constructive algorithms, greedy, math, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

*Macaque, being a terrible problemsetter, decided to search for funny sequences on the OEIS`∗` one day, so he could gain inspiration for his doomed problemsetting job for the Pan-Mammalian Olympiad in Informatics (PMOI). To his delight, he found one, and thought it would be funny to make you, his loyal tester, solve it:*

Construct a sequence `a` containing `n` integers such that `gcd(aᵢ, aᵢ₊₁)` `†` is distinct over all `1 ≤ i ≤ n - 1`. It is guaranteed that at least one sequence `a` exists.

`∗`Online Encyclopedia of Integer Sequences, the favourite website of math nerds, overly astute testers, and insufficiently rigorous coordinators.

`†``gcd(x,y)` refers to the greatest common divisor of integers `x` and `y`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 100`). The description of the test cases follows. 

The following `t` lines contain one integer `n` (`2 ≤ n ≤ 10⁴`) — the desired length of the sequence. 

It is guaranteed the sum of `n` over all test cases does not exceed `10⁴`.

## Output

For each query, output your answer — a sequence `a` of `n` space-separated integers (`1 ≤ aᵢ ≤ 10¹⁸`).

## Examples

**Example:**

```
2
3
5

```

**Output:**

```
1 6 2
134 67 69 207 414

```

## Note

In the first test case, the sequence `[1, 6, 2]` is a possible answer. This is because `gcd(1, 6)` is not equal to `gcd(6, 2)`.

In the second test case, the sequence `[134, 67, 69, 207, 414]` is a possible answer. This is because the values of `gcd(aᵢ, aᵢ₊₁)` for all `i` between `1` and `n-1` are distinct. For reference, they are `67`, `1`, `69` and `207`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2218/problem/D)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
