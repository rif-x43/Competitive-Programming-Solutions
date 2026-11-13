# A. Yogurt Sale
 
| Field | Value |
|---|---|
| **Contest** | [1955](https://codeforces.com/contest/1955) |
| **Problem** | [1955A — Yogurt Sale](https://codeforces.com/contest/1955/problem/A) |
| **Rating** | 800 |
| **Tags** | math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

The price of one yogurt at the "Vosmiorochka" store is `a` burles, but there is a promotion where you can buy two yogurts for `b` burles.

Maxim needs to buy **exactly** `n` yogurts. When buying two yogurts, he can choose to buy them at the regular price or at the promotion price.

What is the minimum amount of burles Maxim should spend to buy `n` yogurts?

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 10⁴`) — the number of test cases.

The first and only line of each test case contains three integers `n`, `a`, and `b` (`1 ≤ n ≤ 100`, `1 ≤ a, b ≤ 30`) — the number of yogurts Maxim wants to buy, the price for one yogurt, and the price for two yogurts on promotion.

## Output

For each test case, print in a separate line the minimum cost of buying `n` yogurts at "Vosmiorochka".

## Examples

**Example:**

```
4
2 5 9
3 5 9
3 5 11
4 5 11
```

**Output:**

```
9
14
15
20

```

## Note

In the third test case of the example, it is more advantageous to buy three yogurts for `15` burles than two for `11` and one for `5`.

In the fourth test case of the example, you need to buy four yogurts, each for `5` burles.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1955/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
