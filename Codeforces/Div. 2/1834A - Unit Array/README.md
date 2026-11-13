# A. Unit Array
 
| Field | Value |
|---|---|
| **Contest** | [1834](https://codeforces.com/contest/1834) |
| **Problem** | [1834A — Unit Array](https://codeforces.com/contest/1834/problem/A) |
| **Rating** | 800 |
| **Tags** | greedy, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Given an array `a` of length `n`, which elements are equal to `-1` and `1`. Let's call the array `a` *good* if the following conditions are held at the same time:

 - `a₁ + a₂ + … + aₙ ≥ 0`;
- `a₁ · a₂ · … · aₙ = 1`.

In one operation, you can select an arbitrary element of the array `aᵢ` and change its value to the opposite. In other words, if `aᵢ = -1`, you can assign the value to `aᵢ := 1`, and if `aᵢ = 1`, then assign the value to `aᵢ := -1`.

Determine the minimum number of operations you need to perform to make the array `a` good. It can be shown that this is always possible.

## Input

Each test consists of multiple test cases. The first line contains a single integer `t` (`1 ≤ t ≤ 500`) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 100`) — the length of the array `a`.

The second line of each test case contains `n` integers `a₁, a₂, …, aₙ` (`aᵢ = ± 1`) — the elements of the array `a`.

## Output

For each test case, output a single integer — the minimum number of operations that need to be done to make the `a` array good.

## Examples

**Example:**

```
7
4
-1 -1 1 -1
5
-1 -1 -1 1 1
4
-1 1 -1 1
3
-1 -1 -1
5
1 1 1 1 1
1
-1
2
-1 -1
```

**Output:**

```
1
1
0
3
0
1
2

```

## Note

In the first test case, we can assign the value `a₁ := 1`. Then `a₁ + a₂ + a₃ + a₄ = 1 + (-1) + 1 + (-1) = 0 ≥ 0` and `a₁ · a₂ · a₃ · a₄ = 1 · (-1) · 1 · (-1) = 1`. Thus, we performed `1` operation.

In the second test case, we can assign `a₁ := 1`. Then `a₁ + a₂ + a₃ + a₄ + a₅ = 1 + (-1) + (-1) + 1 + 1 = 1 ≥ 0` and `a₁ · a₂ · a₃ · a₄ · a₅ = 1 · (-1) · (-1) · 1 · 1 = 1`. Thus, we performed `1` operation.

In the third test case, `a₁ + a₂ + a₃ + a₄ = (-1) + 1 + (-1) + 1 = 0 ≥ 0` and `a₁ · a₂ · a₃ · a₄ = (-1) · 1 · (-1) · 1 = 1`. Thus, all conditions are already satisfied and no operations are needed.

In the fourth test case, we can assign the values `a₁ := 1, a₂ := 1, a₃ := 1`. Then `a₁ + a₂ + a₃ = 1 + 1 + 1 = 3 ≥ 0` and `a₁ · a₂ · a₃ = 1 · 1 · 1 = 1`. Thus, we performed `3` operations.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1834/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
