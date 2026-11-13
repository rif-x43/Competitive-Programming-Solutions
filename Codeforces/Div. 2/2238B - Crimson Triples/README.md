# B. Crimson Triples
 
| Field | Value |
|---|---|
| **Contest** | [2238](https://codeforces.com/contest/2238) |
| **Problem** | [2238B — Crimson Triples](https://codeforces.com/contest/2238/problem/B) |
| **Rating** | 900 |
| **Tags** | dp, math, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

*Chills run down your spine...*— TerrariaAfter summoning the next boss — The Brain of Cthulhu, you noticed that it surrounds itself with `n` eyes, numbered from `1` to `n`. In one attack, The Brain of Cthulhu chooses a triple of eyes (not necessarily distinct) with numbers `(a, b, c)`. The triple of eyes is called *crimson* if and only if the following property holds: 

 `gcd``∗``(lcm``†``(a, b), lcm(b, c)) = gcd(a, c)`, To defeat the boss, you want to know how many ways The Brain of Cthulhu can choose a crimson triple of eyes. The triples of eyes `(a₁, b₁, c₁)` and `(a₂, b₂, c₂)` are considered different if `a₁ ≠ a₂`, or `b₁ ≠ b₂`, or `c₁ ≠ c₂`.

`∗``gcd(x, y)` denotes the greatest common divisor (GCD) of integers `x` and `y`.

`†``lcm(x, y)` denotes the least common multiple (LCM) of integers `x` and `y`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 1000`). The description of the test cases follows.

The only line of each test case contains one integer `n` (`1 ≤ n ≤ 2 · 10⁵`) — the number of eyes of The Brain of Cthulhu.

It is guaranteed that the sum of `n` across all test cases does not exceed `2 · 10⁵`.

## Output

For each test case, output one integer — the number of ways to choose a crimson triple of eyes.

## Examples

**Example:**

```
3
1
2
20
```

**Output:**

```
1
5
612
```

## Note

In the first test case, there is `1` possible crimson triple: `(1, 1, 1)`.

In the second test case, there are `5` possible crimson triples: `(1, 1, 1)`, `(1, 1, 2)`, `(2, 1, 1)`, `(2, 1, 2)`, `(2, 2, 2)`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2238/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
