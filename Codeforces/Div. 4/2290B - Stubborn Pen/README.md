# B. Stubborn Pen
 
| Field | Value |
|---|---|
| **Contest** | [2290](https://codeforces.com/contest/2290) |
| **Problem** | [2290B — Stubborn Pen](https://codeforces.com/contest/2290/problem/B) |
| **Rating** | Gym/Unrated |
| **Tags** | implementation, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

A pen can write in two colors: red and blue. **Initially, the pen writes in red.** Each time the pen writes a letter, its color switches automatically: after writing a red letter, it writes in blue, and after writing a blue letter, it writes in red.

Before writing each letter, including the first one, you may also switch the color of the pen manually: from red to blue or from blue to red.

You need to write a string `s` of length `n` consisting of the characters `R` and `B`. The letters are written one by one from left to right. The `i`-th letter must be written in red if `sᵢ = R`, and in blue if `sᵢ = B`.

Find the minimum number of manual switches needed to write the string.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 100`) — the length of the string.

The second line of each test case contains the string `s` of length `n`, consisting only of the characters `R` and `B`.

## Output

For each test case, print a single integer — the minimum number of manual switches.

## Examples

**Example:**

```
5
5
BRRBR
1
R
4
RBRB
3
BBB
6
RRBBRB
```

**Output:**

```
2
0
0
3
2
```

## Note

In the first test case, `s = BRRBR`.

 - Initially, the pen writes in red, but the first letter is blue, so the color is switched manually.
- After the blue letter, the pen switches to red by itself. This is the right color for the second letter.
- After that, the pen switches to blue by itself, but the third letter is red, so the color is switched manually a second time.
- The last two letters are written without manual switches.

So the answer is `2`.

In the third test case, the color switches by itself exactly as needed, so no manual switches are required.

In the fourth test case, the pen has the wrong color before each of the three letters: it is red at the start, and after each blue letter it switches to red by itself. So three manual switches are needed.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2290/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
