# A. Rudolph and Cut the Rope 
 
| Field | Value |
|---|---|
| **Contest** | [1846](https://codeforces.com/contest/1846) |
| **Problem** | [1846A — Rudolph and Cut the Rope ](https://codeforces.com/contest/1846/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 156 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

There are `n` nails driven into the wall, the `i`-th nail is driven `aᵢ` meters above the ground, one end of the `bᵢ` meters long rope is tied to it. All nails hang at different heights one above the other. One candy is tied to all ropes at once. Candy is tied to end of a rope that is not tied to a nail.

To take the candy, you need to lower it to the ground. To do this, Rudolph can cut some ropes, one at a time. Help Rudolph find the minimum number of ropes that must be cut to get the candy.

The figure shows an example of the first test:

  ![](https://espresso.codeforces.com/82ccb7dc70cf350d88c8992e278d85e23bdeb065.png)

## Input

The first line contains one integer `t` (`1 ≤ t ≤ 10⁴`) — the number of test cases.

The first line of each test case contains one integer `n` (`1 ≤ n ≤ 50`) — the number of nails.

The `i`-th of the next `n` lines contains two integers `aᵢ` and `bᵢ` (`1 ≤ aᵢ, bᵢ ≤ 200`) — the height of the `i`-th nail and the length of the rope tied to it, all `aᵢ` are different.

It is guaranteed that the data is not contradictory, it is possible to build a configuration described in the statement.

## Output

For each test case print one integer — the minimum number of ropes that need to be cut to make the candy fall to the ground.

## Examples

**Example:**

```
4
3
4 3
3 1
1 2
4
9 2
5 2
7 7
3 4
5
11 7
5 10
12 9
3 2
1 5
3
5 6
4 5
7 7
```

**Output:**

```
2
2
3
0

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1846/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
