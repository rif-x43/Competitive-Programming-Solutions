# A. Homework
 
| Field | Value |
|---|---|
| **Contest** | [2132](https://codeforces.com/contest/2132) |
| **Problem** | [2132A — Homework](https://codeforces.com/contest/2132/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, implementation, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Vlad and Dima have been assigned a task in school for their English class. They were given two strings `a` and `b` and asked to append all characters from `b` to string `a` in any order. The guys decided to divide the work between themselves and, after lengthy negotiations, determined who would add each character from string `b` to `a`.

Due to his peculiarities, Vlad can only add characters to the beginning of the word, while Dima can only add them to the end. They add characters in the order they appear in string `b`. Your task is to determine what string Vlad and Dima will end up with.

## Input

Each test consists of several test cases. The first line contains a single integer `t` (`1 ≤ t ≤ 1000`) — the number of test cases. The description of the test cases follows.

The first line contains an integer `n` (`1 ≤ n ≤ 10`) — the length of the string `a`.

The second line contains the string `a`, consisting of lowercase letters of the English alphabet.

The third line contains an integer `m` (`1 ≤ m ≤ 10`) — the length of the strings `b` and `c`.

The fourth line contains the string `b`, consisting of lowercase letters of the English alphabet.

The fifth line contains the string `c`, consisting of the characters `'V'` and `'D'` — the distribution of the characters of string `b` between Dima and Vlad. If `cᵢ` = `'V'`, then the `i`-th letter is added by Vlad; otherwise, it is added by Dima.

## Output

For each test case, output the string that will result from Dima and Vlad's work.

## Examples

**Example:**

```
4
2
ot
2
ad
DV
3
efo
7
rdcoecs
DVDVDVD
3
aca
4
bbaa
DVDV
3
biz
4
abon
VVDD
```

**Output:**

```
dota
codeforces
abacaba
babizon

```

## Note

In the first test case, there is initially a string `ot`. Then Dima appends the character `a` to the end of the string, resulting in `ota`, and Vlad appends the last character, resulting in `dota`.

In the second test case, the string will change as follows: `efo arrow efor arrow defor arrow deforc arrow odeforc arrow odeforce arrow codeforce arrow codeforces`

In the third test case: `aca arrow acab arrow bacab arrow bacaba arrow abacaba`

In the fourth test case: `biz arrow abiz arrow babiz arrow babizo arrow babizon`

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2132/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
