# A. Lever
 
| Field | Value |
|---|---|
| **Contest** | [2131](https://codeforces.com/contest/2131) |
| **Problem** | [2131A — Lever](https://codeforces.com/contest/2131/problem/A) |
| **Rating** | 800 |
| **Tags** | math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

In Divergent Universe, The Lever iterates itself given two arrays `a` and `b` of length `n`. In each iteration, The Lever will do the following:

 - Choose a random index `i` such that `aᵢ > bᵢ`. Then, decrease `aᵢ` by `1`. If there does not exist such `i`, ignore this step.
- Choose a random index `i` such that `aᵢ < bᵢ`. Then, increase `aᵢ` by `1`. If there does not exist such `i`, ignore this step.

After each iteration, the Lever will check if step `1` is ignored, and if so, it will end its iteration.

You're given the two arrays. Find the number of iterations that the Lever does. It can be shown this number is fixed over all possibilities of random indices that The Lever can choose for each step.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows. 

The first line of each test case contains one integer `n` (`1 ≤ n ≤ 10`).

The second line of each test case contains `n` integers `a₁, a₂, …, aₙ` (`1 ≤ aᵢ ≤ 10`).

The third line of each test case contains `n` integers `b₁, b₂, …, bₙ` (`1 ≤ bᵢ ≤ 10`).

## Output

For each test case, output one integer — the number of iterations that the Lever does.

## Examples

**Example:**

```
4
2
7 3
5 6
3
3 1 4
3 1 4
1
10
1
6
1 1 4 5 1 4
1 9 1 9 8 1
```

**Output:**

```
3
1
10
7

```

## Note

In the first sample case:

In the first iteration, the Lever decreases `a₁` by `1` and increases `a₂` by `1`, and `a` becomes `[6,4]`.

In the second iteration, the Lever decreases `a₁` by `1` and increases `a₂` by `1`, and `a` becomes `[5,5]`.

In the third iteration, the Lever increases `a₂` by `1`, and `a` becomes `[5,6]`. Since it fails to decrease an element, its iteration ends. Therefore, the answer is `3`.

In the second sample case, the Lever does nothing in its first iteration, and thus it does only one iteration.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2131/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
