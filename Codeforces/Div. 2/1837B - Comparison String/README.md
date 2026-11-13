# B. Comparison String
 
| Field | Value |
|---|---|
| **Contest** | [1837](https://codeforces.com/contest/1837) |
| **Problem** | [1837B — Comparison String](https://codeforces.com/contest/1837/problem/B) |
| **Rating** | 900 |
| **Tags** | greedy |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 512 megabytes |

---

You are given a string `s` of length `n`, where each character is either `<` or `>`.

An array `a` consisting of `n+1` elements is compatible with the string `s` if, for every `i` from `1` to `n`, the character `sᵢ` represents the result of comparing `aᵢ` and `aᵢ₊₁`, i. e.:

 - `sᵢ` is `<` if and only if `aᵢ < aᵢ₊₁`;
- `sᵢ` is `>` if and only if `aᵢ > aᵢ₊₁`.

For example, the array `[1, 2, 5, 4, 2]` is compatible with the string `<<>>`. There are other arrays with are compatible with that string, for example, `[13, 37, 42, 37, 13]`.

The **cost** of the array is the number of different elements in it. For example, the cost of `[1, 2, 5, 4, 2]` is `4`; the cost of `[13, 37, 42, 37, 13]` is `3`.

You have to calculate the minimum cost among all arrays which are compatible with the given string `s`.

## Input

The first line contains one integer `t` (`1 ≤ t ≤ 500`) — the number of test cases.

Each test case consists of two lines: 

 - the first line contains one integer `n` (`1 ≤ n ≤ 100`);
- the second line contains the string `s`, consisting of `n` characters. Each character of `s` is either `<` or `>`.

## Output

For each test case, print one integer — the minimum cost among all arrays which are compatible with the given string `s`.

## Examples

**Example:**

```
4
4
<<>>
4
>><<
5
>>>>>
7
<><><><
```

**Output:**

```
3
3
6
2

```

## Note

In the first test case of the example, the array can be `[13, 37, 42, 37, 13]`.

In the second test case of the example, the array can be `[42, 37, 13, 37, 42]`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1837/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
