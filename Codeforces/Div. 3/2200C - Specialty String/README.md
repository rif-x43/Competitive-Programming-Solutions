# C. Specialty String
 
| Field | Value |
|---|---|
| **Contest** | [2200](https://codeforces.com/contest/2200) |
| **Problem** | [2200C — Specialty String](https://codeforces.com/contest/2200/problem/C) |
| **Rating** | 900 |
| **Tags** | brute force, greedy, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

AksLolCoding is playing a game on a string `s` of length `n`. Initially, `s` contains only lowercase Latin characters.

In one turn, AksLolCoding can choose any pair of integers `(i,j)` such that: 

 - `1 ≤ i < j ≤ n`;
- `sᵢ = sⱼ ≠ *`; and
- `sₖ = *` for all `i < k < j`.

 If no such `i,j` exists, then the game ends. Otherwise, AksLolCoding sets `sᵢ:=*` and `sⱼ:=*`.Once the game ends, AksLolCoding wins if and only if every character in `s` is equal to `*`. Determine if it is possible for AksLolCoding to win.

**Note:** `*` represents ASCII character 42.

## Input

The first line contains an integer `t` (`1 ≤ t ≤ 100`), the number of test cases.

The first line of each test case contains an integer `n` (`1 ≤ n ≤ 5000`), the length of the string.

The second line of each test case contains a string `s` consisting of lowercase Latin characters.

The sum of `n` over all test cases does not exceed `5000`.

## Output

Output the answer to each test case on its own line. If AksLolCoding can win, output "`YES`" (without quotes). Else, output "`NO`" (without quotes). 

You can output the answer in any case (upper or lower). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive responses.

## Examples

**Example:**

```
6
1
a
6
llmllm
6
uwuuwu
6
byebye
6
oooioi
12
siixxsevvenn
```

**Output:**

```
NO
YES
YES
NO
NO
YES
```

## Note

In the first test case, it can be shown that it is impossible for AksLolCoding to win.

In the second test case, AksLolCoding can win by making the following moves: `llmllm` `arrow` `llm**m` `arrow` `**m**m` `arrow` `******`

In the third test case, AksLolCoding can win by making the following moves: `uwuuwu` `arrow` `uw**wu` `arrow` `u****u` `arrow` `******`

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2200/problem/C)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
