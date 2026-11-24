# A. Problem from Dolgoderevenskoye
 
| Field | Value |
|---|---|
| **Contest** | [2289](https://codeforces.com/contest/2289) |
| **Problem** | [2289A — Problem from Dolgoderevenskoye](https://codeforces.com/contest/2289/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | math, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given a positive integer `x`. Consider a set of cards such that for every positive divisor `d` of the number `x`, there is exactly one card with the number `d`.

Two players play the following game. The players take turns, with Artem moving first. On each move, a player must remove one card from the set.

On the first move, Artem may remove any card. On each subsequent move, the player must remove a card whose parity is opposite to the parity of the card removed on the previous move. In other words, if the previous player removed a card with an even number, the next player must remove a card with an odd number, and vice versa. The player who cannot make a move loses.

For example, if `x = 6`, then initially there are cards with numbers `1`, `2`, `3`, and `6`. If Artem removes the card with number `6` on his first move, then the second player must remove the card with number `1` or `3`. After the second player's move, Artem will be able to remove only the card with number `2` from the set.

Determine whether Artem will win if both players play optimally.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows.

The only line of each test case contains one integer `x` (`1 ≤ x ≤ 10¹⁸`).

## Output

For each test case, output "`Yes`" if Artem wins, and "`No`" otherwise.

You may print each letter in any case (lowercase or uppercase). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be accepted as positive answers.

## Examples

**Example:**

```
10
1
2
6
12
8
31
74
75
1111111111
998244358989466118
```

**Output:**

```
Yes
No
No
Yes
Yes
Yes
No
Yes
Yes
No
```

## Note

In the first test case, Artem wins because there is only one card in the set, with the number `1`.

In the second test case, Artem loses. Initially, the set contains cards with numbers `1` and `2`. Since these cards have different parity, the second player will always be able to make a move after Artem's first move.

In the fourth test case, initially the set contains cards with numbers `1`, `2`, `3`, `4`, `6`, and `12`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2289/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
