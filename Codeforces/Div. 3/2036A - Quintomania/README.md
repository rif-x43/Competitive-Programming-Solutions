# A. Quintomania
 
| Field | Value |
|---|---|
| **Contest** | [2036](https://codeforces.com/contest/2036) |
| **Problem** | [2036A — Quintomania](https://codeforces.com/contest/2036/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Boris Notkin composes melodies. He represents them as a sequence of notes, where each note is encoded as an integer from `0` to `127` inclusive. The interval between two notes `a` and `b` is equal to `|a - b|` semitones.

Boris considers a melody *perfect* if the interval between each two adjacent notes is either `5` semitones or `7` semitones.

After composing his latest melodies, he enthusiastically shows you his collection of works. Help Boris Notkin understand whether his melodies are *perfect*.

## Input

The first line contains an integer `t` (`1 ≤ t ≤ 1000`) — the number of melodies.

Each melody is described by two lines. 

The first line contains an integer `n` (`2 ≤ n ≤ 50`) — the number of notes in the melody.

The second line contains `n` integers `a₁, a₂, …, aₙ` (`0 ≤ aᵢ ≤ 127`) — the notes of the melody.

## Output

For each melody, output "`YES`", if it is *perfect*; otherwise, output "`NO`".

You can output the answer in any case (upper or lower). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive responses.

## Examples

**Example:**

```
8
2
114 109
2
17 10
3
76 83 88
8
38 45 38 80 85 92 99 106
5
63 58 65 58 65
8
117 124 48 53 48 43 54 49
5
95 102 107 114 121
10
72 77 82 75 70 75 68 75 68 75
```

**Output:**

```
YES
YES
YES
NO
YES
NO
YES
YES

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2036/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
