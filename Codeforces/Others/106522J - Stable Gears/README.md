# J. Stable Gears
 
| Field | Value |
|---|---|
| **Contest** | [106522](https://codeforces.com/contest/106522) |
| **Problem** | [106522J — Stable Gears](https://codeforces.com/contest/106522/problem/J) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 296 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

*The Darkness Brought In by Swallowstone Naturalis Historia*— Dateless Bar "Old Adam"Marisa is a girl of integrity who always helps others safeguard their belongings. Over a period of `n` days, she comes each day to take one of Reimu's takeouts. The `i`-th takeout is described by its deliciousness value — an integer `wᵢ` (`0≤ wᵢ≤ 2`), forming a sequence `w` of length `n`.

Marisa has a special fondness for the number `3`. She can perform the following operation zero or more times: 

 - Select a non-empty subsequence`∗` of `w` whose sum is divisible by `3`, and remove the elements of the subsequence from `w`.

Determine the maximum number of operations Marisa can perform.

`∗`A sequence `a` is a subsequence of a sequence `b` if `a` can be obtained from `b` by the deletion of several (possibly, zero or all) element from arbitrary positions.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 500`). The description of the test cases follows. 

The first line of each test case contains a single integer `n` (`1≤ n ≤ 100`).

The second line contains `n` integers `w₁, w₂, …, wₙ` (`0≤ wᵢ ≤ 2`), denoting the deliciousness values of the takeouts.

## Output

For each test case, output the maximum number of operations Marisa can perform.

## Examples

**Example:**

```
3
4
0 0 0 0
3
1 2 0
5
1 2 1 2 1
```

**Output:**

```
4
2
2
```

## Note

In the first test case, Marisa can perform four operations: ```[0,0,0,0]→[0,0,0]→[0,0]→[0]→ [].```

In the second test case, Marisa can perform two operations: ```[1,2,0]- > [0]- > [].```

In the third test case, Marisa can perform two operations: ```[1,2,1,2,1]- > [2,1,1]- > [1].```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/106522/problem/J)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
