# A. Games on the Train
 
| Field | Value |
|---|---|
| **Contest** | [2236](https://codeforces.com/contest/2236) |
| **Problem** | [2236A — Games on the Train](https://codeforces.com/contest/2236/problem/A) |
| **Rating** | 800 |
| **Tags** | greedy, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Dabir, Egor, and Arseniy just got on the train and decided to play a game. Dabir has a backpack with an infinite number of cubes. He built `n` towers from them, where the `i`-th tower has height `hᵢ` cubes.

Egor and Arseniy must choose an integer `xᵢ` for each tower `i` and increase its height by `xᵢ` **exactly once**. For example, if `h` = [`1, 3, 2, 2`], `x` = [`3, 2, 2, 8`], then after increasing `h` it will become [`4, 5, 4, 10`]. Their goal is to make the heights of all towers equal.

To make the game more interesting, Dabir wants to choose an integer `k` and add a restriction: each `xᵢ` must satisfy `1 ≤ xᵢ ≤ k`. Help him find the smallest `k` for which it is possible to finish the game.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 10⁴`) — the number of test cases.

Then `t` test cases follow.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 5`).

The second line contains `n` integers `h₁, h₂, …, hₙ` (`1 ≤ hᵢ ≤ 6`).

## Output

For each test case, output a single integer — the minimum value of `k` such that it is possible to make all towers have equal height.

## Examples

**Example:**

```
4
2
1 3
3
2 6 4
5
5 4 6 6 1
4
3 3 3 3
```

**Output:**

```
3
5
6
1
```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2236/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
