# Google Kick Start Archive — Round A 2020 Problems

Source: <https://zibada.guru/gcj/ks2020a/problems/>

## Overview

Thank you for participating in Kick Start 2020 Round A. This was our first round with the new format: four problems instead of three, and no hidden test sets.

**Problems:** [A. Allocation](#a-allocation) ⸱ [B. Plates](#b-plates) ⸱ [C. Workout](#c-workout) ⸱ [D. Bundling](#d-bundling)

### Credits

**Written by / prepared by:**

| Problem | Written by | Prepared by |
|---|---|---|
| Allocation | Vikash Dubey | Swapnil Gupta |
| Plates | Ben Jacobson | Wajeb Saab |
| Workout | Yossi Matsumoto | Wajeb Saab |
| Bundling | Bartosz Kostka | Devika Krishnadas and Kevin Tran |

Solutions, other problem preparation, reviews and contest monitoring by Amr Aboelkher, Ankit Goyal, Anson Ho, Arun Yadav, Bohdan Pryshchenko, Diksha Saxena, Ganesh Kaname, Jared Gillespie, Joe Simons, Kevin Tran, Krists Boitmanis, Lalit Kundu, Lizzie Sapiro, Medo Ali, Ruoyu Zhang, Raihat Zaman Neloy, Shantam Agarwal, Swapnil Gupta, Tejendra Patel, Truman Wang, and Wajeb Saab.

**Analysis authors:**

| Problem | Analysis author |
|---|---|
| Allocation | Shimi Zhang |
| Plates | Akul Siddalingaswamy |
| Workout | Akul Siddalingaswamy |
| Bundling | Swapnil Gupta |

---

## A. Allocation

### Problem

There are `N` houses for sale. The `i`-th house costs `A_i` dollars to buy. You have a budget of `B` dollars to spend.

What is the maximum number of houses you can buy?

### Input

The first line of the input gives the number of test cases, `T`. `T` test cases follow. Each test case begins with a single line containing the two integers `N` and `B`. The second line contains `N` integers. The `i`-th integer is `A_i`, the cost of the `i`-th house.

### Output

For each test case, output one line containing `Case #x: y`, where `x` is the test case number (starting from 1) and `y` is the maximum number of houses you can buy.

### Limits

- Time limit: 15 seconds.
- Memory limit: 1 GB.
- `1 ≤ T ≤ 100`.
- `1 ≤ B ≤ 10^5`.
- `1 ≤ A_i ≤ 1000`, for all `i`.

**Test Set 1:** `1 ≤ N ≤ 100`.

**Test Set 2:** `1 ≤ N ≤ 10^5`.

### Sample

**Sample Input**

```
3
4 100
20 90 40 90
4 50
30 30 10 10
3 300
999 999 999
```

**Sample Output**

```
Case #1: 2
Case #2: 3
Case #3: 0
```

- In Sample Case #1, you have a budget of 100 dollars. You can buy the 1st and 3rd houses for 20 + 40 = 60 dollars.
- In Sample Case #2, you have a budget of 50 dollars. You can buy the 1st, 3rd and 4th houses for 30 + 10 + 10 = 50 dollars.
- In Sample Case #3, you have a budget of 300 dollars. You cannot buy any houses (so the answer is 0).

> **Note:** Unlike previous editions, in Kick Start 2020, all test sets are visible verdict test sets, meaning you receive instant feedback upon submission.

---

## B. Plates

### Problem

Dr. Patel has `N` stacks of plates. Each stack contains `K` plates. Each plate has a positive beauty value, describing how beautiful it looks.

Dr. Patel would like to take exactly `P` plates to use for dinner tonight. If he would like to take a plate in a stack, he must also take all of the plates above it in that stack as well.

Help Dr. Patel pick the `P` plates that would maximize the total sum of beauty values.

### Input

The first line of the input gives the number of test cases, `T`. `T` test cases follow. Each test case begins with a line containing the three integers `N`, `K` and `P`. Then, `N` lines follow. The `i`-th line contains `K` integers, describing the beauty values of each stack of plates from top to bottom.

### Output

For each test case, output one line containing `Case #x: y`, where `x` is the test case number (starting from 1) and `y` is the maximum total sum of beauty values that Dr. Patel could pick.

### Limits

- Time limit: 20 seconds.
- Memory limit: 1 GB.
- `1 ≤ T ≤ 100`.
- `1 ≤ K ≤ 30`.
- `1 ≤ P ≤ N * K`.
- The beauty values are between 1 and 100, inclusive.

**Test Set 1:** `1 ≤ N ≤ 3`.

**Test Set 2:** `1 ≤ N ≤ 50`.

### Sample

**Sample Input**

```
2
2 4 5
10 10 100 30
80 50 10 50
3 2 3
80 80
15 50
20 10
```

**Sample Output**

```
Case #1: 250
Case #2: 180
```

In Sample Case #1, Dr. Patel needs to pick `P = 5` plates:

- He can pick the top 3 plates from the first stack (10 + 10 + 100 = 120).
- He can pick the top 2 plates from the second stack (80 + 50 = 130).
- In total, the sum of beauty values is 250.

In Sample Case #2, Dr. Patel needs to pick `P = 3` plates:

- He can pick the top 2 plates from the first stack (80 + 80 = 160).
- He can pick no plates from the second stack.
- He can pick the top plate from the third stack (20).
- In total, the sum of beauty values is 180.

> **Note:** Unlike previous editions, in Kick Start 2020, all test sets are visible verdict test sets, meaning you receive instant feedback upon submission.

---

## C. Workout

### Problem

Tambourine has prepared a fitness program so that she can become more fit! The program is made of `N` sessions. During the `i`-th session, Tambourine will exercise for `M_i` minutes. The number of minutes she exercises in each session is strictly increasing.

The difficulty of her fitness program is equal to the maximum difference in the number of minutes between any two consecutive training sessions.

To make her program less difficult, Tambourine has decided to add up to `K` additional training sessions to her fitness program. She can add these sessions anywhere in her fitness program, and exercise any positive integer number of minutes in each of them. After the additional training sessions are added, the number of minutes she exercises in each session must still be strictly increasing. What is the minimum difficulty possible?

### Input

The first line of the input gives the number of test cases, `T`. `T` test cases follow. Each test case begins with a line containing the two integers `N` and `K`. The second line contains `N` integers, the `i`-th of these is `M_i`, the number of minutes she will exercise in the `i`-th session.

### Output

For each test case, output one line containing `Case #x: y`, where `x` is the test case number (starting from 1) and `y` is the minimum difficulty possible after up to `K` additional training sessions are added.

### Limits

- Time limit: 20 seconds.
- Memory limit: 1 GB.
- `1 ≤ T ≤ 100`.
- For at most 10 test cases, `2 ≤ N ≤ 10^5`.
- For all other test cases, `2 ≤ N ≤ 300`.
- `1 ≤ M_i ≤ 10^9`.
- `M_i < M_{i+1}` for all `i`.

**Test Set 1:** `K = 1`.

**Test Set 2:** `1 ≤ K ≤ 10^5`.

### Sample

> Note: there are additional samples that are not run on submissions, shown below.

**Sample Input**

```
1
3 1
100 200 230
```

**Sample Output**

```
Case #1: 50
```

In Sample Case #1: Tambourine can add up to one session. The added sessions are marked in bold: **100 <ins>150</ins> 200 230**. The difficulty is now 50.

#### Additional Sample — Test Set 2

The following additional sample fits the limits of Test Set 2. It will not be run against your submitted solutions.

**Sample Input**

```
3
5 2
10 13 15 16 17
5 6
9 10 20 26 30
8 3
1 2 3 4 5 6 7 10
```

**Sample Output**

```
Case #1: 2
Case #2: 3
Case #3: 1
```

- In Sample Case #1: Tambourine can add up to two sessions. The added sessions are marked in bold: 10 **12** 13 14 15 16 17. The difficulty is now 2.
- In Sample Case #2: Tambourine can add up to six sessions. The added sessions are marked in bold: 9 10 **12 14 16 18** 20 **23** 26 **29** 30. The difficulty is now 3.
- In Sample Case #3: Tambourine can add up to three sessions. The added sessions are marked in bold: 1 2 3 4 5 6 7 **8 9** 10. The difficulty is now 1. Note that Tambourine only added two sessions.

> **Note:** Unlike previous editions, in Kick Start 2020, all test sets are visible verdict test sets, meaning you receive instant feedback upon submission.

---

## D. Bundling

### Problem

Pip has `N` strings. Each string consists only of letters from A to Z. Pip would like to bundle their strings into groups of size `K`. Each string must belong to exactly one group.

The score of a group is equal to the length of the longest prefix shared by all the strings in that group. For example:

- The group `{RAINBOW, RANK, RANDOM, RANK}` has a score of 2 (the longest prefix is `'RA'`).
- The group `{FIRE, FIREBALL, FIREFIGHTER}` has a score of 4 (the longest prefix is `'FIRE'`).
- The group `{ALLOCATION, PLATE, WORKOUT, BUNDLING}` has a score of 0 (the longest prefix is `''`).

Please help Pip bundle their strings into groups of size `K`, such that the sum of scores of the groups is maximized.

### Input

The first line of the input gives the number of test cases, `T`. `T` test cases follow. Each test case begins with a line containing the two integers `N` and `K`. Then, `N` lines follow, each containing one of Pip's strings.

### Output

For each test case, output one line containing `Case #x: y`, where `x` is the test case number (starting from 1) and `y` is the maximum sum of scores possible.

### Limits

- Time limit: 20 seconds.
- Memory limit: 1 GB.
- `1 ≤ T ≤ 100`.
- `2 ≤ N ≤ 10^5`.
- `2 ≤ K ≤ N`.
- `K` divides `N`.
- Each of Pip's strings contains at least one character.
- Each string consists only of letters from A to Z.

**Test Set 1:** Each of Pip's strings contains at most 5 characters.

**Test Set 2:** The total number of characters in Pip's strings across all test cases is at most `2 × 10^6`.

### Sample

> Note: there are additional samples that are not run on submissions, shown below.

**Sample Input**

```
2
2 2
KICK
START
8 2
G
G
GO
GO
GOO
GOO
GOOO
GOOO
```

**Sample Output**

```
Case #1: 0
Case #2: 10
```

In Sample Case #1, Pip can achieve a total score of 0 by making the groups:

- `{KICK, START}`, with a score of 0.

In Sample Case #2, Pip can achieve a total score of 10 by making the groups:

- `{G, G}`, with a score of 1.
- `{GO, GO}`, with a score of 2.
- `{GOO, GOO}`, with a score of 3.
- `{GOOO, GOOO}`, with a score of 4.

#### Additional Sample — Test Set 2

The following additional sample fits the limits of Test Set 2. It will not be run against your submitted solutions.

**Sample Input**

```
1
6 3
RAINBOW
FIREBALL
RANK
RANDOM
FIREWALL
FIREFIGHTER
```

**Sample Output**

```
Case #1: 6
```

In Sample Case #1, Pip can achieve a total score of 6 by making the groups:

- `{RAINBOW, RANK, RANDOM}`, with a score of 2.
- `{FIREBALL, FIREWALL, FIREFIGHTER}`, with a score of 4.

> **Note:** Unlike previous editions, in Kick Start 2020, all test sets are visible verdict test sets, meaning you receive instant feedback upon submission.

---

## Analysis

### Analysis — A. Allocation

We want to buy as many houses as possible. Intuitively, we can keep buying the cheapest house. The rationale is to save money at each step so we could buy more in the end. One way to implement this strategy is to sort all the houses by prices from low to high and then buy houses one by one until we run out of money.

The sorting part has `O(N log N)` time complexity and the processing part has `O(N)` time complexity. Using counting sort could reduce the sorting complexity to `O(N)` since the range of the prices is `[1, 1000]`. The overall time complexity is `O(N)`.

Let's prove the correctness of this greedy algorithm. Let the solution produced by the greedy algorithm be `A = {a1, a2, ..., ak}` and an optimal solution `O = {o1, o2, ..., om}`.

If `O` and `A` are the same, we are done with the proof. Let's assume that there is at least one element `oj` in `O` that is not present in `A`. Because we always take the smallest element from the original set, we know that any element that is not in `A` is greater than or equal to any `ai` in `A`. We could replace `oj` with the absent element in `A` without worsening the solution, because there will always be an element in `A` that is not in `O`. We then increased the number of elements in common between `A` and `O`, hence we can repeat this operation only a finite number of times. We could repeat this process until all the elements in `O` are elements in `A`. Therefore, `A` is as good as any optimal solution.

### Analysis — B. Plates

From the constraints, we can see that regardless of the test set, `1 ≤ K ≤ 100`, i.e., `1 ≤ P ≤ 100*N`.

#### Test set 1

For this test set, we see that `1 ≤ N ≤ 3`. So, we can check every possible combination of taken plates across all stacks and output the maximum sum. For example, if `N = 3` and for any given values of `K` and `P`, generate all possible triples `(S1, S2, S3)` such that `S1+S2+S3 = P` and `0 ≤ Si ≤ K`. Note: `Si` is the number of plates picked from the `i`-th stack.

This can be done via recursion, and the total time complexity is `O(K^N)`, which abides by the time limits.

#### Test set 2

The solution we had for test set 1 doesn't scale given that `N` now is at most 100. In order to tackle this test set, we use dynamic programming along with some precomputation.

First, let's consider an intermediate state `dp[i][j]` which denotes the maximum sum that can be obtained using the first `i` stacks when we need to pick `j` plates in total. Therefore, `dp[N][P]` would give us the maximum sum using the first `N` stacks if we need to pick `P` plates in total. In order to compute `dp[][]` efficiently, we need to be able to efficiently answer the question: what is the sum of the first `x` plates from stack `i`? We can precompute this once for all `N` stacks. Let `sum[i][x]` denote the sum of the first `x` plates from stack `i`.

Next, we iterate over the stacks and try to answer the question: what is the maximum sum if we had to pick `j` plates in total using the `i` stacks we've seen so far? This would give us `dp[i][j]`. However, we also need to decide, among those `j` plates, how many come from the `i`-th stack? I.e., let's say we pick `x` plates from the `i`-th stack, then `dp[i][j] = max(dp[i][j], sum[i][x] + dp[i-1][j-x])`. Therefore, in order to pick `j` plates in total from `i` stacks, we can pick anywhere between `[0, 1, ..., j]` plates from the `i`-th stack and `[j, j-1, ..., 0]` plates from the previous `i-1` stacks respectively. Also, we need to do this for all values of `1 ≤ j ≤ P`.

The flow would look like:

```
for i [1, N]:
  for j [0, P]:
    dp[i][j] := 0
    for x [0, min(j, K)]:
      dp[i][j] = max(dp[i][j], sum[i][x] + dp[i-1][j-x])
```

If we observe closely, this is similar to the 0-1 Knapsack Problem with some added complexity. To conclude, the overall time complexity would be `O(N*P*K)`.

### Analysis — C. Workout

#### Test set 1

Since `K=1`, all that we need to do is find the maximum difference and split it into 2 halves. For example, given a sequence `[2, 12, 18]` and `K = 1`, the difficulty is 10, since the maximum difference is in `[2, 12]`. The best way to minimize this is to take the maximum difference and split it in half, giving us the final sequence of `[2, 7, 12, 18]`. The difficulty for this final sequence is now 6. The time complexity is `O(N)`.

#### Test set 2

For this test case, we cannot perform such direct splits because repeatedly splitting the maximum difference into halves is not optimal. For example, given a sequence `[2, 12]` and `K = 2`, splitting into halves will result in `[2, 12] → [2, 7, 12] → [2, 7, 9, 12]`. This way, the difficulty would be 5. However, if we perform `[2, 12] → [2, 5, 12] → [2, 5, 8, 12]`, the difficulty would be 4. This clearly demonstrates that continuous halving of the maximum difference is sub-optimal. So how do we do this?

Consider the `i`-th adjacent pair of training sessions with an initial difference `di`. If we want to insert some number of training sessions in between this pair such that the maximum difference among those is at most a certain value, let's say `d_optimal`, then how many training sessions can be inserted in between? The answer to this is `ceiling(di / d_optimal) - 1`. Let's call that `k'i`. Doing this for all `N-1` adjacent pairs in the given array would give us `k'[1, ..., N-1]`. Let's denote `k'sum = k'1 + k'2 + ... + k'(N-1)`. From the constraints, we can insert at most `K` training sessions. Therefore, we need to make sure `k'sum ≤ K` while minimizing `d_optimal` as much as possible.

If you observe, `d_optimal` can lie anywhere between `[1, max(di)]` (`1 ≤ i ≤ N-1`). Linear search would be to check every value here starting from 1 and output the first value that satisfies the above condition. A quicker way to do this is using binary search. On closer observation, you can see that increasing the value of `d_optimal` decreases the value of `ceiling(di / d_optimal) - 1`, and hence the smaller the value of `k'sum`. Therefore, we can perform a binary search in the range `[1, max(di)]` to find the least value of `d_optimal` that makes `k'sum ≤ K`. That is our answer.

Since `max(di)` could be as much as `10^9`, we might have to search `[1, 10^9]`, making the time complexity of the solution `O(log(10^9) * N)`.

### Analysis — D. Bundling

We need to maximize the sum of scores of each bundle. Let us consider a bundle and say the longest prefix shared by all strings of this bundle is of length `X`. Now each prefix of length from 1 to `X` is shared by all of the strings in this bundle. Consider any prefix among these `X` prefixes: it is counted once in the score of this bundle. Thus the score of a bundle can be defined as the number of prefixes that are shared by all of the strings in this bundle. So, if a prefix is shared by all strings in `Y` bundles, then it will contribute `Y` to the total sum of scores.

Now instead of finding the total score, we find the contribution of each prefix to the total score. So, to maximize the total score, we would want to maximize the contribution of each prefix. Let the contribution of each prefix `PRE` be `contribution(PRE)`. We want to maximize `∑ contribution(PRE)` where `PRE` comprises all possible prefixes of the given strings.

Let us say a prefix `Pi` is a prefix of `S` strings. The maximum number of bundles of size `K` formed by `S` strings is `⌊S / K⌋`. In each of these `⌊S / K⌋` bundles, prefix `Pi` will add to their scores. Thus the maximum value of `contribution(Pi)` can be `⌊S / K⌋`. So a prefix `Pi` which occurs as a prefix of `S` strings will contribute `⌊S / K⌋` to the answer.

Let us see if we can achieve this maximum value for all the prefixes. Consider a prefix `P` of length `L`. It occurs as a prefix in `CNT` number of strings. Now consider there are `C` prefixes of length `L + 1` which contain the prefix `P` as a prefix (`P1, P2, ..., PC`). And we have stored the number of strings these prefixes are part of as `(CNT1, CNT2, ..., CNTC)`.

Let us say we divided the strings which have prefix `Pi` into `⌊CNTi / K⌋` bundles. Now we have `CNTi % K` strings remaining for each prefix that we need to arrange so that they make a bundle. For each of these remaining strings we cannot have a bundle of size `K` which would have a common prefix of length `L + 1`, because we have `CNTi % K` remaining strings for each `Pi`. So, we can make bundles in any order using the remaining strings. Those bundles will still have a prefix of length `L` shared among them. Thus we would be left with `CNT % K` number of strings which are not in any bundle when we consider prefix `P`. We can continue this procedure until we are left with a prefix of length 0. We would be able to bundle all the strings at this point because we would have `N % K` strings remaining, and as specified in the problem, `N` is divisible by `K`.

The problem is now reduced to finding the number of times each prefix occurs in the given strings. Let this number be `COUNT`. We just need to add `⌊COUNT / K⌋` to the answer for each prefix.

#### Test set 1

The length of each string is at most 5. Thus we have a total number of prefixes as `N * 5` and each prefix can be of size at most 5. Store each prefix in a hashmap and increase the count for each prefix. In the end, we just need to add `⌊count(i) / K⌋` for each prefix `i`. The complexity of the solution would be `O(N * 5 * 5)`.

#### Test set 2

Let the sum of the lengths of all strings over all the test cases be `SUM`, which is `10^6`. For the large test set, the length of the string can be very large. So, we can't store all the prefixes in a hashmap. We need to store all the prefixes in an efficient manner along with the number of times they occur in the given strings. We can use a data structure called a **trie**. The insertion cost would be equal to the sum of the lengths of strings over the test cases, which is `O(SUM)`. Then finally, we just need to traverse the trie and, for each prefix, add its contribution to the answer. The time complexity of the solution would be `O(SUM)`.
