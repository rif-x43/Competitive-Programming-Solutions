# A. Are They the Same?
 
| Field | Value |
|---|---|
| **Contest** | [2280](https://codeforces.com/contest/2280) |
| **Problem** | [2280A — Are They the Same?](https://codeforces.com/contest/2280/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | brute force, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given two integer arrays `a` and `b`, each of length `n`. Furthermore, you are given an integer `k`.

You are allowed to perform any of the following operations **zero or more times**: 

 - Choose an index `i` (`1≤ i≤ n`) and set `a[i] := 2· a[i] + k`.
- Choose an index `i` (`1≤ i≤ n`) and set `a[i] := a[i] + 2`.
- Choose an index `i` (`1≤ i≤ n`) and set `a[i] := a[i] - 2`.

Determine if there is a way to apply these operations such that the resulting array `a` is a permutation`\ᵈᵃᵍᵍᵉʳ` of `b`. Note that there are no restrictions on the values of the array during the process: elements may become negative or arbitrarily large.

`\ᵈᵃᵍᵍᵉʳ`An array `a` is a permutation of an array `b` if `a` consists of the elements of `b` in arbitrary order. For example, `[4,2,3,4]` is a permutation of `[3,2,4,4]`, while `[1,2,2]` is not a permutation of `[1,2,3]`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 500`). The description of the test cases follows.

The first line of each test case contains two integers `n` and `k` (`1≤ n≤ 100`, `0≤ k≤ 10⁶`) — `n` is the length of `a` and `b`.

The second line of each testcase contains `n` integers `a₁, a₂, …, aₙ` (`0 ≤ aᵢ ≤ 10⁶`).

The third line of each testcase contains `n` integers `b₁, b₂, …, bₙ` (`0 ≤ bᵢ ≤ 10⁶`).

## Output

For each test case, print "`YES`" if it is possible to transform `a` into a permutation of `b`, and "`NO`" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive responses.

## Examples

**Example:**

```
5
3 4
1 2 7
5 3 8
1 1
0
1
1 1
1
0
6 1
0 0 0 0 0 0
1 3 7 15 31 63
2 1000000
999999 1
1000000 1
```

**Output:**

```
YES
YES
NO
YES
YES
```

## Note

In the first test case, consider applying the following operations: 

 - Apply `a[1] := a[1] + 2`
- Apply `a[2] := 2 · a[2] + k`
- Apply `a[3] := a[3] - 2`

 As a result of these operations, `a` becomes `[3, 8, 5]`, which is a permutation of `[5, 3, 8]`.In the second test case, we can apply the operation `a[1] := 2· a[1] + k` to make `a = [1]`.

In the third test case, we can show that there is no way to make `a = [0]`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2280/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
