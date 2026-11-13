# A. Optimal Purchase
 
| Field | Value |
|---|---|
| **Contest** | [2230](https://codeforces.com/contest/2230) |
| **Problem** | [2230A — Optimal Purchase](https://codeforces.com/contest/2230/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 512 megabytes |

---

You have a group of `n` students who need access to an online course. Two types of access keys are available in the store:

 - **Individual key:** costs `a` dollars and gives access to **one** student.
- **Group key:** costs `b` dollars and gives access to a group of up to **three** students inclusive.

A group key can also be used for fewer students (one or two), and its price does not change.

Your task is to determine the **minimum** amount of money needed to provide access to the online course for all `n` students.

## Input

The first line contains one integer `t` (`1 ≤ t ≤ 10⁴`) — the number of test cases.

Each test case consists of one line containing three integers `n, a, b` (`1 ≤ n, a, b ≤ 10⁸`) — the number of students, the cost of an individual key, and the cost of a group key.

## Output

For each test case, output one integer — the minimum amount of money needed to provide access to the online course for all `n` students.

## Examples

**Example:**

```
9
5 10 25
4 10 50
1 20 15
1 10 25
100000000 100 290
2 10 15
300 1 1
4 10 12
11 10 20
```

**Output:**

```
45
40
15
10
9666666670
15
100
22
80
```

## Note

In the first example, you can buy `1` group key and `2` individual keys.

In the second example, you can buy `4` individual keys.

In the third example, you can buy `1` group key.

In the fourth example, you can buy `1` individual key.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2230/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
