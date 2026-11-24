# A. Youmu Konpaku and the Duel
 
| Field | Value |
|---|---|
| **Contest** | [2288](https://codeforces.com/contest/2288) |
| **Problem** | [2288A — Youmu Konpaku and the Duel](https://codeforces.com/contest/2288/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | brute force, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Youmu Konpaku is dueling a youkai. The youkai has `x` health, and Youmu's attack power is `1`.

In one move Youmu does one of the following:

 - Charge: gain one stack. Each stack increases her attack power by `1`.
- Attack: deal damage equal to her current attack power to the youkai, then the number of stacks decreases by `1` (if she has any).

The youkai is defeated once its health becomes `0` or less. Find the minimum number of moves Youmu needs.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 100`). The description of the test cases follows.

Each of the next `t` lines contains a single integer `x` (`1≤ x≤ 10⁴`) — the health of the youkai.

## Output

For each test case, output a single integer — the minimum number of moves.

## Examples

**Example:**

```
6
1
2
3
4
10
10000
```

**Output:**

```
1
2
3
4
7
244
```

## Note

In the first test case, one attack is enough: it deals `1` damage.

In the second test case, Youmu charges once (her attack power becomes `2`) and attacks once, so `2` moves are enough. Note that attacking twice also takes `2` moves.

In the fifth test case, Youmu charges `4` times and attacks `3` times: the attacks deal `5`, `4`, and `3` damage, `12` in total, so it takes `7` moves. With `6` moves she can deal at most `9` damage, so the answer is `7` .

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2288/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
