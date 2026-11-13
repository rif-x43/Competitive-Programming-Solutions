# A. ASCII Art Contest
 
| Field | Value |
|---|---|
| **Contest** | [2172](https://codeforces.com/contest/2172) |
| **Problem** | [2172A — ASCII Art Contest](https://codeforces.com/contest/2172/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Three leading AI-powered creative assistants—Gemini, ChatGPT, and Claude—enter the first ever ASCII Art Contest, where they must impress a panel of human judges with their text-based masterpieces.

Each participant receives a score between 80 and 100 (inclusive). The organizers want to announce the final standing only if the judges' opinions are "close enough"; otherwise, they will ask the judges to reconsider.

Given the three integer scores of Gemini, ChatGPT, and Claude, determine the contest result:

 - If the maximum score and the minimum score differ by at least 10 points, print `check again` (the judging seems inconsistent, so the panel must re-evaluate).
- Otherwise, print `final X`, where `X` is the median of the three scores (the score that would be in the middle if all three were sorted in non-decreasing order).

## Input

A single line contains three integers `g, c, ell`, representing the scores of Gemini, ChatGPT, and Claude respectively.

 - `80≤ g, c, ell ≤ 100`

## Output

Print the required answer in a line.

## Examples

**Example 1:**

```
88 94 95

```

**Output 1:**

```
final 94

```

**Example 2:**

```
100 80 81

```

**Output 2:**

```
check again

```

**Example 3:**

```
98 99 98

```

**Output 3:**

```
final 98

```

**Example 4:**

```
95 86 85

```

**Output 4:**

```
check again

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2172/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
