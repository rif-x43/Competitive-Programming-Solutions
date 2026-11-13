# B. Digit String
 
| Field | Value |
|---|---|
| **Contest** | [2230](https://codeforces.com/contest/2230) |
| **Problem** | [2230B — Digit String](https://codeforces.com/contest/2230/problem/B) |
| **Rating** | 1000 |
| **Tags** | greedy, implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 512 megabytes |

---

You are given a string `s` consisting of digits from `1` to `4`.

Let's say that the string is *beautiful* if it is **impossible** to select some of its elements and write them out (in the same order as they appear in the string) to form a number that is a multiple of `4`. For example, the strings `31`, `222`, `213` are beautiful, while the strings `143`, `3123`, `1322` are not. The empty string is considered beautiful.

Your task is to calculate the minimum possible number of elements in the string `s` that need to be removed in order to make it beautiful.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 10⁴`) — the number of test cases.

The only line of each test case contains a string `s` (`1 ≤ |s| ≤ 3 · 10⁵`), consisting of digits from `1` to `4`.

Additional constraint on the input: the sum of the lengths of `s` over all test cases doesn't exceed `3 · 10⁵`.

## Output

For each test case, print a single integer — the minimum possible number of elements in the string `s` that need to be removed in order to make it beautiful.

## Examples

**Example:**

```
5
4
13
3244123
24424224242
4132423432241231
```

**Output:**

```
1
0
4
5
9
```

## Note

In the first example, you have to delete the whole string.

In the second example, the string is already beautiful.

In the third example, you can delete the `1`-st, `3`-rd, `4`-th, and `6`-th characters, and you will get the string `213`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2230/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
