# A. Walking Master
 
| Field | Value |
|---|---|
| **Contest** | [1806](https://codeforces.com/contest/1806) |
| **Problem** | [1806A — Walking Master](https://codeforces.com/contest/1806/problem/A) |
| **Rating** | 800 |
| **Tags** | geometry, greedy, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 1024 megabytes |

---

YunQian is standing on an infinite plane with the Cartesian coordinate system on it. In one move, she can move to the diagonally adjacent point on the top right or the adjacent point on the left.

That is, if she is standing on point `(x,y)`, she can either move to point `(x+1,y+1)` or point `(x-1,y)`.

YunQian initially stands at point `(a,b)` and wants to move to point `(c,d)`. Find the minimum number of moves she needs to make or declare that it is impossible.

## Input

The first line contains a single integer `t` (`1≤ t≤ 10⁴`) — the number of test cases. The description of test cases follows.

The first line and only line of each test case contain four integers `a`, `b`, `c`, `d` (`-10⁸≤ a,b,c,d≤ 10⁸`).

## Output

For each test case, if it is possible to move from point `(a,b)` to point `(c,d)`, output the minimum number of moves. Otherwise, output `-1`.

## Examples

**Example:**

```
6
-1 0 -1 2
0 0 4 5
-2 -1 1 1
-3 2 -3 2
2 -1 -1 -1
1 1 0 2
```

**Output:**

```
4
6
-1
0
3
3

```

## Note

In the first test case, one possible way using `4` moves is `(-1,0)→ (0,1)→ (-1,1)→ (0,2)→ (-1,2)`. It can be proven that it is impossible to move from point `(-1,0)` to point `(-1,2)` in less than `4` moves.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1806/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
