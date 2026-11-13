# 1668. Building Teams

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1668 — Building Teams](https://cses.fi/problemset/task/1668/) |
| **Category** | Graph Algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++20) |
| **Runtime** | 2026-10-13 05:37:46 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/19056767/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

There are $n$ pupils in Uolevi's class, and $m$ friendships between them. Your task is to divide the pupils into two teams in such a way that no two pupils in a team are friends. You can freely choose the sizes of the teams.

## Input

The first input line has two integers $n$ and $m$: the number of pupils and friendships. The pupils are numbered $1,2,\dots,n$.

Then, there are $m$ lines describing the friendships. Each line has two integers $a$ and $b$: pupils $a$ and $b$ are friends.

Every friendship is between two different pupils. You can assume that there is at most one friendship between any two pupils.

## Output

Print an example of how to build the teams. For each pupil, print "1" or "2" depending on to which team the pupil will be assigned. You can print any valid team.

If there are no solutions, print "IMPOSSIBLE".

## Constraints

- $1 \le n \le 10^5$
- $1 \le m \le 2 \cdot 10^5$
- $1 \le a,b \le n$

## Examples

**Example:**

**Input:**
```
5 3
1 2
1 3
4 5
```

**Output:**
```
1 2 2 1 2
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1668/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
