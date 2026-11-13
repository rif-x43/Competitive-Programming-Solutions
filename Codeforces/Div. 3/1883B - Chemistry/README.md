# B. Chemistry
 
| Field | Value |
|---|---|
| **Contest** | [1883](https://codeforces.com/contest/1883) |
| **Problem** | [1883B — Chemistry](https://codeforces.com/contest/1883/problem/B) |
| **Rating** | 900 |
| **Tags** | strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

You are given a string `s` of length `n`, consisting of lowercase Latin letters, and an integer `k`.

You need to check if it is possible to remove **exactly** `k` characters from the string `s` in such a way that the remaining characters can be rearranged to form a palindrome. Note that you can reorder the remaining characters in any way.

A palindrome is a string that reads the same forwards and backwards. For example, the strings "`z`", "`aaa`", "`aba`", "`abccba`" are palindromes, while the strings "`codeforces`", "`reality`", "`ab`" are not.

## Input

Each test consists of multiple test cases. The first line contains a single integer `t` (`1 ≤ t ≤ 10⁴`) — the number of the test cases. This is followed by their description.

The first line of each test case contains two integers `n` and `k` (`0 ≤ k < n ≤ 10⁵`) — the length of the string `s` and the number of characters to be deleted.

The second line of each test case contains a string `s` of length `n`, consisting of lowercase Latin letters.

It is guaranteed that the sum of `n` over all test cases does not exceed `2 · 10⁵`.

## Output

For each test case, output "`YES`" if it is possible to remove exactly `k` characters from the string `s` in such a way that the remaining characters can be rearranged to form a palindrome, and "`NO`" otherwise.

You can output the answer in any case (uppercase or lowercase). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive answers.

## Examples

**Example:**

```
14
1 0
a
2 0
ab
2 1
ba
3 1
abb
3 2
abc
6 2
bacacd
6 2
fagbza
6 2
zwaafa
7 2
taagaak
14 3
ttrraakkttoorr
5 3
debdb
5 4
ecadc
5 3
debca
5 3
abaac
```

**Output:**

```
YES
NO
YES
YES
YES
YES
NO
NO
YES
YES
YES
YES
NO
YES

```

## Note

In the first test case, nothing can be removed, and the string "`a`" is a palindrome.

In the second test case, nothing can be removed, but the strings "`ab`" and "`ba`" are not palindromes.

In the third test case, any character can be removed, and the resulting string will be a palindrome.

In the fourth test case, one occurrence of the character "`a`" can be removed, resulting in the string "`bb`", which is a palindrome.

In the sixth test case, one occurrence of the characters "`b`" and "`d`" can be removed, resulting in the string "`acac`", which can be rearranged to the string "`acca`".

In the ninth test case, one occurrence of the characters "`t`" and "`k`" can be removed, resulting in the string "`aagaa`", which is a palindrome.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1883/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
