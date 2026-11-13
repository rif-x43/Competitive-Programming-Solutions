# B. Remilia Plays Soku
 
| Field | Value |
|---|---|
| **Contest** | [2228](https://codeforces.com/contest/2228) |
| **Problem** | [2228B — Remilia Plays Soku](https://codeforces.com/contest/2228/problem/B) |
| **Rating** | 1100 |
| **Tags** | games, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Remilia is trying to escape, while Reimu wants to land the final hit.

The playing field consists of `n` positions arranged in a circle. For each `1 ≤ i < n`, positions `i` and `i+1` are adjacent, and positions `1` and `n` are also adjacent.

Initially, at time `0`, Reimu is at position `x₁` and Remilia is at position `x₂`, where `x₁ ≠ x₂`.

Each second, the following happens in order: 

 - Remilia either moves to an adjacent position or stays in place. Over the entire game, she may move to an adjacent position at most `k` times.
- After observing Remilia's action, Reimu either moves to an adjacent position or stays in place.
- If they are at the same position after both actions, Reimu catches Remilia and the game ends.

Assuming both players play optimally, Reimu always tries to minimize the catching time, while Remilia tries to maximize it.

Find the number of seconds until Reimu catches Remilia.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows. 

The only line of each test case contains four integers `n`, `x₁`, `x₂` and `k` (`2≤ n≤10⁸`, `1≤ x₁,x₂≤ n`, `x₁≠ x₂`, `0≤ k≤ 10⁸`).

## Output

For each test case, output the number of seconds until Reimu catches Remilia, assuming both players play optimally.

## Examples

**Example:**

```
4
2 1 2 0
4 3 2 1
4 2 3 1
16 8 4 2
```

**Output:**

```
1
2
2
6
```

## Note

In the first test case, one possible sequence of actions is: 

 - In the first second, Remilia stays in place, and then Reimu moves to `2` and catches Remilia.

In the second test case, one possible sequence of actions is: 

 - In the first second, Remilia moves to `1`, and then Reimu moves to `2`.
- In the second second, Remilia cannot move and has to stay in place, and then Reimu moves to `1` and catches Remilia.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2228/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
