# A. Eating Game
 
| Field | Value |
|---|---|
| **Contest** | [2200](https://codeforces.com/contest/2200) |
| **Problem** | [2200A — Eating Game](https://codeforces.com/contest/2200/problem/A) |
| **Rating** | 800 |
| **Tags** | greedy |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

There are `n` players playing a game at a circular table. The `i`-th player has `aᵢ` dishes to eat. They take turns eating the food, and any player can go first.

During their turn, if player `i` has any dishes remaining, they must eat exactly one dish. Then, player `(i mod n) + 1` starts their turn. This continues until all dishes are finished.

The player who eats the last dish is considered the winner. Determine the number of players that can possibly be winners.

## Input

The first line contains an integer `t` (`1 ≤ t ≤ 5000`), the number of test cases.

The first line of each test case contains an integer `n` (`1 ≤ n ≤ 10`).

The second line of each test case contains `n` integers, the elements of `a` (`1 ≤ aᵢ ≤ 10`).

## Output

For each test case, output a line with the answer.

## Examples

**Example:**

```
3
1
10
2
6 7
4
1 4 3 4
```

**Output:**

```
1
1
2
```

## Note

In the first test case, player `1` wins for every starting player.

In the second test case, player `2` wins for every starting player.

In the third test case, players `2` and `4` can win.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2200/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
