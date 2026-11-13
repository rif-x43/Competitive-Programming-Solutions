# B. Heapify 1
 
| Field | Value |
|---|---|
| **Contest** | [2195](https://codeforces.com/contest/2195) |
| **Problem** | [2195B — Heapify 1](https://codeforces.com/contest/2195/problem/B) |
| **Rating** | 900 |
| **Tags** | implementation, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

You are given a permutation `a` of length `n``∗`.

You can perform the following operation any number of times (possibly zero):

 - Select an index `i` (`1 ≤ i ≤ n/2`), and swap `aᵢ` and `a₂ᵢ`.

For example, when `a=[1,4,2,3,5]`, you can swap `a₂` and `a₄` to make it `[1,3,2,4,5]`, but you cannot swap `a₂` and `a₃`.

Please determine if the sequence `a` can be sorted in increasing order.

`∗`A permutation of length `n` is an array consisting of `n` distinct integers from `1` to `n` in arbitrary order. For example, `[2,3,1,5,4]` is a permutation, but `[1,2,2]` is not a permutation (`2` appears twice in the array), and `[1,3,4]` is also not a permutation (`n=3` but there is `4` in the array).

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows. 

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 2 · 10⁵`).

The second line of each test case contains `n` **distinct** integers `a₁,a₂,…,aₙ` (`1 ≤ aᵢ ≤ n`).

It is guaranteed that the sum of `n` over all test cases does not exceed `2 · 10⁵`.

## Output

If `a` can be sorted in increasing order, output "`YES`" on a separate line. Otherwise, output "`NO`" on a separate line.

You can output the answer in any case. For example, the strings "`yEs`", "`yes`", and "`Yes`" will also be recognized as positive responses.

## Examples

**Example:**

```
2
5
1 4 3 2 5
5
1 4 2 3 5
```

**Output:**

```
YES
NO
```

## Note

In the first test case, `a` is `[1,4,3,2,5]`. You can sort `a` in increasing order by swapping `a₂` and `a₄`. Therefore, the answer is "`YES`".

In the second test case, `a` is `[1,4,2,3,5]`. It is impossible to sort `a` in increasing order. Therefore, the answer is "`NO`".

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2195/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
