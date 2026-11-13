# C. Chipmunk Theo and Equality
 
| Field | Value |
|---|---|
| **Contest** | [2231](https://codeforces.com/contest/2231) |
| **Problem** | [2231C — Chipmunk Theo and Equality](https://codeforces.com/contest/2231/problem/C) |
| **Rating** | 1400 |
| **Tags** | implementation, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 187 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 512 megabytes |

---

While exploring the depths of the Internet, Theodore the chipmunk found a very interesting sequence of positive integers and decided to play with it.

In one operation, he chooses an element of the sequence and performs the following action: 

 - If the chosen element is even, he divides it by 2.
- If the chosen element is odd, he increases it by 1.

Theo really loves equality, so he wants to make all numbers in the sequence equal (otherwise, some numbers might feel offended). Since he needs to plan his lunch time, help him determine the minimum number of operations required to make all numbers equal.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 10⁴`). The description of the test cases follows. 

The first line of each test case contains a single integer `n` (`1 ≤ n ≤ 10⁵`) — the length of the sequence.

The second line of each test case contains `n` integers `a₁, a₂, …, aₙ` (`1 ≤ aᵢ ≤ 10⁹`) — the elements of the sequence.

It is guaranteed that the sum of `n` over all test cases does not exceed `10⁵`.

## Output

For each test case, output a single integer — the minimum number of operations Theo needs to make all numbers in the sequence equal.

## Examples

**Example:**

```
5
3
3 2 4
7
3 6 7 16 8 8 7
3
1 4 2
5
10 10 10 10 10
6
1 1 3 1 1 1
```

**Output:**

```
3
11
2
0
3
```

## Note

In the first test case, we have a sequence: `[3, 2, 4]`

One possible sequence of operations: ```[3, 2, 4] arrow [4, 2, 4] arrow [2, 2, 4] arrow [2, 2, 2]``` (Operations are performed on numbers shown in bold.)

In the second test case, the sequence is: `[3, 6, 7, 16, 8, 8, 7]`

Possible operations: 

 - Perform the operation once on the 1st element: `3 arrow 4`
- Perform the operation twice on the 2nd element: `6 arrow 3 arrow 4`
- Perform the operation twice on the 4th element: `7 arrow 8 arrow 4`
- Perform the operation twice on the 5th element: `16 arrow 8 arrow 4`
- Perform the operation once on the 6th element: `8 arrow 4`
- Perform the operation once on the 7th element: `8 arrow 4`
- Perform the operation twice on the 8th element: `7 arrow 8 arrow 4`

After these `11` operations, all elements become `4`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2231/problem/C)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
