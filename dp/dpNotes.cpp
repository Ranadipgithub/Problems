// Identification Of Dp: 
// 1. Choices with 2 recursive calls(Recursion with overlapping)
// 2. Ask for optimal solution(min, max, largest)
// Recursion -> memoization -> Top-down 
// Problems
// 1. 0-1 Khapsack
//// i. Subset Sum
//// ii. Equal Sum Partition
//// iii. Count of Subset Sum
//// iv. Minimum Subset Sum Difference
//// v. Target sum
//// vi. No of subsests 
// 2. Unbounded knapsack
// 3. Fibonacci
// 4. LCS
// 5. LIS
// 6. Kadane's Algorithm
// 7. Matrix Chain Multiplication
// 8. DP on trees
// 9. DP on grids
// 10. DP on others


// 1. Khapsack
// Fractional Knapsack: Items can be divided (i.e., you can take fractions of items).
// 0-1 Knapsack: Items cannot be divided (either take the whole item or leave it).
// Unbounded Knapsack: Similar to 0/1 Knapsack, but unlimited copies of each item are available.

// Given N items where each item has some weight and profit associated with it and also given a bag with capacity W,
// [i.e., the bag can hold at most W weight in it]. The task is to put the items into the bag such that the sum of 
// profits associated with them is the maximum possible. 

// Note: The constraint here is we can either put an item completely into the bag or cannot put it at all [It is not
// possible to put a part of an item into the bag].

// Input: N = 3, W = 4, profit[] = {1, 2, 3}, weight[] = {4, 5, 1}
// Output: 3
// Explanation: There are two items which have weight less than or equal to 4. If we select the item with weight 4, 
//the possible profit is 1. And if we select the item with weight 1, the possible profit is 3. So the maximum 
// possible profit is 3. Note that we cannot put both the items with weight 4 and 1 together as the capacity of the 
//bag is 4.


// Input: N = 3, W = 3, profit[] = {1, 2, 3}, weight[] = {4, 5, 6}
// Output: 0

// 0-1 Knapsack
// Input: W = 4, val[] = {1, 2, 3}, weight[] = {4, 5, 1}
// Here we have to find maxProfit that is we need optimal => 1st condition for dp
// We have to choose the item either 0 or 1 => 2nd condition for dp

// Recursive Solution
// For base condition think of smallest valid input for the problem the smallest valid input is n == 0 or weight == 0
// Now think what will be the ans for this base condition for the problem if the weight is 0 then maxProfit will be 0
// Therefore the base condition is when 
// if(n == 0 || w == 0) return 0;
// for each item if the weight of the item is less than the weight of the bag then we can either take the item or not
// take it but if the weight of the item is greater than the wright of the bag when we will surely not take it

#include<bits/stdc++.h>
using namespace std;
int knapsack(vector<int> weight, vector<int> val, int n, int w){
    if(n == 0 || w ==0) return 0;
    if(weight[n-1] > w) return knapsack(weight, val, n-1, w);
    return max(val[n-1] + knapsack(weight, val, n-1, w-weight[n-1]), knapsack(weight, val, n-1, w));
}

