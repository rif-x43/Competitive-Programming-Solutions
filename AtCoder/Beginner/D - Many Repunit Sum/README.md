# D - Many Repunit Sum

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC444](https://atcoder.jp/contests/abc444) |
| **Problem** | [D - Many Repunit Sum](https://atcoder.jp/contests/abc444/tasks/abc444_d) |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 15.2.0) |
| **Runtime** | 53 ms |
| **Memory** | 6188 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc444/submissions/73097599) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

For  i=1,2,…,N , let  Bᵢ  denote the integer formed by concatenating  Aᵢ  ones.

More formally,  Bᵢ=Σⱼ₌₀A_ⁱ⁻¹10ʲ .

Find  Σᵢ₌₁NBᵢ .

### Constraints

- 1 ≤ N ≤ 2 × 10⁵

- 1 ≤ Aᵢ ≤ 2 × 10⁵

- All input values are integers.

## Input

The input is given from Standard Input in the following format:

```
N  
A_1 A_2 \ldots A_N
```

## Output

Output the answer in one line.

## Examples

**Sample Input 1:**

```
4
3 3 3 3
```

**Sample Output 1:**

```
444
```

**Sample Input 2:**

```
3
30 10 20
```

**Sample Output 2:**

```
111111111122222222223333333333
```

**Sample Input 3:**

```
10
1 2 3 4 5 6 7 8 9 10
```

**Sample Output 3:**

```
1234567900
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc444/tasks/abc444_d)

---
*Synced by [CodeSync Pro](https://github.com/Pri8899/CodeSync-Pro-Extension)*
