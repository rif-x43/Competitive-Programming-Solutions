# A. Tricky Sum
 
| Field | Value |
|---|---|
| **Contest** | [598](https://codeforces.com/contest/598) |
| **Problem** | [598A — Tricky Sum](https://codeforces.com/contest/598/problem/A) |
| **Rating** | 900 |
| **Tags** | math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

In this problem you are to calculate the sum of all integers from `1` to `n`, but you should take all powers of two with minus in the sum.

For example, for `n = 4` the sum is equal to `- 1 - 2 + 3 - 4 = - 4`, because `1`, `2` and `4` are `2⁰`, `2¹` and `2²` respectively.

Calculate the answer for `t` values of `n`.

## Input

The first line of the input contains a single integer `t` (`1 ≤ t ≤ 100`) — the number of values of `n` to be processed.

Each of next `t` lines contains a single integer `n` (`1 ≤ n ≤ 10⁹`).

## Output

Print the requested sum for each of `t` integers `n` given in the input.

## Examples

**Example:**

```
2
4
1000000000

```

**Output:**

```
-4
499999998352516354

```

## Note

The answer for the first sample is explained in the statement.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/598/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
