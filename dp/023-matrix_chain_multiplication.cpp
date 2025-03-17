// MCM
// Printing mcm
// evaluate expression to true/ boolean paranthesization
// min/max value of an expression
// Scrambled string
// palindrome partitioning
// egg dropping 

// Identification of MCM:
// In these types of problem we basically need to take two pointer i and j and we need to break the array/ string around k such that i<=k<j, now we need to do function call on i to k and k+1 to j and then combine the result of these two calls. Now move k from i to j and do the same thing. We will get temp ans from these steps and now we need to make a function that will calculate the final answer.

// To find base condition think of smallest valid input or think of invalid input.

// Basic format

// int solve(vector<int> &arr, int i, int j){
//     if(i>j) return 0; // base condition
//     for(int k = i;k<j;k++){
//         int temp_ans = solve(arr, i, k) + solve(arr, k+1, j) + cost_of_multiplication;
//         ans = func(ans, temp_ans);
//     }
//     return ans;
// }