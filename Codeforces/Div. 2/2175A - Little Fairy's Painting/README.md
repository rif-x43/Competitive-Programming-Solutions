# A. Little Fairy's Painting
 
| Field | Value |
|---|---|
| **Contest** | [2175](https://codeforces.com/contest/2175) |
| **Problem** | [2175A — Little Fairy's Painting](https://codeforces.com/contest/2175/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

The little fairy has a ribbon with `10¹⁸` cells and an infinite variety of colors. The first `n` cells of the ribbon have already been colored, where the `i`-th cell is colored with color `aᵢ`.

Little fairy will color the remaining cells in order from `n+1` to `10¹⁸`. For the `i`-th cell: 

- Little fairy first counts the number of distinct colors currently present on the ribbon, denoted as `cᵢ`.
- Then she will color the `i`-th cell with color `cᵢ`.

What color will the fairy use for the `10¹⁸`-th cell?

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 500`). The description of the test cases follows. 

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 100`) — the number of colored cells.

The second line of each test case contains `n` integers `a₁,a₂,…,aₙ` (`1 ≤ aᵢ ≤ 10³`) — the colors of the cells.

## Output

For each test case, print the color of the last cell.

## Examples

**Example:**

```
5
6
1 1 1 1 1 1
1
1000
5
8 10 15 20 25
8
2 5 2 4 1 2 5 3
6
40 4 1 95 8 40
```

**Output:**

```
1
1000
8
5
8
```

## Note

In the first example, each time there is only one distinct color on the ribbon, so the fairy always chooses the color `1`.

In the second example, the fairy will color the next `1000` cells with colors from `1` to `1000` sequentially, after that all next cells will be colored with color `1000`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2175/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
