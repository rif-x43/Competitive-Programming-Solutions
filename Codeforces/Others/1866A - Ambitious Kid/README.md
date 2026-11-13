# A. Ambitious Kid
 
| Field | Value |
|---|---|
| **Contest** | [1866](https://codeforces.com/contest/1866) |
| **Problem** | [1866A — Ambitious Kid](https://codeforces.com/contest/1866/problem/A) |
| **Rating** | 800 |
| **Tags** | math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Chaneka, Pak Chanek's child, is an ambitious kid, so Pak Chanek gives her the following problem to test her ambition.

Given an array of integers `[A₁, A₂, A₃, …, AN]`. In one operation, Chaneka can choose one element, then increase or decrease the element's value by `1`. Chaneka can do that operation multiple times, even for different elements.

What is the minimum number of operations that must be done to make it such that `A₁ × A₂ × A₃ × … × AN = 0`?

## Input

The first line contains a single integer `N` (`1 ≤ N ≤ 10⁵`).

The second line contains `N` integers `A₁, A₂, A₃, …, AN` (`-10⁵ ≤ Aᵢ ≤ 10⁵`).

## Output

An integer representing the minimum number of operations that must be done to make it such that `A₁ × A₂ × A₃ × … × AN = 0`.

## Examples

**Example 1:**

```
3
2 -6 5

```

**Output 1:**

```
2

```

**Example 2:**

```
1
-3

```

**Output 2:**

```
3

```

**Example 3:**

```
5
0 -1 0 1 0

```

**Output 3:**

```
0

```

## Note

In the first example, initially, `A₁× A₂× A₃=2×(-6)×5=-60`. Chaneka can do the following sequence of operations:

 - Decrease the value of `A₁` by `1`. Then, `A₁× A₂× A₃=1×(-6)×5=-30`
- Decrease the value of `A₁` by `1`. Then, `A₁× A₂× A₃=0×(-6)×5=0`

In the third example, Chaneka does not have to do any operations, because from the start, it already holds that `A₁× A₂× A₃× A₄× A₅=0×(-1)×0×1×0=0`

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1866/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
