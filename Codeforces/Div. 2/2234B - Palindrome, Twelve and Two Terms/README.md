# B. Palindrome, Twelve and Two Terms
 
| Field | Value |
|---|---|
| **Contest** | [2234](https://codeforces.com/contest/2234) |
| **Problem** | [2234B — Palindrome, Twelve and Two Terms](https://codeforces.com/contest/2234/problem/B) |
| **Rating** | 800 |
| **Tags** | brute force, constructive algorithms, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.5 seconds | 256 megabytes |

---

You are given a positive integer `n`. A pair of non-negative integers `a, b` is called beautiful if the following conditions hold:

- `a + b = n`.
- The number `a` is a palindrome.`∗`
- The number `b` is divisible by `12`.

You need to find a beautiful pair or report that it does not exist.

`∗`A number is called a *palindrome* if and only if it remains the same when its digits (in decimal notation) are written in reverse order. For example, the numbers `12321`, `6776`, `5`, `0` are palindromes, while the numbers `123` and `69` — are not.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows.

The only line of each test case contains a single integer `n` (`1 ≤ n ≤ 10¹⁸`).

## Output

For each test case, if such `a` and `b` exist, output `a` and `b` on a separate line, separated by a space. Otherwise, output `-1` on a separate line.

If there are several beautiful pairs `a, b`, you may output any of them.

## Examples

**Example:**

```
6
1
10
310
12
1000000000
6111111111111111
```

**Output:**

```
1 0
-1
262 48
0 12
889989988 110010012
111111111111111 6000000000000000
```

## Note

In the first test case, `a = 1` is a palindrome, and `b = 0` is divisible by `12`, and `a + b = 1 = n`, so the answer satisfies the condition.

In the second test case, it can be shown that no pair `a, b` is suitable.

In the third test case, `a = 262` is a palindrome, and `b = 48` is divisible by `12`, and `a + b = 310 = n`, so the answer satisfies the condition.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2234/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
