# A. Glorious Batch-24!
 
| Field | Value |
|---|---|
| **Contest** | [106539](https://codeforces.com/contest/106539) |
| **Problem** | [106539A — Glorious Batch-24!](https://codeforces.com/contest/106539/problem/A) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

The exit from the summer cottage is fenced with a fence consisting of `n` boards, each `1` meter wide. To the left and right of the exit are the fences of other plots. Some of the boards of the fence want to be removed for the construction of a bathhouse (possibly all or none), while there is an automatic lawn mower on the plot that is `w` meters wide and must not leave the plot through a hole in the fence.

The lawn mower will be able to exit the plot if there are at least `w` consecutive removed boards among the numbers of the removed boards. Determine the maximum number of boards that can be removed from the fence.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows. 

The only line of each test case contains two integers `n` and `w` (`1 ≤ n ≤ 10⁹`, `1 ≤ w ≤ 10⁹`) — the number of boards in the fence and the width of the lawnmower in meters, respectively.

## Output

For each test case, output a single number — the maximum number of boards that can be removed from the fence.

## Examples

**Example:**

```
5
9 3
13 4
15 14
20 1
1000 42
```

**Output:**

```
6
10
14
0
977
```

## Note

In the first test case, the fence consists of `9` boards. 

 ![](https://espresso.codeforces.com/06d18da7e148ed7516e3e9e3ff46ef2e1c963c63.png) You can remove `6` boards and leave only the boards numbered `2`, `5`, and `8`. Then the lawn mower will not be able to leave the boundaries of the territory. 

 ![](https://espresso.codeforces.com/87f13c59050e0ce8c4f86709e0fabcb3a670f593.png) In the second test case, you can remove `10` boards, a possible arrangement is shown below. 

 ![](https://espresso.codeforces.com/da42a7f443c795e9eea042dbfa81d4c57044bd10.png)

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/106539/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
