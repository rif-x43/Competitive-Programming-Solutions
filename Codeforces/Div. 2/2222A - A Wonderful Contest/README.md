# A. A Wonderful Contest
 
| Field | Value |
|---|---|
| **Contest** | [2222](https://codeforces.com/contest/2222) |
| **Problem** | [2222A — A Wonderful Contest](https://codeforces.com/contest/2222/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, dp, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

*Nanatsukaze - Save Our Sound* As a person who loves competitions, you now need to participate in a *wonderful* OI contest.

This contest has `n` problems, each with a full score of `100`. The `i`-th problem has `aᵢ` subtasks, and each subtask has a score of `100/aᵢ`. It is guaranteed that `aᵢ` is a divisor of `100`.

Now, several contestants will participate in this contest. Suppose a contestant solves `xᵢ` (`0≤ xᵢ≤ aᵢ`) subtasks of the `i`-th problem; his score on the `i`-th problem will be `xᵢ · 100/aᵢ`. The total score of the contestant in the contest is the sum of the scores on all problems, i.e., `Σᵢ₌₁ⁿ xᵢ · 100/aᵢ`.

To prove that the contest is a truly *wonderful* one, you have to check whether it is possible to achieve every integer total score from `0` to `100· n` (inclusive). Formally, you have to determine whether the following statement holds:

 - For every integer `k` where `0≤ k≤ 100· n`, there exists an array `x` of length `n` (`0≤ xᵢ≤ aᵢ`) such that `k=Σᵢ₌₁ⁿ xᵢ · 100/aᵢ`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 100`). The description of the test cases follows. 

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 10`) — the number of problems in the contest.

The second line contains `n` integers `a₁, a₂, …, aₙ` (`1 ≤ aᵢ ≤ 100`) — the number of subtasks of each problem. It is guaranteed that every `aᵢ` is a divisor of `100`.

## Output

For each test case, output "`Yes`" if it is possible to obtain an arbitrary total score between `0` and `100· n`; otherwise, output "`No`".

You can output the answer in any case (upper or lower). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive responses.

## Examples

**Example:**

```
5
2
100 20
2
10 10
3
50 100 25
4
1 2 5 20
10
100 1 2 4 5 10 20 25 50 100
```

**Output:**

```
Yes
No
Yes
No
Yes
```

## Note

In the first test case, for every integer `k` (`0 ≤ k ≤ 200`), it is possible to achieve a total score of exactly `k`. For example, when `k=10`, a contestant who passes `0` subtasks in the first problem and `2` subtasks in the second problem achieves a total score of `0 · 100/100 + 2 · 100/20 = 10`.

In the second test case, when `k=95`, it can be proven that it is impossible to achieve a total score of exactly `95`.

In the third test case, for every integer `k` (`0 ≤ k ≤ 300`), it is possible to achieve a total score of exactly `k`. For example, when `k=233`, a contestant who passes `25`, `83`, and `25` subtasks in the three problems, respectively, achieves a total score of `25 · 100/50 + 83 · 100/100 + 25 · 100/25 = 233`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2222/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
