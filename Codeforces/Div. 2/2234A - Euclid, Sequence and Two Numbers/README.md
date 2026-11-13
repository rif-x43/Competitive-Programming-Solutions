# A. Euclid, Sequence and Two Numbers
 
| Field | Value |
|---|---|
| **Contest** | [2234](https://codeforces.com/contest/2234) |
| **Problem** | [2234A — Euclid, Sequence and Two Numbers](https://codeforces.com/contest/2234/problem/A) |
| **Rating** | 800 |
| **Tags** | math, number theory, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

We define a Euclid algorithm sequence of length `k` (`k ≥ 2`) for two positive integers `x ≥ y` as the following sequence of positive integers:

- `a₁, a₂, …, aₖ`, where `a₁ = x`, `a₂ = y`, and for any `i` (`1 ≤ i ≤ k - 2`), the equality `aᵢ ₊ ₂ = (aᵢ mod aᵢ ₊ ₁)` holds`∗`.

For example, for `x = 13, y = 8, k = 4`, the corresponding Euclid algorithm sequence is `a = [13, 8, 5, 3]`. (`a₃ = 13 mod 8 = 5`, `a₄ = 8 mod 5 = 3`).

You are given a sequence `b₁, b₂, …, bₙ`. You need to determine whether it is possible to permute its elements so that it becomes a Euclid algorithm sequence for some two positive integers `x ≥ y`.

`∗``x mod y` denotes the remainder when `x` is divided by `y`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 500`). The description of the test cases follows.

The first line of each test case contains an integer `n` (`2 ≤ n ≤ 100`) — the size of the sequence.

The second line of each test case contains `n` integers `b₁, b₂, …, bₙ` (`1 ≤ bᵢ ≤ 10⁹`) — the sequence `b`.

## Output

For each test case, if it is possible to permute the elements of sequence `b` so that there exists a suitable pair of positive integers `x ≥ y`, output `x, y` on a separate line. Otherwise, output `-1` on a separate line.

If there are several suitable pairs `x, y`, you may output any of them.

## Examples

**Example:**

```
6
2
1 1
2
1 2
4
1 2 3 4
3
6 4 2
4
3 8 13 5
3
1 1 1
```

**Output:**

```
1 1
2 1
-1
6 4
13 8
-1
```

## Note

In the first test case, the pair (`1, 1`) is suitable: for `x = 1, y = 1, k = 2`, `a₁ = x = 1, a₂ = y = 1`, and the sequence `a = [1, 1] = b` is obtained.

In the third test case, it can be shown that no suitable pair (`x, y`) exists.

In the fourth test case, the pair (`6, 4`) is suitable: for `x = 6, y = 4, k = 3`, `a₁ = x = 6, a₂ = y = 4, a₃ = (a₁ mod a₂) = (6 mod 4) = 2`, and the sequence `a = [6, 4, 2] = b` is obtained.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2234/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
