# D. Pair of Topics
 
| Field | Value |
|---|---|
| **Contest** | [1324](https://codeforces.com/contest/1324) |
| **Problem** | [1324D — Pair of Topics](https://codeforces.com/contest/1324/problem/D) |
| **Rating** | 1400 |
| **Tags** | binary search, data structures, sortings, two pointers |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 125 ms |
| **Memory** | 1100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

The next lecture in a high school requires two topics to be discussed. The `i`-th topic is interesting by `aᵢ` units for the teacher and by `bᵢ` units for the students.

The pair of topics `i` and `j` (`i < j`) is called **good** if `aᵢ + aⱼ > bᵢ + bⱼ` (i.e. it is more interesting for the teacher).

Your task is to find the number of **good** pairs of topics.

## Input

The first line of the input contains one integer `n` (`2 ≤ n ≤ 2 · 10⁵`) — the number of topics.

The second line of the input contains `n` integers `a₁, a₂, …, aₙ` (`1 ≤ aᵢ ≤ 10⁹`), where `aᵢ` is the interestingness of the `i`-th topic for the teacher.

The third line of the input contains `n` integers `b₁, b₂, …, bₙ` (`1 ≤ bᵢ ≤ 10⁹`), where `bᵢ` is the interestingness of the `i`-th topic for the students.

## Output

Print one integer — the number of **good** pairs of topic.

## Examples

**Example 1:**

```
5
4 8 2 6 2
4 5 4 1 3

```

**Output 1:**

```
7

```

**Example 2:**

```
4
1 3 2 4
1 3 2 4

```

**Output 2:**

```
0

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1324/problem/D)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
