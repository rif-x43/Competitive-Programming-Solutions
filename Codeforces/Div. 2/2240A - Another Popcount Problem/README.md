# A. Another Popcount Problem
 
| Field | Value |
|---|---|
| **Contest** | [2240](https://codeforces.com/contest/2240) |
| **Problem** | [2240A — Another Popcount Problem](https://codeforces.com/contest/2240/problem/A) |
| **Rating** | 800 |
| **Tags** | greedy |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given two integers `n` and `k`.

Your task is to construct a sequence `a` consisting of `k` non-negative integers `a₁, a₂, …, aₖ` such that: 

 - `Σᵢ₌₁ᵏ aᵢ ≤ n`
- The total number of set bits, i.e., `Σᵢ₌₁ᵏ popcount(aᵢ)`, is as large as possible.

You only need to output the maximum possible value of `Σᵢ₌₁ᵏ popcount(aᵢ)`.

Here, `popcount(x)` denotes the number of `1` bits in the binary representation of `x`. For example, `popcount(6) = popcount((110)₂) = 2`, and `popcount(0) = 0`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10³`). The description of the test cases follows.

Each of the next `t` lines contains two integers `n` and `k` (`1 ≤ n, k ≤ 10⁶`) — the maximum allowed sum of the sequence and the length of the sequence, respectively.

## Output

For each test case, output a single integer — the maximum possible value of `Σᵢ₌₁ᵏ popcount(aᵢ)`.

## Examples

**Example:**

```
6
2 1
3 1
6 2
14142 137205
1000000 100
1000000 1000000
```

**Output:**

```
1
2
4
14142
1322
1000000
```

## Note

In the first test case, `n=2` and `k=1`. We can choose `a = [1]` or `a = [2]`. In both cases, the sum of popcounts is `1`.

In the second test case, `n=3` and `k=1`. We can choose `a = [3]`, since `(3)₂ = (11)₂`, `popcount(3) = 2`.

In the third test case, `n=6` and `k=2`. We can choose `a = [3, 3]`. The sum is `3 + 3 = 6 ≤ 6`, and the total popcount is `popcount(3) + popcount(3) = 2 + 2 = 4`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2240/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
