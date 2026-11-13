# C. Red-Black Pairs
 
| Field | Value |
|---|---|
| **Contest** | [2225](https://codeforces.com/contest/2225) |
| **Problem** | [2225C — Red-Black Pairs](https://codeforces.com/contest/2225/problem/C) |
| **Rating** | 1100 |
| **Tags** | dp, greedy |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 512 megabytes |

---

There is a table of `2 × n` cells. Each cell of the table is colored either red or black. You want to repaint some cells of this table so that there exists at least one way to partition all cells into `n` pairs such that the following conditions hold: 

 - the cells in each pair have the same color;
- the cells in each pair share a side.

What is the minimum number of cells that need to be repainted?

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows. 

The first line of each test case contains one integer `n` (`1 ≤ n ≤ 2 · 10⁵`).

The second and third lines of each test case describe the colors of the cells. Each line contains a string consisting of exactly `n` letters "`R`" and/or "`B`".

Additional constraint on the input: 

 - the sum of `n` over all test cases does not exceed `2 · 10⁵`.

## Output

For each test case, output one integer — the minimum number of cells that need to be repainted.

## Examples

**Example:**

```
5
1
R
B
2
BR
BR
3
RBR
BRB
4
RRBB
BBRB
5
RBRBR
BBBRB
```

**Output:**

```
1
0
3
1
4
```

## Note

Consider the `3`rd example. One possible option is to color all cells in one color, which requires repainting `3` cells.

In the `4`th example, one possible valid repainting is 

 
RRBB
BBRR

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2225/problem/C)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
