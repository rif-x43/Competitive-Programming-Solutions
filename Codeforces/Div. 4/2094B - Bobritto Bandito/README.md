# B. Bobritto Bandito
 
| Field | Value |
|---|---|
| **Contest** | [2094](https://codeforces.com/contest/2094) |
| **Problem** | [2094B — Bobritto Bandito](https://codeforces.com/contest/2094/problem/B) |
| **Rating** | 800 |
| **Tags** | brute force, constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

In Bobritto Bandito's home town of residence, there are an infinite number of houses on an infinite number line, with houses at `…, -2, -1, 0, 1, 2, …`. On day `0`, he started a plague by giving an infection to the unfortunate residents of house `0`. Each succeeding day, the plague spreads to **exactly one** healthy household that is next to an infected household. It can be shown that each day the infected houses form a continuous segment.

Let the segment starting at the `l`-th house and ending at the `r`-th house be denoted as `[l, r]`. You know that after `n` days, the segment `[l, r]` became infected. Find any such segment `[l', r']` that could have been infected on the `m`-th day (`m ≤ n`).

## Input

The first line contains an integer `t` (`1 ≤ t ≤ 100`) – the number of independent test cases.

The only line of each test case contains four integers `n`, `m`, `l`, and `r` (`1 ≤ m≤ n ≤ 2000, -n ≤ l ≤ 0 ≤ r ≤ n, r-l=n`).

## Output

For each test case, output two integers `l'` and `r'` on a new line. If there are multiple solutions, output any.

## Examples

**Example:**

```
4
4 2 -2 2
4 1 0 4
3 3 -1 2
9 8 -6 3
```

**Output:**

```
-1 1
0 1
-1 2
-5 3

```

## Note

In the first test case, it is possible that on the `1`-st, `2`-nd, and `3`-rd days the interval of houses affected is `[-1,0]`, `[-1,1]`, `[-2,1]`. Therefore, `[-1,1]` is a valid output.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2094/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
