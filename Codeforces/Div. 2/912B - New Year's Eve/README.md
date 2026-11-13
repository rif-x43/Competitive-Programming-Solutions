# B. New Year's Eve
 
| Field | Value |
|---|---|
| **Contest** | [912](https://codeforces.com/contest/912) |
| **Problem** | [912B — New Year's Eve](https://codeforces.com/contest/912/problem/B) |
| **Rating** | 1300 |
| **Tags** | bitmasks, constructive algorithms, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Since Grisha behaved well last year, at New Year's Eve he was visited by Ded Moroz who brought an enormous bag of gifts with him! The bag contains `n` sweet candies from *the good ol' bakery*, each labeled from `1` to `n` corresponding to its tastiness. No two candies have the same tastiness.

The choice of candies has a direct effect on Grisha's happiness. One can assume that he should take the tastiest ones — but no, the holiday magic turns things upside down. It is the xor-sum of tastinesses that matters, not the ordinary sum!

A xor-sum of a sequence of integers `a₁, a₂, ..., aₘ` is defined as the bitwise XOR of all its elements: ![](https://espresso.codeforces.com/1ddaf669e59f29b93d340532f109ab8cc082dc98.png), here ![](https://espresso.codeforces.com/c4b7092c0f7ce6535f2574569c98f7b3c2fe2c5f.png) denotes the bitwise XOR operation; more about bitwise XOR can be found here.

Ded Moroz warned Grisha he has more houses to visit, so Grisha can take **no more than `k`** candies from the bag. Help Grisha determine the largest xor-sum (largest xor-sum means maximum happiness!) he can obtain.

## Input

The sole string contains two integers `n` and `k` (`1 ≤ k ≤ n ≤ 10¹⁸`).

## Output

Output one number — the largest possible xor-sum.

## Examples

**Example 1:**

```
4 3

```

**Output 1:**

```
7

```

**Example 2:**

```
6 6

```

**Output 2:**

```
7

```

## Note

In the first sample case, one optimal answer is `1`, `2` and `4`, giving the xor-sum of `7`.

In the second sample case, one can, for example, take all six candies and obtain the xor-sum of `7`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/912/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
