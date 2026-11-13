# C. Duck Surplus
 
| Field | Value |
|---|---|
| **Contest** | [2237](https://codeforces.com/contest/2237) |
| **Problem** | [2237C — Duck Surplus](https://codeforces.com/contest/2237/problem/C) |
| **Rating** | 1000 |
| **Tags** | binary search, greedy |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Ja the Ghost is playing with rubber ducks again! There are `n` piles of rubber ducks arranged in a row from left to right. Initially, the `i`-th pile contains `aᵢ` rubber ducks.

While the sequence `a` is not sorted in nondecreasing order, Ja **must** perform the following operation:

 - Choose two adjacent piles such that the left pile contains more ducks than the right pile. Ja swaps these two piles, and then adds the number of ducks in the new left pile to the new right pile.Formally, choose an index `i` such that `1≤ i < n` and `aᵢ > aᵢ₊₁`. Then replace the adjacent pair `(aᵢ,aᵢ₊₁)` with `(aᵢ₊₁,aᵢ+aᵢ₊₁)`.

For example, if two adjacent piles contain `7` and `3` rubber ducks, then after the operation they contain `3` and `10` rubber ducks.

Ja may choose any index satisfying the condition above at each step. It can be shown that, regardless of his choices, the process eventually ends with the sequence sorted in nondecreasing order.

Ja wants the largest pile at the end of the process to contain as few rubber ducks as possible. Determine the minimum possible value of the largest pile.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows.

The first line of each test case contains `n` (`1 ≤ n ≤ 2 · 10⁵`) — the number of piles.

The second line of each test case contains `n` integers `a₁, a₂, …, aₙ` (`1≤ aᵢ≤ 10⁹`) — the number of ducks in each pile.

It is guaranteed that the sum of `n` over all test cases does not exceed `2 · 10⁵`.

## Output

For each test case, output a single integer — the minimum possible value of the largest pile.

## Examples

**Example:**

```
10
4
1 2 2 5
2
7 3
3
3 2 1
5
2 2 1 3 3
4
3 1 4 2
5
1 4 3 2 5
6
6 2 5 1 4 3
7
2 7 1 6 3 5 4
8
8 1 7 2 6 3 5 4
5
1000000000 999999999 999999998 999999997 999999996
```

**Output:**

```
5
10
6
3
6
14
21
26
36
4999999990
```

## Note

In the transformations below, the two underlined numbers are the adjacent pair just obtained by the operation.

In the first test case, the sequence is already sorted in nondecreasing order. Therefore Ja does not perform any operation, and the answer is `5`.

In the second test case, Ja has only one possible operation: ```[7,3]→ [3,10].``The sequence is then sorted, so the answer is`10``.

In the third test case, Ja can perform the following operations: ```[3,2,1]→ [2,5,1]→ [2,1,6]→ [1,3,6].``The largest pile contains`6`ducks. If Ja first chooses the last two piles instead, the final largest pile would contain`7`ducks. Therefore the answer is`6``.

In the fourth test case, Ja cannot choose the first two piles at the beginning, because `2` is not greater than `2`. One possible process is ```[2,2,1,3,3]→ [2,1,3,3,3]→ [1,3,3,3,3].``Thus the answer is`3``.

In the fifth test case, one optimal process is ```[3,1,4,2]→ [1,4,4,2]→ [1,4,2,6]→ [1,2,6,6].``Therefore the answer is`6``.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2237/problem/C)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
