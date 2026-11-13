# [Sonar Bangla Express](https://toph.co/p/sonar-bangla-express)

| Field | Value |
|---|---|
| **Platform** | 🟢 Toph |
| **Problem** | [Sonar Bangla Express](https://toph.co/p/sonar-bangla-express) |
| **Contest** | N/A |
| **Category** | Practice |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 GCC 13.2 |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Submission** | [2016617](https://toph.co/s/2016617) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1s | 256 MB |

---

## Problem Statement

Sonar Bangla Express is a premium intercity train of Bangladesh that runs between Dhaka and Chattogram. It offers fast, non-stop travel with AC Class and Non-AC Class Coaches. All seats are reserved, no standing passengers are allowed, and it is known for being comfortable, modern, and time-saving. While traveling from Dhaka to Chattogram, first it picks up passengers from Kamalapur Railway Station and then Biman Bandar Railway Station and drops them off at Chattogram Station. Sonar Bangla Express usually has about 14 coaches, with around 7 Non-AC coaches, 5 AC coaches, and the rest for power and guard purposes, but during busy times it can run with up to 18 coaches depending on demand. Each coach can contain at most 60 passengers.

On December 22, Nayem was traveling from Dhaka to Chattogram and boarded at Biman Bander Railway Station. **That day, he noticed an unusual rule only at the Biman Bandar Railway Station.** Despite having tickets, non-AC coach passengers were allowed to carry up to X kg of luggage, while AC coach passengers could carry up to Y kg. Passengers exceeding the limit had to pay Z taka per kg for the extra weight.

Now you need to calculate the total amount paid by passengers in each coach.

## Input

The first line contains an integer T (1 ≤ T ≤ 10) — the number of test cases.

Each test case consists of the following:

- The first line contains two integers n and m (4 ≤ n, m ≤ 10,n+m≤18) — the number of non-AC and AC coaches.

-The second line contains n strings a₁, a₂, ..., aₙ — the names of the non-AC coaches (1 ≤ |aᵢ| ≤ 4).

-The third line contains m strings b₁, b₂,...,bₘ — the names of the AC coaches (1 ≤ |bᵢ| ≤ 4).

-The fourth line contains three integers X, Y, Z — the luggage limits for non-AC and AC coaches passenger, and the extra charge per kg, respectively (1 ≤ X, Y, Z ≤ 100).

- The fifth line contains an integer q (4 ≤ q ≤ 1080) — the number of passengers.

-Each of the next q lines contains the details of a passenger: a string s, a string x, and an integer y (1 ≤ |x| ≤ 4, 1 ≤ y ≤ 100) — the boarding station, the coach name, and the luggage weight. It is guaranteed that s ∈ { "Kamalapur", "BimanBandar" } and x is a valid coach name from the lists provided above, and all coach names are unique.

## Output

For each test case, print the total amount paid for extra luggage in each coach, sorted by coach name in lexicographically increasing order.

A string a is lexicographically smaller than a string b if at the first position where they differ, a has a smaller character than b.

## Sample Tests

**Sample Input:**

```
1
4 3
KA KHA TA TO
CHA JA NEO
20 30 10
5
Kamalapur KA 21
BimanBandar CHA 35
BimanBandar NEO 32
BimanBandar TO 15
Kamalapur NEO 25
```

**Sample Output:**

```
CHA 50
JA 0
KA 0
KHA 0
NEO 20
TA 0
TO 0
```

---
*Synced automatically by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
