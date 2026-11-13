# B. AI Finds Nothing Here
 
| Field | Value |
|---|---|
| **Contest** | [2240](https://codeforces.com/contest/2240) |
| **Problem** | [2240B — AI Finds Nothing Here](https://codeforces.com/contest/2240/problem/B) |
| **Rating** | 1100 |
| **Tags** | combinatorics, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Milkcat2009 has a matrix `a` with `n` rows and `m` columns consisting of integers `0` and `1`. The rows are numbered from `1` to `n`, and the columns are numbered from `1` to `m`. The element in the `i`-th row and `j`-th column is denoted as `aᵢ,ⱼ`.

Milkcat2009's AI scans every single submatrix`∗` of `a` consisting of `r` rows and `c` columns. The AI considers the matrix *clean* if the bitwise XOR sum of elements in each such submatrix is equal to `0`.

Formally, the matrix `a` is valid if and only if for all `1 ≤ i ≤ n - r + 1` and `1 ≤ j ≤ m - c + 1`: ```oplusₓ₌ᵢⁱ⁺ʳ⁻¹ oplusy₌ⱼʲ⁺ᶜ⁻¹ aₓ,y = 0```

where `⊕` denotes summation with the bitwise XOR operation.

Your task is, given various sets of integers `n, m, r, c`, to count the number of *clean* matrices of `n` rows and `m` columns with respect to scanning dimensions `r` and `c`. Since the answer can be very large, calculate it modulo `998 244 353`.

`∗`A submatrix of a matrix is obtained by removing some rows (from the beginning and/or end) and/or columns (from the beginning and/or end) from the original matrix.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows.

Each test case consists of a single line containing four integers `n, m, r, c` (`1 ≤ r ≤ n ≤ 10⁹`, `1 ≤ c ≤ m ≤ 10⁹`), representing the dimensions of the matrix and the dimensions of the scanning area, respectively.

## Output

For each test case, output a single integer representing the answer modulo `998 244 353`.

## Examples

**Example:**

```
8
1 1 1 1
2 3 1 2
2 5 2 2
3 5 2 2
4 6 2 2
100 14 52 6
1000000000 1000000000 1000000000 1000000000
1000000000 1000000000 1 1
```

**Output:**

```
1
4
64
128
512
543661425
121099884
1
```

## Note

For the first test case. The only element `a₁,₁` must satisfy `a₁,₁ = 0`. Since `a₁,₁` must be `0`, there is only `1` valid matrix: `[0]`.

For the second test case.The condition requires the XOR sum of every `1 × 2` submatrix to be `0`. This implies `aᵢ,ⱼ ⊕ aᵢ,ⱼ₊₁ = 0`, so `aᵢ,ⱼ = aᵢ,ⱼ₊₁` for all valid `i,j`. For each row, all elements must be equal. Thus, each row can be either `[0, 0, 0]` or `[1, 1, 1]`. With `2` rows, there are `2² =4` valid matrices.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2240/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
