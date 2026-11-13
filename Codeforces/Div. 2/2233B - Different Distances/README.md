# B. Different Distances
 
| Field | Value |
|---|---|
| **Contest** | [2233](https://codeforces.com/contest/2233) |
| **Problem** | [2233B — Different Distances](https://codeforces.com/contest/2233/problem/B) |
| **Rating** | 900 |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 512 megabytes |

---

Construct an array of `4 · n` integers such that:

 - each number `1, 2, …, n` appears in the array exactly `4` times;
- let `pₓ, ᵢ` be the position of the `i`-th occurrence of number `x` in the array; then, for each `x` from `1` to `n`, the numbers `(pₓ, ₂ - pₓ, ₁), (pₓ, ₃ - pₓ, ₂), (pₓ, ₄ - pₓ, ₃)` must be pairwise distinct.

For example, for `n = 3`, one possible array is `[1, 1, 2, 1, 2, 3, 1, 3, 2, 2, 3, 3]`, because:

 - `p₁, ₂ - p₁, ₁ = 1, p₁, ₃ - p₁, ₂ = 2, p₁, ₄ - p₁, ₃ = 3` — all numbers are distinct;
- `p₂, ₂ - p₂, ₁ = 2, p₂, ₃ - p₂, ₂ = 4, p₂, ₄ - p₂, ₃ = 1` — all numbers are distinct;
- `p₃, ₂ - p₃, ₁ = 2, p₃, ₃ - p₃, ₂ = 3, p₃, ₄ - p₃, ₃ = 1` — all numbers are distinct.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 200`). The description of the test cases follows.

The only line of each test case contains one integer `n` (`2 ≤ n ≤ 200`).

## Output

For each test case, output the required array. If there are several suitable arrays, output any of them. It can be shown that at least one suitable array always exists under the constraints of the problem.

## Examples

**Example:**

```
3
3
4
5
```

**Output:**

```
1 1 2 1 2 3 1 3 2 2 3 3
1 4 3 4 4 3 3 1 2 1 2 3 4 2 2 1 
5 3 2 4 1 2 2 4 4 5 3 5 2 1 3 1 5 4 1 3 

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2233/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
