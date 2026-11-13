# B. Sequence Game
 
| Field | Value |
|---|---|
| **Contest** | [1862](https://codeforces.com/contest/1862) |
| **Problem** | [1862B — Sequence Game](https://codeforces.com/contest/1862/problem/B) |
| **Rating** | 800 |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 93 ms |
| **Memory** | 5100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Tema and Vika are playing the following game.

First, Vika comes up with a sequence of positive integers `a` of length `m` and writes it down on a piece of paper. Then she takes a new piece of paper and writes down the sequence `b` according to the following rule: 

 - First, she writes down `a₁`.
- Then, she writes down only those `aᵢ` (`2 ≤ i ≤ m`) such that `aᵢ ₋ ₁ ≤ aᵢ`. Let the length of this sequence be denoted as `n`.

For example, from the sequence `a=[4, 3, 2, 6, 3, 3]`, Vika will obtain the sequence `b=[4, 6, 3]`.

She then gives the piece of paper with the sequence `b` to Tema. He, in turn, tries to guess the sequence `a`.

Tema considers winning in such a game highly unlikely, but still wants to find at least one sequence `a` that could have been originally chosen by Vika. Help him and output any such sequence.

**Note that the length of the sequence you output should not exceed the input sequence length by more than two times.**

## Input

Each test consists of multiple test cases. The first line of input data contains a single integer `t` (`1 ≤ t ≤ 10⁴`) — the number of test cases. This is followed by a description of the test cases.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 2 · 10⁵`) — the length of the sequence `b`.

The second line of each test case contains `n` integers `b₁, b₂, b₃, …, bₙ` (`1 ≤ bᵢ ≤ 10⁹`) — the elements of the sequence.

The sum of the values of `n` over all test cases does not exceed `2 · 10⁵`.

## Output

For each test case, output **two lines**. In the first line, output a single integer `m` — the length of the sequence (`n ≤ m ≤ 2 · n`). In the second line, output `m` integers `a₁, a₂, a₃, …, aₘ` (`1 ≤ aᵢ ≤ 10⁹`) — the assumed sequence that Vika could have written on the first piece of paper.

If there are multiple suitable sequences, you can output any of them.

## Examples

**Example:**

```
6
3
4 6 3
3
1 2 3
5
1 7 9 5 7
1
144
2
1 1
5
1 2 2 1 1
```

**Output:**

```
6
4 3 2 6 3 3
3
1 2 3
6
1 7 9 3 5 7
1
144
2
1 1
6
1 2 2 1 1 1
```

## Note

The first sample is explained in the problem statement.

In the second sample, Vika could have chosen the original sequence.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1862/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
