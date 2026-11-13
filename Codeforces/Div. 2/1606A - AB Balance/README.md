# A. AB Balance
 
| Field | Value |
|---|---|
| **Contest** | [1606](https://codeforces.com/contest/1606) |
| **Problem** | [1606A — AB Balance](https://codeforces.com/contest/1606/problem/A) |
| **Rating** | 900 |
| **Tags** | strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

You are given a string `s` of length `n` consisting of characters `a` and/or `b`.

Let `AB(s)` be the number of occurrences of string `ab` in `s` as a **substring**. Analogically, `BA(s)` is the number of occurrences of `ba` in `s` as a **substring**.

In one step, you can choose any index `i` and replace `sᵢ` with character `a` or `b`.

What is the minimum number of steps you need to make to achieve `AB(s) = BA(s)`?

**Reminder:**

The number of occurrences of string `d` in `s` as substring is the number of indices `i` (`1 ≤ i ≤ |s| - |d| + 1`) such that substring `sᵢ sᵢ ₊ ₁ … sᵢ ₊ |d| ₋ ₁` is equal to `d`. For example, `AB(``aabbbabaa``) = 2` since there are two indices `i`: `i = 2` where `aabbbabaa` and `i = 6` where `aabbbabaa`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 1000`). Description of the test cases follows.

The first and only line of each test case contains a single string `s` (`1 ≤ |s| ≤ 100`, where `|s|` is the length of the string `s`), consisting only of characters `a` and/or `b`.

## Output

For each test case, print the resulting string `s` with `AB(s) = BA(s)` you'll get making the minimum number of steps.

If there are multiple answers, print any of them.

## Examples

**Example:**

```
4
b
aabbbabaa
abbb
abbaab

```

**Output:**

```
b
aabbbabaa
bbbb
abbaaa
```

## Note

In the first test case, both `AB(s) = 0` and `BA(s) = 0` (there are no occurrences of `ab` (`ba`) in `b`), so can leave `s` untouched.

In the second test case, `AB(s) = 2` and `BA(s) = 2`, so you can leave `s` untouched. 

In the third test case, `AB(s) = 1` and `BA(s) = 0`. For example, we can change `s₁` to `b` and make both values zero.

In the fourth test case, `AB(s) = 2` and `BA(s) = 1`. For example, we can change `s₆` to `a` and make both values equal to `1`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1606/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
