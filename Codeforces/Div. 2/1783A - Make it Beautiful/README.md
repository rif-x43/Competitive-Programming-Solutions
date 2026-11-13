# A. Make it Beautiful
 
| Field | Value |
|---|---|
| **Contest** | [1783](https://codeforces.com/contest/1783) |
| **Problem** | [1783A — Make it Beautiful](https://codeforces.com/contest/1783/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms, math, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 3 seconds | 512 megabytes |

---

An array `a` is called *ugly* if it contains **at least one** element which is equal to the **sum of all elements before it**. If the array is not ugly, it is *beautiful*.

For example:

 - the array `[6, 3, 9, 6]` is ugly: the element `9` is equal to `6 + 3`;
- the array `[5, 5, 7]` is ugly: the element `5` (the second one) is equal to `5`;
- the array `[8, 4, 10, 14]` is beautiful: `8 ≠ 0`, `4 ≠ 8`, `10 ≠ 8 + 4`, `14 ≠ 8 + 4 + 10`, so there is no element which is equal to the sum of all elements before it.

You are given an array `a` such that `1 ≤ a₁ ≤ a₂ ≤ … ≤ aₙ ≤ 100`. You have to **reorder** the elements of `a` in such a way that the resulting array is beautiful. Note that you are not allowed to insert new elements or erase existing ones, you can only change the order of elements of `a`. You are allowed to keep the array `a` unchanged, if it is beautiful.

## Input

The first line contains one integer `t` (`1 ≤ t ≤ 2000`) — the number of test cases.

Each test case consists of two lines. The first line contains one integer `n` (`2 ≤ n ≤ 50`). The second line contains `n` integers `a₁, a₂, …, aₙ` (`1 ≤ a₁ ≤ a₂ ≤ … ≤ aₙ ≤ 100`).

## Output

For each test case, print the answer as follows:

 - if it is impossible to reorder the elements of `a` in such a way that it becomes beautiful, print `NO`;
- otherwise, in the first line, print `YES`. In the second line, print `n` integers — any beautiful array which can be obtained from `a` by reordering its elements. If there are multiple such arrays, print any of them.

## Examples

**Example:**

```
4
4
3 3 6 6
2
10 10
5
1 2 3 4 5
3
1 4 4
```

**Output:**

```
YES
3 6 3 6
NO
YES
2 4 1 5 3
YES
1 4 4

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1783/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
