# [Greed Island (Easy)](https://toph.co/p/greed-island-easy-version)

| Field | Value |
|---|---|
| **Platform** | 🟢 Toph |
| **Problem** | [Greed Island (Easy)](https://toph.co/p/greed-island-easy-version) |
| **Contest** | N/A |
| **Category** | Practice |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 GCC 13.2 |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Submission** | [2017113](https://toph.co/s/2017113) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1s | 512 MB |

---

## Problem Statement

**This is the easy version of the problem. There are differences between easy and hard version regarding constraints and problem statement. Read the statement carefully.**

Sajid Abdullah and Nirjoy Debnath are bored in a railway station. So they attempt to play the "Greed Island" game, in which they are handed an integer number line.

They are standing at a certain position x on this number line, and to win the game, they must move from their current position to a specified target position y.

They do not know how many moves are necessary to get to the target position. It is guaranteed that, x<y.

With just three magic cards, they can move from one place to another. Each card can be used **unlimited times**.

1. The Shadow card will transport them from x to (x+3)-th position in one operation.
2. The Light card will transport them from x to (x-2)-th position in one operation.
3. The Mist card will transport them from x to (x-1)-th position in one operation.

Print the minimum number of moves they need to reach the specific target position.

## Input

The first line contains one integer T (1 ≤ T ≤ 10), the number of test cases.

The next T lines contains two integers: x (-10⁹ ≤ x ≤ 10⁹), the position where Sajid and Nirjoy are currently standing, and y (-10⁹ ≤ y ≤ 10⁹), the target position they must reach to win the game.

## Output

Print the minimum number of moves they need to reach the specific target position.

## Sample Tests

**Sample Input:**

```
1
1 4
```

**Sample Output:**

```
1
```

---
*Synced automatically by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
