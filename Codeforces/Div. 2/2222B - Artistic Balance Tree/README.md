# B. Artistic Balance Tree
 
| Field | Value |
|---|---|
| **Contest** | [2222](https://codeforces.com/contest/2222) |
| **Problem** | [2222B — Artistic Balance Tree](https://codeforces.com/contest/2222/problem/B) |
| **Rating** | 1100 |
| **Tags** | greedy, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.5 seconds | 256 megabytes |

---

After learning about the Artistic Balance Tree, Lizhous encountered the following problem.

You are given an array `a` consisting of `n` integers. You need to perform exactly `m` operations on `a` in order. Each operation consists of two steps. Specifically, in the `i`-th operation, you are given an integer `xᵢ`, and you will:

 - First, select a center index `u` and a non-negative length `y` such that the interval `[u-y, u+y]` lies entirely within `[1, n]` (i.e., `u - y ≥ 1` and `u + y ≤ n`). For each `1≤ i≤ y`, swap the elements `aᵤ₋ᵢ` and `aᵤ₊ᵢ`.
- Then, *mark* the **element** at index `xᵢ`. If this element is already marked, nothing happens. Note that the marks are on elements, not indices. That means if an element is swapped with some other element by future operations, the mark will stay on it.

After performing all `m` operations, your task is to find the minimum possible sum of all elements that remain *unmarked*.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows. 

The first line of each test case contains two integers `n` and `m` (`1 ≤ n, m ≤ 10⁵`) — the length of `a` and the number of operations.

The second line contains `n` integers `a₁, a₂, …, aₙ` (`-10⁹ ≤ aᵢ ≤ 10⁹`) — the elements of `a`.

The third line contains `m` integers `x₁, x₂, …, xₘ` (`1 ≤ xᵢ ≤ n`) — the indices to be *marked* in each operation.

It is guaranteed that the sum of `n` over all test cases does not exceed `10⁵`. 

It is guaranteed that the sum of `m` over all test cases does not exceed `10⁵`.

## Output

For each test case, output a single integer — the minimum possible sum of the *unmarked* elements after all operations.

## Examples

**Example:**

```
6
7 4
1 2 3 4 5 6 7
1 2 3 4
7 4
1 -2 3 4 -5 -6 -7
7 6 5 4
7 5
21 -45 234 -8 423 12 -987
6 6 6 6 6
7 5
-21 45 -234 8 -423 -12 987
7 7 7 7 7
7 3
-1 2 -3 4 5 6 7
1 2 3
7 3
-1 -2 -3 -4 -5 -6 -7
1 2 3
```

**Output:**

```
6
-20
-362
-637
2
-25
```

## Note

In the first test case, one optimal operation sequence is as follows:

 - Choose center `u=4` and length `y=3`, and `a` becomes `[7,6,5,4,3,2,1]`. Then, the element `a₁=7` is *marked*.
- Choose center `u=1` and length `y=0`, and `a` remains `[7,6,5,4,3,2,1]`. Then, the element `a₂=6` is *marked*.
- Choose center `u=1` and length `y=0`, and `a` remains `[7,6,5,4,3,2,1]`. Then, the element `a₃=5` is *marked*.
- Choose center `u=1` and length `y=0`, and `a` remains `[7,6,5,4,3,2,1]`. Then, the element `a₄=4` is *marked*.

The unmarked elements are `1`, `2`, and `3`, and the answer is `1+2+3=6`.

In the second test case, one optimal operation sequence is as follows:

 - Choose center `u=4` and length `y=3`, and `a` becomes `[-7,-6,-5,4,3,-2,1]`. Then, the element `a₇=1` is *marked*.
- Choose center `u=5` and length `y=1`, and `a` becomes `[-7,-6,-5,-2,3,4,1]`. Then, the element `a₆=4` is *marked*.
- Choose center `u=1` and length `y=0`, and `a` remains `[-7,-6,-5,-2,3,4,1]`. Then, the element `a₅=3` is *marked*.
- Choose center `u=5` and length `y=1`, and `a` becomes `[-7,-6,-5,4,3,-2,1]`. Then, the element `a₄=4` is *marked*.

The unmarked elements are `-2`, `-5`, `-6`, and `-7`, and the answer is `(-2)+(-5)+(-6)+(-7)=-20`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2222/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
