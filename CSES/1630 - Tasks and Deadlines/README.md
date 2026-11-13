# 1630. Tasks and Deadlines

| Field | Value |
|---|---|
| **Platform** | 🟦 CSES |
| **Problem** | [1630 — Tasks and Deadlines](https://cses.fi/problemset/task/1630/) |
| **Category** | Sorting and Searching |
| **Verdict** | ✅ Accepted |
| **Language** | C++ (C++20) |
| **Runtime** | 2026-10-10 10:36:21 +0300 |
| **Submission** | [View Submission](https://cses.fi/problemset/result/19028010/) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1.00 s | 512 MB |

---

## Problem Statement

You have to process $n$ tasks. Each task has a duration and a deadline, and you will process the tasks in some order one after another. Your reward for a task is $d-f$ where $d$ is its deadline and $f$ is your finishing time. (The starting time is $0$, and you have to process all tasks even if a task would yield negative reward.)

What is your maximum reward if you act optimally?

## Input

The first input line has an integer $n$: the number of tasks.

After this, there are $n$ lines that describe the tasks. Each line has two integers $a$ and $d$: the duration and deadline of the task.

## Output

Print one integer: the maximum reward.

## Constraints

- $1 \le n \le 2 \cdot 10^5$
- $1 \le a,d \le 10^6$

## Examples

**Example:**

**Input:**
```
3
6 10
8 15
5 12
```

**Output:**
```
2
```

---

> 🔗 [View on CSES](https://cses.fi/problemset/task/1630/)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
