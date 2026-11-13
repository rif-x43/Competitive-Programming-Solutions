# A. Sakurako's Exam
 
| Field | Value |
|---|---|
| **Contest** | [2008](https://codeforces.com/contest/2008) |
| **Problem** | [2008A — Sakurako's Exam](https://codeforces.com/contest/2008/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, constructive algorithms, greedy, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Today, Sakurako has a math exam. The teacher gave the array, consisting of `a` ones and `b` twos.

In an array, Sakurako **must** place either a '`+`' or a '`-`' in front of each element so that the sum of all elements in the array equals `0`.

Sakurako is not sure if it is possible to solve this problem, so determine whether there is a way to assign signs such that the sum of all elements in the array equals `0`.

## Input

The first line contains a single integer `t` (`1≤ t≤ 100`)  — the number of test cases.

The only line of each test case contains two integers `a` and `b` (`0≤ a,b < 10`)  — the number of '1's and the number of '2's in the array.

## Output

For each test case, output "`Yes`" if you can make the sum of the entire array equal to `0`, and "`No`" otherwise.

You can output each letter in any case (lowercase or uppercase). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be accepted as a positive answer.

## Examples

**Example:**

```
5
0 1
0 3
2 0
2 3
3 1
```

**Output:**

```
NO
NO
YES
YES
NO

```

## Note

- `a=0`, `b=1`: This means the array is `[2]` — it is impossible to add the signs '`+`' or '`-`' to get `0` as a result;
- `a=0`, `b=3`: This means the array is `[2, 2, 2]` — it is impossible to add the signs '`+`' or '`-`' to get `0` as a result;
- `a=2`, `b=0`: This means the array is `[1, 1]` — it is possible to add the signs '`+`' or '`-`' to get `0` as a result (`+1-1=0`);
- `a=2`, `b=3`: This means the array is `[1, 1, 2, 2, 2]` — it is possible to add the signs '`+`' or '`-`' to get `0` as a result (`+1+1-2-2+2=0`);

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2008/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
