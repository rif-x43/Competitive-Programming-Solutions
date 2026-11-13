# A. Collatz Conjecture
 
| Field | Value |
|---|---|
| **Contest** | [2137](https://codeforces.com/contest/2137) |
| **Problem** | [2137A — Collatz Conjecture](https://codeforces.com/contest/2137/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are doing a research paper on the famous Collatz Conjecture. In your experiment, you start off with an integer `x`, and you do the following procedure `k` times: 

 - If `x` is even, divide `x` by `2`.
- Otherwise, set `x` to `3· x+1`.

For example, starting off with `21` and doing the procedure `5` times, you get `21arrow64arrow32arrow16arrow8arrow4`.

After all `k` iterations, you are left with the final value of `x`. Unfortunately, you forgot the initial value. Please output any possible initial value of `x`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 400`). The description of the test cases follows. 

The first line of each test case contains two integers `k` and `x` (`1 ≤ k,x ≤ 20`).

## Output

For each test case, print any possible initial value on a new line. It can be shown that the answer always exists.

## Examples

**Example:**

```
3
1 4
1 5
5 4
```

**Output:**

```
1
10
21

```

## Note

In the first test case, since `1` is odd, performing the procedure `k=1` times results in `1·3+1=4`, so `1` is a valid output.

In the second test case, since `10` is even, performing the procedure `k=1` times results in `10/2=5`, so `10` is a valid output.

The third test case is explained in the statement.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2137/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
