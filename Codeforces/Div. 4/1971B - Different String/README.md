# B. Different String
 
| Field | Value |
|---|---|
| **Contest** | [1971](https://codeforces.com/contest/1971) |
| **Problem** | [1971B — Different String](https://codeforces.com/contest/1971/problem/B) |
| **Rating** | 800 |
| **Tags** | implementation, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given a string `s` consisting of lowercase English letters.

Rearrange the characters of `s` to form a new string `r` that is **not equal** to `s`, or report that it's impossible.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 1000`) — the number of test cases.

The only line of each test case contains a string `s` of length at most `10` consisting of lowercase English letters.

## Output

For each test case, if no such string `r` exists as described in the statement, output "`NO`" (without quotes).

Otherwise, output "`YES`" (without quotes). Then, output one line — the string `r`, consisting of letters of string `s`.

You can output "`YES`" and "`NO`" in any case (for example, strings "`yEs`", "`yes`", and "`Yes`" will be recognized as a positive response).

If multiple answers are possible, you can output any of them.

## Examples

**Example:**

```
8
codeforces
aaaaa
xxxxy
co
d
nutdealer
mwistht
hhhhhhhhhh
```

**Output:**

```
YES
forcodesec
NO
YES
xxyxx
YES
oc
NO
YES
undertale
YES
thtsiwm
NO

```

## Note

In the first test case, another possible answer is `forcescode`.

In the second test case, all rearrangements of `aaaaa` are equal to `aaaaa`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1971/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
