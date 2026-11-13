# A. Black Square
 
| Field | Value |
|---|---|
| **Contest** | [431](https://codeforces.com/contest/431) |
| **Problem** | [431A — Black Square](https://codeforces.com/contest/431/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Quite recently, a very smart student named Jury decided that lectures are boring, so he downloaded a game called "`Black Square`" on his super cool touchscreen phone.

In this game, the phone's screen is divided into four vertical strips. Each second, a black square appears on some of the strips. According to the rules of the game, Jury must use this second to touch the corresponding strip to make the square go away. As Jury is both smart and lazy, he counted that he wastes exactly `aᵢ` calories on touching the `i`-th strip.

You've got a string `s`, describing the process of the game and numbers `a₁, a₂, a₃, a₄`. Calculate how many calories Jury needs to destroy all the squares?

## Input

The first line contains four space-separated integers `a₁`, `a₂`, `a₃`, `a₄` (`0 ≤ a₁, a₂, a₃, a₄ ≤ 10⁴`).

The second line contains string `s` (`1 ≤ |s| ≤ 10⁵`), where the `і`-th character of the string equals "`1`", if on the `i`-th second of the game the square appears on the first strip, "`2`", if it appears on the second strip, "`3`", if it appears on the third strip, "`4`", if it appears on the fourth strip.

## Output

Print a single integer — the total number of calories that Jury wastes.

## Examples

**Example 1:**

```
1 2 3 4
123214

```

**Output 1:**

```
13

```

**Example 2:**

```
1 5 3 2
11221

```

**Output 2:**

```
13

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/431/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
