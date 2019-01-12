
## PROBLEM STATEMENT
Today's morning was exceptionally hectic. Rakul Preet decided to go outside and noticed a weird power bestowed upon her by the wizard. Further, since Rakul Preet like prime numbers which dosen't go well with the wizard, there are two stones on that mountain at certain heights.
</br> </br>
Initially, she is at height ℎ and has weight 𝑤. Each second the following sequence of events happens: her weight increases by 𝑖, where 𝑖 — is the current height at which she is. If she encounters a stone (if it's present at the current height), then she has to move one meter down. If she reaches height zero, it stops.
</br></br>
There are exactly two stones on the mountain. First stone has weight 𝑢1 and is located at height 𝑑1, the second one — 𝑢2 and 𝑑2 respectively. When the she encounters either of two stones, it loses weight equal to the weight of that stone. If after this she has negative weight, then her weight becomes zero, but then she continues moving as before.
</br></br>
Find her weight when she stops moving, that is, she reaches height 0.
</br>
## INPUT

First line contains two integers 𝑤 and ℎ — her initial weight and height at which she is (0 ≤ 𝑤 ≤ 100; 1 ≤ ℎ ≤ 100000).
</br></br>
Second line contains two integers 𝑢1 and 𝑑1 — weight and height of the first stone (0 ≤ 𝑢1 ≤ 100; 1 ≤ 𝑑1 ≤ ℎ).
</br></br>
Third line contains two integers 𝑢2 and 𝑑2 — weight and height of the second stone (0 ≤ 𝑢2 ≤ 100; 1 ≤ 𝑑2 ≤ ℎ; 𝑑1 ≠ 𝑑2). Notice that stones always have different heights.
</br></br>
## OUTPUT

Output a single integer — her weight after she reaches height 0.
</br>
## SAMPLE TEST CASE

### Input:
4 3</br>
1 1</br>
1 2</br>

### Output:
8</br>
