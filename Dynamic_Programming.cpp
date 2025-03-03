// //Nth Fibonacci Number
// #include<iostream>
// #include<vector>
// using namespace std;
// // int fib(int n, vector<int> &dp){
// //     //base case
// //     if(n<=1){
// //         return n;
// //     }
// //     //step 3
// //     if(dp[n] != -1){
// //         return dp[n];
// //     }
// //     //step 2
// //     dp[n] = fib(n-1,dp) + fib(n-2,dp);  
// //     return dp[n];
// // }
// // int main(){  //recusion and memoization
// //     int n;
// //     cin >> n;

// //     //step 1
// //     vector<int> dp(n+1);
// //     for(int i=0; i<=n; i++){
// //         dp[i] = -1;
// //     }
// //     cout<<fib(n,dp)<<endl;
// //     return 0;
// // }

// // //OR   //tablulation
// // int main(){
// //     int n;
// //     cin >> n;
// //     //step 1
// //     vector<int> dp(n+1);
// //     //step 2
// //     dp[1] = 1;
// //     dp[0] = 0;

// //     //step 3
// //     for(int i=2; i<=n; i++){
// //         dp[i] = dp[i-1] + dp[i-2];
// //     }
// //     cout<<dp[n] <<endl;
// // }
// // //Space optimiziation
// // int main(){
// //     int n;
// //     cin>>n;

// //     int prev1 = 1;
// //     int prev2 = 0;

// //     if(n==0){
// //         return prev2;
// //     }
// //     for(int i=2; i<=n; i++){
// //         int curr = prev1 + prev2;
// //         //shift logic
// //         prev2 = prev1;
// //         prev1 = curr;
// //     }
// //     cout<< prev1 << endl;
// //     return 0;
// // }





// //Minimum Cost Climbing Stairs
// // int solve(long long nStairs, int i){
// //     //base case
// //     if(i==nStairs){
// //         return 1;
// //     }
// //     if(i>nStairs){
// //         return 0;
// //     }
// //     return (solve(nStairs, i+1) + solve(nStairs, i+2) % mod);  //mod depent on question
// // }
// // int countDistinctWayToClimbStair(long long nStairs){
// //     int ans = solve(nStairs, 0);
// //     return ans;
// // }
// // //OR
// class Solution{
//     public:
//     int solve(vector<int> &cost, int n){
//         //base case
//         if(n==0){
//             return cost[0];
//         }
//         if(n==1){
//             return cost[1];
//         }
//         int ans = cost[n] + min(solve(cost, n-1), solve(cost, n-2));
//         return ans;
//     }
//     int solve2(vector<int> &cost, int n, vector<int> &dp){
//         //base case
//         if(n==0){
//             return cost[0];
//         }
//         if(n==1){
//             return cost[1];
//         }
//         //step 3
//         if(dp[n] != -1){
//             return dp[n];
//         }
//         //step 2
//         dp[n] = cost[n] + min(solve(cost, n-1,dp), solve(cost, n-2,dp));
//         return dp[n];
//     }
//     int solve3(vector<int> &cost, int n){
//         //step 1 creation of dp array'
//         vector<int> dp(n+1);
//         //step 2 base case analyze
//         dp[0] = cost[0];
//         dp[1] = cost[1];

//         //step 3
//         for(int i=2; i<n; i++){
//             dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
//         }
//         return min(dp[n-1], dp[n-2]);
//     }
//     int solve4(vector<int> &cost, int n){
//         int prev2 = cost[0];
//         int prev1 = cost[1];

//         for(int i=2; i<n; i++){
//             int curr = cost[i] + min(prev1, prev2);
//             prev2 = prev1;
//             prev1 = curr;
//         }
//         return min(prev1, prev2);
//     }
//     int minCostClimbingStairs(vector<int>& cost){
//         // int n = cost.size();
//         // //it can be simplified more -> Homework
//         // int ans = min(solve(cost,n-1), solve(cost, n-2));
//         // return ans;

//         // int n = cost.size();
//         // //step1
//         // vector<int> dp(n+1, -1);
//         // int ans = min(solve2(cost, n-1, dp), solve2(cost, n-2, dp));
//         // return ans;

//         // int n = cost.size();
//         // return solve3(cost, n);

//         int n = cost.size();
//         return solve4(cost, n);
//     }
// };





// //Minimum number of coins
// int solveRec(vector<int> &num, int x){
//     //base case
//     if(x==0){
//         return 0;
//     }
//     if(x<0){
//         return INT_MAX;
//     }
//     int mini = INT_MAX;
//     for(int i=0; i<num.size(); i++){
//         int ans = solveRec(num, x-num[i]);
//         if(ans != INT_MAX){
//             mini = min(mini, 1+ans);
//         }
//     }
//     return mini;
// }
// int solveMem(vector<int> &num, int x, vector<int>& dp){
//     //base case
//     if(x==0){
//         return 0;
//     }
//     if(x<0){
//         return INT_MAX;
//     }
//     if(dp[x] != -1){
//         return dp[x];
//     }
//     int mini = INT_MAX;
//     for(int i=0; i<num.size(); i++){
//         int ans = solveRec(num, x-num[i]);
//         if(ans != INT_MAX){
//             mini = min(mini, 1+ans);
//         }
//     }
//     dp[x] = mini;
//     return mini;
// }
// int solveTab(vector<int> &num, int x){
//     vector<int> dp(x+1, INT_MAX);
//     dp[0] = 0;

//     for(int i=1; i<=x; i++){
//         // i am trying to solve for every amount figure from 1 to x
//         for(int j=0; j<num.size(); j++){
//             if(i-num[j] >= 0 && dp[i-num[j]] != INT_MAX){
//                 dp[i] = min(dp[i], 1+dp[i-num[j]]);
//             }
//         }
//     }
//     if(dp[x] == INT_MAX){
//         return -1;
//     }
//     return dp[x];
// }
// int minimumElements(vector<int> &num, int x){
//     // int ans = solveRec(num, x);   //throwing tle
//     // if(ans == INT_MAX){
//     //     return -1;
//     // }
//     // return ans;

//     // vector<int> dp(x+1, -1);
//     // int ans = solveMem(num, x, dp);
//     // if(ans == INT_MAX){
//     //     return -1;
//     // }
//     // else{
//     //     return ans;
//     // }

//     return solveTab(num, x);
// }





// //Maximum Sum of Non-Adjacent Elements
// int solve(vector<int>& nums, int n){
//     //base case
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return nums[0];
//     }
//     int incl = solve(nums, n-2) + nums[n];
//     int excl = solve(nums, n-1) + 0;
//     return max(incl, excl);
// }
// int solveMem(vector<int>& nums, int n, vector<int> &dp){
//     //base case
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return nums[0];
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     int incl = solveMem(nums, n-2) + nums[n];
//     int excl = solveMem(nums, n-1) + 0;

//     dp[n] = max(incl, excl);
//     return dp[n];
// }
// int solveTab(vector<int> &nums){
//     int n = nums.size();
//     vector<int> dp(n,0);

//     dp[0] = nums[0];

//     for(int i=1; i<n; i++){
//         int incl = dp[i-2] + nums[i];
//         int excl = dp[i-1] + 0;
//         dp[i] = max(incl, excl);
//     }
//     return dp[n-1];
// }
// int solveTab(vector<int> &nums){   //space optimization
//     int n = nums.size();

//     int prev2 = 0;
//     int prev1 = nums[0];

//     for(int i=1; i<n; i++){
//         int incl = prev2 + nums[i];
//         int excl = prev1 + 0;

//         int ans = max(incl, excl);
//         prev2 = prev1;
//         prev1 = ans;
//     }
//     return prev1;
// }
// int maximumNonAdjacentSum(vector<int> &nums){
//     // int n = nums.size();
//     // int ans = solve(nums,n-1);
//     // return ans;

//     // int n = nums.size();
//     // vector<int> dp(n, -1);
//     // return solveMem(nums, n-1, dp);

//     return solveTab(nums);
// }





// //House Robbery Problem
// long long int solveTab(vector<int> &nums){   //space optimization
//     long long int n = nums.size();

//     long long int prev2 = 0;
//     long long int prev1 = nums[0];

//     for(int i=1; i<n; i++){
//         long long int incl = prev2 + nums[i];
//         long long int excl = prev1 + 0;

//         long long int ans = max(incl, excl);
//         prev2 = prev1;
//         prev1 = ans;
//     }
//     return prev1;
// }
// long long int houseRobber(vector<int>& valueInHouse){
//     int n = valueInHouse.size();

//     if(n==1){
//         return valueInHouse[0];
//     }

//     vector<int> first, second;
//     for(int i=0; i<n; i++){
//         if(i!=n-1){
//             first.push_back(valueInHouse[i]);
//         }
//         if(i!=0){
//             second.push_back(valueInHouse[i]);
//         }
//     }
//     return max(solve(first), solve(second));
// }






// //Cut Rod into Segments of X, Y, Z
// #include<limits.h>
// int solve(int n, int x, int y, int z){
//     //base case
//     if(n==0){
//         return 0;
//     }

//     if(n<0){
//         return INT_MIN;
//     }

//     int a = solve(n-x, x, y, z) + 1;
//     int b = solve(n-y, x, y, z) + 1;
//     int c = solve(n-z, x, y, z) + 1;

//     int ans = max(a, max(b,c));
//     return ans;
// }
// int solveMem(int n, int x, int y, int z, vector<int>& dp){
//     //base case
//     if(n==0){
//         return 0;
//     }

//     if(n<0){
//         return INT_MIN;
//     }

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     int a = solve(n-x, x, y, z, dp) + 1;
//     int b = solve(n-y, x, y, z, dp) + 1;
//     int c = solve(n-z, x, y, z, dp) + 1;

//     dp[n] = max(a, max(b,c));
//     return dp[n];
// }
// int solveTab(int n, int x, int y, int z){
//     vector<int> dp(n+1, -1);
//     dp[0] = 0;

//     for(int i=1; i<=n; i++){
//         if(i-x >= 0 && dp[i-x] != -1){
//             dp[i] = max(dp[i], dp[i-x] + 1);
//         }
//         if(i-y >= 0 && dp[i-y] != -1){
//             dp[i] = max(dp[i], dp[i-y] + 1);
//         }
//         if(i-z >= 0 && dp[i-z] != -1){
//             dp[i] = max(dp[i], dp[i-z] + 1);
//         }
//     }
//     if(dp[n] < 0){
//         return 0;
//     }
//     else{
//         return dp[n];
//     }
// }
// int cutSegments(int n, int x, int y, int z){
//     // int ans = solve(n, x, y, z);
//     // if(ans<0){
//     //     return 0;
//     // }
//     // else{
//     //     return ans;
//     // }

//     // vector<int> dp(n+1, -1);
//     // int ans = solveMem(n, x, y, z, dp);
//     // if(ans < 0){
//     //     return 0;
//     // }
//     // else{
//     //     return ans;
//     // }

//     return solveTab(n, x, y, z);
// }




// //Count derangements
// #define MOD 100000007   //thinks about it
// #include<vector>
// long long int countDerangements(int n){  //Recursive approach
//     //base case
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     int ans = (((n-1)%MOD) * ((countDerangements(n-1)%MOD) + (countDerangements(n-2)%MOD)) )%MOD;
//     return ans;
// }
// long long int solveMem(int n, vector<long long int>& dp){
//     //base case
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     dp[n] = (((n-1)%MOD) * ((countDerangements(n-1)%MOD) + (countDerangements(n-2)%MOD)) )%MOD;
//     return dp[n];
// }
// long long int solveTab(int n){
//     vector<long long int> dp(n+1, 0);
//     dp[1] = 0;
//     dp[2] = 1;

//     for(int i=3; i<=n; i++){
//         long long int first = dp[i-1] % MOD;
//         long long int second = dp[i-2] % MOD;
//         long long int sum = (first+second)%MOD;

//         long long int ans = ((i-1)*sum)%MOD;
//         dp[i] = ans;
//     }
//     return dp[n];
// }
// long long int solveTab(int n){
//     long long int prev2 = 0;
//     long long int prev1 = 1;

//     for(int i=3; i<=n; i++){
//         long long int first = prev1 % MOD;
//         long long int second = prev2 % MOD;
//         long long int sum = (first+second)%MOD;

//         long long int ans = ((i-1)*sum)%MOD;
//         prev2 = prev1;
//         prev1 = ans;
//     }
//     return prev1;
// }
// long long int countDerangements(int n){
//     // vector<long long int>& dp(n+1, -1);
//     // return solveMem(n, dp);
//     return solveTab(n);
// }





// //Painting fence algorithm
// //Ninja And The Fence
// #define MOD 100000007
// int add(int a, int b){   //Recursive approach
//     return (a%MOD + b%MOD)%MOD;
// }
// int mul(int a, int b){
//     return ((a%MOD)* 1LL *(b%MOD))%MOD;
// }
// int solve(int n, int k){
//     //base case
//     if(n==1){
//         return k;
//     }
//     if(n==2){
//         return add(k, mul(k, k-1));
//     }
//     int ans = add(mul(solve(n-2, k), k-1), mul(solve(n-1, k), k-1));
//     return ans;
// }
// int numberofWays(int n, int k){
//     return solve(n,k);
// }
// int solveMem(int n, int k, vector<int>& dp){
//     //base case
//     if(n==1){
//         return k;
//     }
//     if(n==2){
//         return add(k, mul(k, k-1));
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     dp[n] = add(mul(solve(n-2, k), k-1), mul(solve(n-1, k), k-1));
//     return dp[n];
// }
// int solveTab(int n, int k){
//     vector<int> dp(n+1, 0);
//     dp[1] = k;
//     dp[2] = add(k, mul(k, k-1));

//     for(int i=3; i<=n; i++){
//         dp[i] = add(mul(dp[i-2], k-1), mul(dp[i-1], k-1));
//     }
//     return dp[n];
// }
// int solveTab(int n, int k){
//     int prev2 = k;
//     int prev1 = add(k, mul(k, k-1));

//     for(int i=3; i<=n; i++){
//         int ans = add(mul(prev2, k-1), mul(prev, k-1));
//         prev2 = prev1;
//         prev1 = ans;
//     }
//     return ;
// }
// int numberofWays(int n, int k){
//     // vector<int> dp(n+1, -1);
//     // solveMem(n, k, dp);

//     return solveTab(n,k);
// }




// // 0/1 KnapSack Problem   2-D concept
// int solve(vector<int>& weight, vector<int>& value, int index, int capacity){
//     //base case
//     //if only 1 item to steal, then just compare its weight with the knapsack capacity
//     if(index == 0){
//         if(weight[0] <= capacity){
//             return value[0];
//         }
//         else{
//             return 0;
//         }
//     }
//     int include = 0;
//     if(weight[index] <= capacity){
//         include = value[index] + solve(weight, value, index-1; capacity-weight[index]);
//     }
//     int exclude = 0 + solve(weight, value, index-1, capacity);
//     int ans = max(exclude, include);
//     return ans;
// }
// int solveMem(vector<int>& weight, vector<int>& value, int index, int capacity, vector<vector<int> > dp){
//     //base case
//     //if only 1 item to steal, then just compare its weight with the knapsack capacity
//     if(index == 0){
//         if(weight[0] <= capacity){
//             return value[0];
//         }
//         else{
//             return 0;
//         }
//     }
//     if(dp[index][capacity] != -1){
//         return dp[index][capacity];
//     }

//     int include = 0;
//     if(weight[index] <= capacity){
//         include = value[index] + solve(weight, value, index-1; capacity-weight[index], dp);
//     }
//     int exclude = 0 + solve(weight, value, index-1, capacity,dp);
    
//     dp[index][capacity] = max(exclude, include);
//     return dp[index][capacity];
// }
// int solveTab(vector<int>& weight, vector<int>& value, int n, int capacity){
//     //step1:
//     vector<vector<int> > dp(n, vector<int>(capacity+1, 0));

//     //step2: analyse base case
//     for(int w = weight[0]; w<= capacity; w++){
//         if(weight[0] <= capacity){
//             dp[0][w] = value[0];
//         }
//         else{
//             dp[0][w] = 0;
//         }
//     }
//     //step3 : take care of remaining recursive calls
//     for(int index = 1; index < n; index++){
//         for(int w = 0; w <= capacity; w++){
//             int include = 0;
//             if(weight[index] <= w){
//                 include = value[index] + dp[index-1][w - weight[index]];
//             }
//             int exclude = 0 + dp[index-1][w];
//             dp[index][w] = max(exclude, include);
//         }
//     }
//     return dp[n-1][capacity];
// }
// int solveTab2(vector<int>& weight, vector<int>& value, int n, int capacity){  //space optimization
//     //step1:
//     vector<int> prev(capacity+1, 0);
//     vector<int> curr(capacity+1, 0);

//     //step2: analyse base case
//     for(int w = weight[0]; w<= capacity; w++){
//         if(weight[0] <= capacity){
//             curr[w] = value[0];
//         }
//         else{
//             curr[w] = 0;
//         }
//     }
//     //step3 : take care of remaining recursive calls
//     for(int index = 1; index < n; index++){
//         for(int w = capacity; w >= 0; w--){
//             int include = 0;
//             if(weight[index] <= w){
//                 include = value[index] + curr[w - weight[index]];
//             }
//             int exclude = 0 + curr[w];
//             curr[w] = max(exclude, include);
//         }
//         prev = curr;
//     }
//     return prev[capacity];
// }
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight){
//     // return solve(weight, value, n-1, maxWeight);

//     // vector<vector<int> > dp(n, vector<int>(maxWeight+1, -1));   //why 2d
//     // return solveMem(weight, value, n-1, maxWeight, dp);

//     //return solveTab(weight, value, n, maxWeight);

//     return solveTab2(weight, value, n, maxWeight);
// }





// //Combination Sum 1V problem
// int solve(vector<int> &num, int tar){
//     //base case
//     if(tar < 0){
//         return 0;
//     }
//     if(tar == 0){
//         return 1;
//     }
//     int ans = 0;
//     for(int i=0; i<num.size(); i++){
//         ans += solve(num, tar - num[i]);
//     }
//     return ans;
// }
// int solveMem(vector<int> &num, int tar, vector<int>& dp){
//     //base case
//     if(tar < 0){
//         return 0;
//     }
//     if(tar == 0){
//         return 1;
//     }
//     if(dp[tar] != -1){
//         return dp[tar];
//     }
//     int ans = 0;
//     for(int i=0; i<num.size(); i++){
//         ans += solveMem(num, tar - num[i], dp);
//     }
//     dp[tar] = ans;
//     return dp[tar];
// }
// int solveTab(vector<int> &num, int tar){
//     vector<int> dp(tar+1, 0);
//     dp[0] = 1;

//     //traversing from target 1 to tar
//     for(int i=0; i<=tar; i++){
//         //traversing on num vector
//         for(int j=0; j<num.size(); j++){
//             if(i-num[j] >= 0)
//                 dp[i] += dp[i-num[j]];
//         }
//     }
//     return dp[tar];
// }
// int findWays(vector<int> &num, int tar){
//     // return solve(num, tar);

//     // vector<int> dp(tar+1, -1);
//     // return solveMem(num, tar, dp);

//     return solveTab(num, tar);
// }





// //Perfect Squares Problem
// class Solution{
//     public:
//     int solve(int n){
//         //base case
//         if(n == 0){
//             return 0;
//         }
//         int ans = n;
//         for(int i=1; i*i <= n; i++){
//             int temp = i*i;
//             ans = min(ans, 1 + solve(n-temp));
//         }
//         return ans;
//     }
//     int solveMem(int n, vector<int>& dp){
//         //base case
//         if(n==0){
//             return 0;
//         }
//         if(dp[n] != -1){
//             return dp[n];
//         }
//         int ans = n;
//         for(int i=1; i*i <= n; i++){
//             int temp = i*i;
//             ans = min(ans, 1+solve(n+temp));
//         }
//         dp[n] = ans;
//         return dp[n];
//     }
//     int solveTab(int n){
//         vector<int> dp(n+1, INT_MAX);
//         dp[0] = 0;
//         for(int i=1; i<=n; i++){
//             for(int j = 1; j*j<=n; j++){
//                 int temp = j*j;
//                 if(i+temp >= 0){
//                     dp[i] = min(dp[i], 1 + dp[i-temp]);
//                 }
//             }
//         }
//         return dp[n];
//     }
//     int MinSquares(int n){
//        // return solve(n);

//     //    vector<int> dp(n+1, -1);
//     //    solveMem(n, dp);

//         return solveTab(n);
//     }
// };




//Ninja's Trip  




// //Minimum Cost for Tickets
// class Solution{
//     public:
//     int solve(int n, vector<int>& days, vector<int>& cost, int index){
//         //base case
//         if(index >= n){
//             return 0;
//         }

//         //1 day pass
//         int option1 = cost[0] + solve(n, days, cost, index+1);
//         //7 day pass
//         int i;
//         for(i = index; i<n && days[i] < days[index] + 7 ; i++){
//             int option2 = cost[1] + solve(n, days, cost, i);
//         }
//         //30 day pass
//         for(i=index; i<n && days[i] < days[index] + 30; i++){
//             int option3 = cost[2] + solve(n, days, cost, i);
//             return min(option1, min(option2, option3));
//         }
//     }
//     int solveMem(int n, vector<int>& days, vector<int>& cost, int index, vector<int>& dp){
//         //base case
//         if(index >= n){
//             return 0;
//         }
//         if(dp[index] != -1){
//             return dp[index];
//         }

//         //1 day pass
//         int option1 = cost[0] + solve(n, days, cost, index+1,dp);
//         //7 day pass
//         int i;
//         for(i = index; i<n && days[i] < days[index] + 7 ; i++){
//             int option2 = cost[1] + solve(n, days, cost, i,dp);
//         }
//         //30 day pass
//         for(i=index; i<n && days[i] < days[index] + 30; i++){
//             int option3 = cost[2] + solve(n, days, cost, i,dp);
//             dp[index] =  min(option1, min(option2, option3));
//             return dp[index];
//         }
//     }
//     int solveTab(int n, vector<int>& days, vector<int>& cost){
//         vector<int> dp(n+1, INT_MAX);
//         dp[n] = 0;

//         for(int k = n-1; k >= 0; k--){
//             //1 day pass
//             int option1 = cost[0] + dp[k+1];

//             int i; 
//             //7 day pass
//             for(i = k; i<n && days[i] < days[k] +7; i++){
//                 int option2 = cost[1] + dp[i];
//             }
            
//             //30 day pass
//             for(i = k; i<n && days[i] < days[k] + 30; i++){
//                 int option3 = cost[2] + dp[i];
//                 dp[k] = min(option1, min(option2, option3));
//             }
//         }
//         return dp[0];
//     }
//     //More optimize approach
//     int minimumCoins(int n, vector<int> days, vector<int> cost){
//         int ans = 0;
//         queue<pair<int, int> > month;
//         queue<pair<int, int> > week;

//         for(int day: days){
//             //step 1 : remove expired days
//             while(!month.empty() && month.front().first + 30 <= day){
//                 month.pop();
//             }
//             while(!weekk.empty() && week.front().first + 7 <= day){
//                 week.pop();
//             }
            
//             //step 2 : add cost for current day
//             week.push(make_pair(day, ans+cost[1]));
//             month.push(make_pair(day, ans+cost[2]));

//             //step 3 : ans update
//             ans = min(ans + cost[0], min(week.front().second, month.front().second));
//         }
//         return ans;
//     }
//     int mincostTickets(vector<int>& days, vector<int>& costs){
//         // return solve(n, days, cost, 0);

//         // vector<int> dp(n+1, -1);
//         // return solveMem(n, days, cost, 0, dp);

//         return solveTab(n, days, cost);
//     }
// };





// //Largest Square area in Matrix   or Largest sqaure area formed in a matrix
// class Solution{
//     public:
//     int solve(vector<vector<int>> mat, int i, int j, int &maxi){
//         if(i>=mat.size() || j >= mat[0].size()){
//             return 0;
//         }
//         int right = solve(mat, i, j+1,maxi);
//         int diagonal = solve(mat, i+1, j+1, maxi);
//         int down = solve(mat, i+1, j, maxi);

//         if(mat[i][j] == 1){
//             int ans = 1 + min(right, min(diagonal, down));
//             maxi = max(maxi, ans);
//             return ans;
//         }
//         else{
//             return 0;
//         }
//     }
//     int solveMem(vector<vector<int>> &mat, int i, int j, int &maxi, vector<vector<int> > &dp){
//         if(i>=mat.size() || j >= mat[0].size()){
//             return 0;
//         }
//         if(dp[i][j] != -1){
//             return dp[i][j];
//         }

//         int right = solveMem(mat, i, j+1, dp);
//         int diagonal = solveMem(mat, i+1, j+1, maxi,dp);
//         int down = solveMem(mat, i+1, j, maxi,dp);

//         if(mat[i][j] == 1){
//             dp[i][j] = 1 + min(right, min(diagonal, down));
//             maxi = max(maxi, dp[i][j]);
//             return dp[i][j];
//         }
//         else{
//             return dp[i][j] = 0;
//         }
//     }
//     int solveTab(vector<vector<int> > &mat, int &maxi){
//         int row = mat.size();
//         int col = mat[0].size();

//         vector<vector<int> > dp(row+1, vector<int> (col+1, 0));
//         for(int i=row-1; i>=0; i--){
//             for(int j=col-1; j>=0; j--){
//                 int right = dp[i][j+1];
//                 int diagonal = dp[i+1][j+1];
//                 int down = dp[i+1][j];

//                 if(mat[i][j] == 1){
//                     dp[i][j] = 1 + min(right, min(daigonal, down));
//                     maxi = max(maxi, dp[i][j]);
//                 }
//                 else{
//                     dp[i][j] = 0;
//                 }
//             }
//         }
//         return dp[0][0];
//     }
//     int solveSO(vector<vector<int>> &mat, int &maxi){
//         int row = mat.size();
//         int col = mat[0].size();

//         vector<int> curr(col+1, 0);
//         vector<int> next(col+1, 0);

//         for(int i = row-1; i>=0; i--){
//             for(int j = col-1; j >= 0; j--){
//                 int right = curr[j+1];
//                 int diagonal = next[j+1];
//                 int down = next[j];

//                 if(mat[i][j] == 1){
//                     curr[j] = 1 + min(right, min(diagonal, down));
//                     maxi = max(maxi, curr[j]);
//                 }
//                 else{
//                     curr[j] = 0;
//                 }
//             }
//             next = curr;
//         }
//         return next[0];
//     }
//     int maxSquare(int n, int m, vector<vector<int>> mat){
//         // int maxi = 0;
//         // solve(mat, 0, 0, maxi);
//         // return maxi;

//         // int maxi = 0;
//         // vector<vector<int> > dp(n, vector<int> (m, -1));
//         // solveMem(mat, 0, 0, maxi, dp);
//         // return maxi;

//         // int maxi = 0;
//         // solveTab(mat, maxi);
//         // return maxi;

//         int maxi = 0;
//         solveSO(mat, maxi);
//         return maxi;
//     }
// };




// //Minimum Score Triangulation of Polygon
// class Solution{
//     public:
//     int solve(vector<int>& v, int i, int j){
//         //base case
//         if(i+1 == j){
//             return 0;
//         }
//         int ans = INT_MAX;
//         for(int k=i+1; k<j; k++){
//             ans = min(ans, v[i]*v[j]*v[k] + solve(v,i,k) + solve(v,k,j));
//         }
//         return ans;
//     }
//     int solveMem(vector<int>& v, int i, int j, vector<vector<int> > &dp){
//         //base case
//         if(i+1 == j){
//             return 0;
//         }
//         if(dp[i][j] != -1){
//             return dp[i][j];
//         }

//         int ans = INT_MAX;
//         for(int k=i+1; k<j; k++){
//             ans = min(ans, v[i]*v[j]*v[k] + solve(v,i,k,dp) + solve(v,k,j,dp));
//         }
//         dp[i][j] = ans;
//         return dp[i][j];
//     }
//     int solveTab(vector<int> &v){
//         int n = v.size();
//         vector<vector<int> > dp(n, vector<int> (n,0));

//         for(int i = n-1; i>=0; i--){
//             for(int j = i+2; j<n; j--){
//                 int ans = INT_MAX;
//                 for(int k=i+1; k<j; k++){
//                     ans = min(ans, v[i]*v[j]*v[k] + dp[i][k] + dp[k][j]);
//                 }
//                 dp[i][j] = ans;
//             }
//         }
//         return dp[0][n-1];
//     }
//     int minScoreTriangulation(vector<int>& values){
//         int n = values.size();
//         // return solve(values, 0, n-1);

//         // vector<vector<int> > dp(n, vector<int> (n, -1));
//         // return solveMem(values, 0, n-1, dp);

//         return solveTab(values);
//     }
// }




// //Minimum Sideways Jump
// class Solution{
//     public:
//     int solve(vector<int>& obstacles, int currlane, int currpos){
//         //base case
//         int n = obstacles.size()-1;
//         if(currpos == n){
//             return 0;
//         }
//         if(obstacles[pos+1] != currlane){
//             return solve(obstacles, currlane, currpos+1);
//         }
//         else{
//             //sideways jump
//             int ans = INT_MAX;
//             for(int i=1; i<=1; i++){
//                 if(currlane != i && obstacles[currpos] != i){
//                     ans = min(ans, 1 + solve(obstacles, i, currpos));
//                 }
//             }
//             return ans;
//         }
//     }
//     int solveMem(vector<int>& obstacles, int currlane, int currpos, vector<vector<int> > &dp){
//         //base case
//         int n = obstacles.size()-1;
//         if(currpos == n){
//             return 0;
//         }
//         if(dp[currlane][currpos] != -1){
//             return dp[currlane][currpos];
//         }
//         if(obstacles[pos+1] != currlane){
//             return solve(obstacles, currlane, currpos+1,dp);
//         }
//         else{
//             //sideways jump
//             int ans = INT_MAX;
//             for(int i=1; i<=1; i++){
//                 if(currlane != i && obstacles[currpos] != i){
//                     ans = min(ans, 1 + solve(obstacles, i, currpos,dp));
//                 }
//             }
//             dp[currlane][currpos] = ans;
//             return dp[currlane][currpos];
//         }
//     }
//     int solveTab(vector<int>& obstacles){
//         int n = obstacles.size()-1;
//         vector<vector<int> > d(4, vector<int> (obstacles.size(), 1e9));

//         dp[0][n] = 0;
//         dp[1][n] = 0;
//         dp[2][n] = 0;
//         dp[3][n] = 0;

//         for(int currpos = n-1; currpos >= 0; currpos--){
//             for(int currlane = 1; currlane <=3; currlane++){
//                 if(obstacles[currpos + 1] != currlane){
//                     dp[currlane][currpos] = dp[currlane][currpos+1];
//                 }
//                 else{
//                     //sideways jump
//                     int ans = 1e9;
//                     for(int i=1; i<=3; i++){
//                         if(currlane != i && obstacles[currpos] != i){
//                             ans = min(ans, 1 + dp[i][currpos+1]);
//                         }
//                     }
//                     dp[currlane][currpos] = ans;
//                 }
//             }
//         }
//         return min(dp[2][0], min(1 + dp[1][0], 1 + dp[3][0]));
//     }
//     int solveTab(vector<int>& obstacles){
//         int n = obstacles.size();

//         vector<int> curr(4, INT_MAX);
//         vector<int> next(4, INT_MAX);

//         next[0] = 0;
//         next[1] = 0;
//         next[2] = 0;
//         next[3] = 0;
        
//         for(int currpos = n-1; currpos >= 0; currpos--){
//             for(int currlane = 1; currlane <=3; currlane++){
//                 if(obstacles[currpos + 1] != currlane){
//                     curr[currlane]= next[currlane];
//                 }
//                 else{
//                     //sideways jump
//                     int ans = 1e9;
//                     for(int i=1; i<=3; i++){
//                         if(currlane != i && obstacles[currpos] != i){
//                             ans = min(ans, 1 + next[i]);
//                         }
//                     }
//                     curr[currlane] = ans;
//                 }
//             }
//             next = curr;
//         }
//         return min(next[2], min(1 + next[1], 1 + next[3]));
//     }
//     int minSideJumps(vector<int>& obstacles){
//         // return solve(obstacles, 2, 0);

//         // vector<vector<int> > dp(4, vector<int> (obstacles.size(), -1));
//         // return solveMem(obstacles, 2, 0, dp);

//         return solveTab(obstacles);
//     }
// }




// //Reducing Dishes Leetcode
// class Solution{
//     public:
//     int solve(vector<int>& satisfication, int index, int time){
//         //base case
//         if(index == satisfication.size()){
//             return 0;
//         }
//         int include = satisfication[index] * (time+1) + solve(satisfication, index+1, time+1);
//         int exclude = 0 + solve(satisfication, index+1, time);

//         return max(include, exclude);
//     }
//     int solveMem(vector<int>& satisfaction, int index, int time, vector<vector<int> >&dp){
//         //base case
//         int n = satisfaction.size();
//         if(index == n){
//             return 0;
//         }
//         if(dp[index][time] != -1){
//             return dp[index][time];
//         }

//         int include = satisfaction[index] * (time+1) + solveMem(satisfaction, index+1, time+1,dp);
//         int exclude = 0 + solveMem(satisfaction, index+1, time,dp);

//         return dp[index][time] = max(include, exclude);
//     }
//     int solveTab(vector<int>& satisfaction){
//         int n = satisfaction.size();
//         vector<vector<int> > dp(n+1, vector<int> (n+1, 0));
//         for(int index = n-1; index >= 0; index--){
//             for(int time = index; time >= 0; time--){
//                 int include = satisfaction[index]*(time+1) + dp[index+1][time+1];
//                 int exclude = 0 + dp[index+1][time];

//                 dp[index][time] = max(include, exclude);
//             }
//         }
//         return dp[0][0];
//     }
//     int solveTab(vector<int>& satisfaction){
//         int n = satisfaction.size();

//         vector<int> curr(n+1, 0);
//         vector<int> next(n+1, 0);

//         for(int index = n-1; index >= 0; index--){
//             for(int time = index; time >= 0; time--){
//                 int include = satisfaction[index]*(time+1) + next[time+1];
//                 int exclude = 0 + next[time];

//                 curr[time] = max(include, exclude);
//             }
//             next = curr;
//         }
//         return next[0];
//     }
//     int maxSatisfication(vector<int>& satisfaction){
//         //sort the vector
//         sort(satisfaction.begin(), satisfaction.end());
//         // return solve(satisfaction, 0, 0);

//         int n = satisfaction.size();
//         // vector<vector<int> > dp(n+1, vector<int> (n+1, -1));
//         // return solveMem(satisfaction, 0, 0, dp);

//         return solveTab(satisfaction);
//     }
// }





// //Longest Increasing Subsequence + Russinan Doll Leetcode
// class Solution{
//     public:
//     int solve(int n, int a[], int curr, int prev){
//         //base case
//         if(curr == n){
//             return 0;
//         }
//         //include
//         int take = 0;
//         if(prev == -1 || a[curr] > a[prev]){
//             take = 1 + solve(n, a, curr+1, curr);
//         }
//         //exclude
//         int notTake = 0 + solve(n, a, curr+1, prev);
//         return max(take, notTake);
//     }
//     int solveMem(int n, int a[], int curr, int prev, vector<vector<int> >&dp){
//         //base case
//         if(curr == n){
//             return 0;
//         }
//         if(dp[curr][prev+1] != -1){
//             return dp[curr][prev+1];
//         }
//         //include
//         int take = 0;
//         if(prev == -1 || a[curr] > a[prev]){
//             take = 1 + solve(n, a, curr+1, curr, dp);
//         }
//         //exclude
//         int notTake = 0 + solve(n, a, curr+1, prev, dp);
//         return dp[curr][prev+1] = max(take, notTake);
//     }
//     int solveTab(int n, int a[]){
//         vector<vector<int> > dp(n+1, vector<int> (n+1, 0));

//         for(int curr = n-1; curr >= 0; curr--){
//             for(int prev = curr-1; prev >= -1; prev--){
//                 //include
//                 int take = 0;
//                 if(prev == -1 || a[curr] > a[prev]){
//                     take = 1 + dp[curr+1][curr+1];
//                 }
//                 //exclude
//                 int notTake = 0 + dp[curr+1][prev+1];
//                 dp[curr][prev+1] = max(take, notTake);
//             }
//         }
//         return dp[0][0];
//     }
//     int solveTab(int n, int a[]){
        
//         vector<int> currRow(n+1, 0);
//         vector<int> nextRow(n+1, 0);

//         for(int curr = n-1; curr >= 0; curr--){
//             for(int prev = curr-1; prev >= -1; prev--){
//                 //include
//                 int take = 0;
//                 if(prev == -1 || a[curr] > a[prev]){
//                     take = 1 + nextRow[curr+1];
//                 }
//                 //exclude
//                 int notTake = 0 + nextRow[prev+1];
//                 currRow[prev+1] = max(take, notTake);
//             }
//             nextRow = currRow;
//         }
//         return nextRow[0];
//     }
//     int solveOptimal(int n, int a[]){
//         if(n==0){
//             return 0;
//         }
//         vector<int> ans;
//         ans.push_back(a[0]);

//         for(int i = 1; i<n; i++){
//             if(a[i] > ans.back()){
//                 ans.push_back(a[i]);
//             }
//             else{
//                 //find index of just bada element in ans
//                 int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
//                 ans[index] = a[i];
//             }
//         }
//         return ans.size();
//     }
//     //Function to find length of longest increasing subsequences
//     int longestSubsequence(int n, int a[]){
//         // return solve(n, a, 0, -1);

//         // vector<vector<int> > dp(n, vector<int> (n+1, -1));
//         // return solveMem(n, a, 0, -1, dp);

//         // return solveTab(n, a);

//         return solveOptimal(n, a);
//     }
// };





// //Maximum Height of Stacking Cuboid
// class Solution{
//     public:
//     bool check(vector<int> base, vector<int> newBox){
//         if(nexBox[0] <= base[0] && newBox[1] <= base[1] && newBox[2] <= base[2]){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     int solveTab(int n, vector<vector<int>>& a){
//         vector<int> currRow(n+1, 0);
//         vector<int> nextRow(n+1, 0);

//         for(int curr = n-1 ; curr >= 0; curr--){
//             for(int prev = curr-1; prev >= -1; prev--){
//                 //include
//                 int take = 0;
//                 if(prev == -1 || a[curr] > a[prev]){
//                     take = a[curr][2] + nextRow[curr + 1];
//                 }
//                 //exclude
//                 int notTake = 0 + nextRow[prev + 1];
//                 currRow[prev+1] = max(take, notTake);
//             }
//             nextRow = currRow;
//         }
//         return nextRow[0];
//     }
//     int maxHeight(vector<vector<int>>& cuboids){
//         //step 1 : sort all dimensions for every cuboids
//         for(auto &a: cuboids){
//             sort(a.begin(), a.end());
//         }

//         //step 2 : sort all cuboids basis on w or l
//         sort(cuboidsl.begin(),cuboids.end());

//         //step 3 : use LIS logic
//         return solve(cuboids.size(), cuboids);
//     }
// };





// //Pizza with 3n slices
// class solution{
//     public:
//     int solve(int index, int endIndex, vector<int>& slices, int n){
//         //base case
//         if(n == 0 || index >= endIndex){
//             return 0;
//         }
//         int take = slices[index] + solve(index + 2, endIndex, slices, n-1);
//         int notTake = 0 + solve(index + 1, endIndex, slices, n );
//         return max(take, notTake)
//     }
//     int solveMem(int index, int endIndex, vector<int>& slices, int n, vector<vector<int> >& dp){
//         //base case
//         if(n == 0 || index >= endIndex){
//             return 0;
//         }
//         if(dp[index][n] != -1){
//             return dp[index][n];
//         }

//         int take = slices[index] + solve(index + 2, endIndex, slices, n-1, dp);
//         int notTake = 0 + solve(index + 1, endIndex, slices, n, dp);
//         return dp[index][n] = max(take, notTake);
//     }
//     int solveTab(vector<int>& slices){
//         int k = slices.size();

//         vector<vector<int> > dp1(k, vector<int> (k+2, 0));

//         vector<vector<int> > dp2(k, vector<int> (k+2, 0));

//         for(int index = k-2; index >= 0; index--){
//             for(int n = 1; n <= k/3; n++){
//                 int take = slices[index] + dp1[index+2][n-1];
//                 int notTake = 0 + dp1[index+1][n];

//                 dp1[index][n] = max(take, notTake);
//             }
//         }
//         int case1 = dp1[0][k/3];

//         for(int index = k-1; index >= 1; index--){
//             for(int n = 1; n <= k/3; n++){
//                 int take = slices[index] + dp2[index+2][n-1];
//                 int notTake = 0 + dp2[index+1][n];

//                 dp[index][n] = max(take, notTake);
//             }
//         }
//         int case2 = dp2[1][k/3];

//         return max(case1, case2);
//     }
//     int solveTab(vector<int>& slices){
//         int k = slices.size();

//         vector<int> prev1(k+2,0);
//         vector<int> next1(k+2,0);
//         vector<int> curr1(k+2,0);

//         vector<int> prev2(k+2,0);
//         vector<int> next2(k+2,0);
//         vector<int> curr2(k+2,0);

//         for(int index = k-2; index >= 0; index--){
//             for(int n = 1; n<=k/3; n++){
//                 int take = slices[index] + next1[n-1];
//                 int notTake = 0 + curr1[n];

//                 prev1[n] = max(take, notTake);
//             }
//             next1 = curr1;
//             curr1 = prev1;
//         }
//         int case1 = curr1[k/3];

//         for(int index = k-1; index >= 1; index--){
//             for(int n = 1; n <= k/3; n++){
//                 int take = slices[index] + next2[n-1];
//                 int notTake = 0 + curr2[n];

//                 prev2[n] = max(take, notTake);
//             }
//             next2 = curr2;
//             curr2 = prev2;
//         }
//         int case2 = curr2[k/3];

//         return max(case1, case2);
//     }
//     int maxSizeSlices(vector<int> & slices){
//         // int k = slices.size();
//         // int case1 = solve(0, slices, k/3);
//         // int case2 = solve(1, slices, k/3);
//         // return max(case1, case2);

//         // int k = slices.size();
//         // vector<vector<int> > dp1(n, vector<int> (n, -1));
//         // int case1 = solveMem(0, k-2, slices, k/3, dp);
//         // vector<vector<int> > dp2(k, vector<int> (k, -1));
//         // int case2 = solveMem(1, k-1, slices, k/3, dp);
//         // return max(case1, case2);

//         return solveTab(slices);
//     }
// };






// //Number of Dice Rolls with Target Sum    or Dice throw
// class Solution{
//     public:
//     long long solve(int dice, int faces, int target){
//         //base case
//         if(target<0){
//             return 0;
//         }
//         if(dice==0 && target!= 0){
//             return 0;
//         }
//         if(target == 0 && dice != 0){
//             return 0;
//         }
//         if(dice == 0 && target == 0){
//             return 1;
//         }
//         int ans = 0;
//         for(int i=1; i<=faces; i++){
//             ans = ans + solve(dice-1, faces, target-1);
//         }
//         return ans;
//     }
//     long long solveMem(int dice, int faces, int target, vector<vector<long long>>& dp){
//         //base case
//         if(target<0){
//             return 0;
//         }
//         if(dice==0 && target!= 0){
//             return 0;
//         }
//         if(target == 0 && dice != 0){
//             return 0;
//         }
//         if(dice == 0 && target == 0){
//             return 1;
//         }
//         if(dp[dice][target] != -1){
//             return dp[dice][target];
//         }
//         long long ans = 0;
//         for(int i=1; i<=faces; i++){
//             ans = ans + solveMem(dice-1, faces, target-1,dp);
//         }
//         return dp[dice][target] = ans;
//     }
//     long long solveTab(int d, int f, int t){
//         vector<vector<long long> > dp(d+1, vector<long long>(t+1, 0));
//         //after analysing base case
//         dp[0][0] = 1;

//         for(int dice = 1; dice <= d; dice++){
//             for(int target = 1; target <= t; target++){
//                 long long ans = 0;
//                 for(int i=1; i<=f; i++){
//                     ans = ans + dp[dice-1][target-i];
//                 }
//                 dp[dice][target] = ans;
//             }
//         }
//         return dp[d][t];
//     }
//     long long solveTab(int d, int f, int t){

//         vector<long long> prev(t+1, 0);
//         vector<long long> curr(t+1, 0);
//         //after analysing base case
//         prev[0] = 1;

//         for(int dice = 1; dice <= d; dice++){
//             for(int target = 1; target <= t; target++){
//                 long long ans = 0;
//                 for(int i=1; i<=f; i++){
//                     if(target-i >= 0)
//                         ans = ans + prev[target-i];
//                 }
//                 curr[target] = ans;
//             }
//             prev = curr;
//         }
//         return prev[t];
//     }
//     long long noOfWays(int M, int N, int X){
//         // return solve(N, M, X);

//         // vector<vector<long long> > dp(N+1, vector<long long>(X+1, -1));
//         // return solveMem(N,M,X,dp);

//         return solveTab(N, M, X);
//     }
// };





// //Partition Equal Subset Sum
// class Solution{
//     public:
//     bool solve(int index, int arr[], int N, int target){
//         //base case
//         if(index >= N){
//             return 0;
//         }
//         if(target < 0){
//             return 0;
//         }
//         if(target == 0){
//             return 1;
//         }
//         bool incl = solve(index+1, arr, N, target - arr[index]);
//         bool excl = solve(index+1, arr, N, target - 0);

//         return incl or excl;
//     }
//     bool solveMem(int index, int arr[], int N, int target, vector<vector<int>> &dp){
//         //base case
//         if(index >= N){
//             return 0;
//         }
//         if(target < 0){
//             return 0;
//         }
//         if(target == 0){
//             return 1;
//         }
//         bool incl = solveMem(index+1, arr, N, target - arr[index], dp);
//         bool excl = solveMem(index+1, arr, N, target - 0, dp);

//         return  dp[index][target] = incl or excl;
//     }
//     bool solveTab(int N, int arr[], int total){
//         vector<vector<int> > dp(N+1, vector<int>(total+1, 0));

//         for(int i=0; i<= N; i++){
//             dp[i][0] = 1;
//         }
//         for(int index = N-1; index >= 0; index--){
//             for(int target = 0; target <= total/2; target++){
//                 bool incl = 0;
//                 if(target - arr[index] >= 0){
//                     incl = dp[index+1][target - arr[index]];
//                 }
//                 bool excl = dp[index+1][target-0];

//                 dp[index][target] = incl or excl;
//             }
//         }
//         return dp[0][total/2];
//     }
//     bool solveTab(int N, int arr[], int total){
//         vector<int> curr(total/2+1, 0);
//         vector<int> next(total/2+1, 0);

//         curr[0] = 1;
//         next[0] = 1;

//         for(int index = N-1; index >= 0; index--){
//             for(int target = 0; target <= total/2; target++){
//                 bool incl = 0;
//                 if(target - arr[index] >= 0){
//                     incl = next[target - arr[index]];
//                 }
//                 bool excl = next[target-0];

//                 curr[target] = incl or excl;
//             }
//             next = curr;
//         }
//         return next[total/2];
//     }
//     int equalPartition(int N, int arr[]){
//         int total = 0;
//         for(int i=0; i<N; i++){
//             total += arr[i];
//         }
//         if(total & 1){
//             return 0;
//         }
//         int target = total/2;
//         // return solve(0, arr, N, target);


//         // vector<vector<int> > dp(N, vector<int>(target+1, -1));
//         // return solve(0, arr, N, target);

//         return solveTab(N, arr, total);
//     }
// };





// //Minimum Swaps to make subsequences increasing
// class Solution{
//     public:
//     int solve(vector<int>& nums1, vector<int>& nums2, int index, bool swapped){
//         //base case
//         if(index == nums1.size()){
//             return 0;
//         }
//         int ans = INT_MAX;
//         int prev1 = nums1[index-1];
//         int prev2 = nums2[index-1];

//         //catch
//         if(swapped){
//             swap(prev1, prev2);
//         }
//         //noswap
//         if(nums1[index] > prev1 && nums2[index] > prev2){
//             ans = solve(nums1, nums2, index+1, 0);
//         }
//         //swap
//         if(nums1[index] > prev2 && nums2[index] > prev1){
//             ans = min(ans, 1 + solve(nums1, nums2, index+1, 1));
//         }
//         return ans;
//     }
//     int solveMem(vector<int>& nums1, vector<int>& nums2, int index, bool swapped, vector<vector<int>>& dp){
//         //base case
//         if(index == nums1.size()){
//             return 0;
//         }
//         if(dp[index][swapped] != -1){
//             return dp[index][swapped];
//         }
//         int ans = INT_MAX;
//         int prev1 = nums1[index-1];
//         int prev2 = nums2[index-1];

//         //catch
//         if(swapped){
//             swap(prev1, prev2);
//         }
//         //noswap
//         if(nums1[index] > prev1 && nums2[index] > prev2){
//             ans = solveMem(nums1, nums2, index+1, 0,dp);
//         }
//         //swap
//         if(nums1[index] > prev2 && nums2[index] > prev1){
//             ans = min(ans, 1 + solveMem(nums1, nums2, index+1, 1, dp));
//         }
//         return dp[index][swapped] = ans;
//     }
//     int solveTab(vector<int>& nums1, vector<int>& nums2){
//         int n = nums1.size();
//         vector<vector<int>> dp(n+1, vector<int>(2,0));

//         for(int index = n-1; index >= 1; index--){
//             for(int swapped=1; swapped >= 0; swapped--){
//                 int ans = INT_MAX;
//                 int prev1 = nums1[index-1];
//                 int prev2 = nums2[index-1];

//                 //catch
//                 if(swapped){
//                     swap(prev1, prev2);
//                 }
//                 //nonswap
//                 if(nums1[index] > prev1 && nums2[index] > prev2){
//                     ans = dp[index+1][0];
//                 }
//                 //swap
//                 if(nums1[index] > prev2 && nums2[index] > prev){
//                     ans = min(ans, 1+dp[index+1][1]);
//                 }
//                 return dp[index][swapped] = ans;
//             }
//         }
//         return dp[1][0];
//     }
//     int solveTab(vector<int>& nums1, vector<int>& nums2){
//         int n = nums1.size();
        
//         int swap = 0;
//         int noswap = 0;
//         int currswap = 0;
//         int currnoswap = 0;

//         for(int index = n-1; index >= 1; index--){
//             for(int swapped=1; swapped >= 0; swapped--){

//                 int ans = INT_MAX;
//                 int prev1 = nums1[index-1];
//                 int prev2 = nums2[index-1];

//                 //catch
//                 if(swapped){
//                     int temp = prev2;
//                     prev2 = prev1;
//                     prev1 = temp;
//                 }
//                 //nonswap
//                 if(nums1[index] > prev1 && nums2[index] > prev2){
//                     ans = noswap;
//                 }
//                 //swap
//                 if(nums1[index] > prev2 && nums2[index] > prev){
//                     ans = min(ans, 1+swap);
//                 }

//                 if(swapped){
//                     currswap = ans;
//                 }
//                 else{
//                     currnoswap = ans;
//                 }
//             }
//             swap = currswap;
//             noswap = currnoswap;
//         }
//         return min(swap, noswap);
//     }
//     int minSwap(vector<int>& nums1, vector<int>& nums2){
//         nums1.insert(nums1.begin(), -1);
//         nums2.insert(nums2.begin(), -1);

//         //it means that the previous indexes were swapped or not
//         bool swapped = 0;
//         // return solve(nums1, nums2, 1, swapped);

//         int n = nums1.size();
//         vector<vector<int>> dp(n, vector<int>(2, -1));
//         // return solveMem(nums1, nums2, 1, swapped, dp);

//         return solveTab(nums1, nums2);
//     }
// };





// //Longest Arithmetic Subsequences or Progression
// class Solution{
//     public:
//     int solve(int index, int diff, int A[]){
//         //backword check
//         if(index < 0){
//             return 0;
//         }
//         int ans = 0;
//         for(int j = index -1; j >= 0; j--){
//             if(A[index]-A[j] == diff){
//                 ans = max(ans, 1 + solve(j, diff, A));
//             }
//         }
//         // cout<<"Returning ans"<<ans<<endl;
//         return ans;
//     }
//     int solve(int index, int diff, int A[], unordered_map<int, int> dp[]){
//         //backword check
//         if(index < 0){
//             return 0;
//         }
//         if(dp[index].count(diff)){
//             return dp[index][diff];
//         }
//         int ans = 0;
//         for(int j = index -1; j >= 0; j--){
//             if(A[index]-A[j] == diff){
//                 ans = max(ans, 1 + solve(j, diff, A, dp));
//             }
//         }
//         // cout<<"Returning ans"<<ans<<endl;
//         return dp[index][diff] = ans;
//     }
//     int lengthOfLongestAP(int A[], int n){
//         if(n==2){
//             return n;
//         }
//         int ans 0;

//         unordered_map<int, int> dp(n+1);
//         for(int i=0; i<n; i++){
//             for(int j = i+1; j<n; j++){
//                 ans = max(ans, 2 + solve(i, A[j]-A[i], A,dp));
//             }
//         }
//         return ans;
//     }
// };
// // or
// class Solution{
//     public:
//     int lengthOfLongestAP(int A[], int n){
//         if(n == 2){
//             return n;
//         }
//         int ans = 0;

//         unordered_map<int, int> dp(n+1);
//         for(int i=1; i<n; i++){
//             for(int j = 0; j<i; j++){
//                 int diff = A[i] - A[j];
//                 int cnt = 1;

//                 //check if answer already present
//                 if(dp[j].count(diff)){
//                     cnt = dp[j][diff];
//                 }
//                 dp[i][diff] = 1 + cnt;
//                 ans = max(ans, dp[i][diff]);
//             }
//         }
//         return ans;
//     }
// }; 





//Longest Arithmetic Subsequences --Leetcode





// //Longest AP with given Difference "d"
// class Solution {
// public:
//     int longestSubsequence(vector<int>& arr, int difference) {
//         unordered_map<int, int> dp;
//         int ans = 0;

//         for(int i=0; i<arr.size(); i++){
//             int temp = arr[i] - difference;
//             int tempAns = 0;

//             //check answer exisit for temp already or not
//             if(dp.count(temp)){
//                 tempAns = dp[temp];
//             }
//             //current answer update
//             dp[arr[i]] = 1 + tempAns;
//             //ans update
//             ans = max(ans, dp[arr[i]]);
//         }
//         return ans;
//     }
// };





// //Unique Binary Search Trees   or Catalan number
// class Solution{
//     public:
//     int solve(int n, vector<int>& dp){
//         if(n<=1){
//             return 1;
//         }
//         if(dp[n] != -1){
//             return dp[n];
//         }
//         int ans = 0;
//         //think 1 as root node
//         for(int i=1; i<=n; i++){
//             ans += solve(i+1, dp) * solve(n-i, dp);
//         }
//         return dp[n] = ans;
//     }
//     int solveTab(int n){
//         vector<int> dp(n+1, 0);
//         dp[0] = dp[1] = 1;

//         for(int i=2; i<=n; i++){
//             for(int j=1; j<=i; j++){
//                 dp[i] += dp[j+1]*dp[i-j];
//             }
//         }
//         return dp[n];
//     }
//     int numTrees(int n){
//         // vector<int> dp(n+1, -1);
//         // return solve(n, dp);

//         return solveTab(n);
//     }
// }





// //Guess Number high or lower
// class Solution{
//     public:
//     int solve(int start, int end){
//         if(start>=end){
//             return 0;
//         }
//         int maxi = INT_MAX;
//         for(int i=start; i<=end; i++){
//             maxi = min(maxi, i+max(solve(start, i-1), solve(i+1, end)));
//         }
//         return maxi;
//     }
//     int solveMem(int start, int end, vector<vector<int> >& dp){
//         if(start>=end){
//             return 0;
//         }
//         if(dp[start][end] != -1){
//             return dp[start][end];
//         }

//         int maxi = INT_MAX;
//         for(int i=start; i<=end; i++){
//             maxi = min(maxi, i+max(solve(start, i-1, dp), solve(i+1, end, dp)));
//         }
//         return dp[start][end] = maxi;
//     }
//     int solveTab(int n){
//         vector<vector<int> > dp(n+2, vector<int>(n+2, 0));

//         for(int start = n; start >= 1; start--){
//             for(int end = start; end <= n; end++){
//                 if(start == end){
//                     continue;
//                 }
//                 else{
//                     int maxi = INT_MAX;
//                     for(int i=start; i<=end; i++){
//                         maxi = min(maxi, i+max(dp[start][i-1], dp[i+1][end])));
//                     }
//                     dp[start][end] = maxi;
//                 }
//             }
//         }
//         return dp[1][n];
//     }
//     int getMoneyAmount(int n){
//         // vector<vector<int> > dp(n+1, -1);
//         // return solveMem(1,n,dp);

//         return solveTab(n);
//     }
// };





// //Minimum Cost Tree from leaf values
// class Solution{
//     public:
//     int solve(vector<int>& arr, map<pair<int, int> int>& maxi, int left, int right, vector<vector<int> > dp){
//         //leaf node
//         if(left == right){
//             return 0;
//         }
//         if(dp[left][right] != -1){
//             return dp[left][right];
//         }
//         int ans = INT_MAX;

//         for(int i=left; i<right; i++){
//             ans = min(ans, maxi[{left,i}]* maxi[{i+1, right}] + solve(arr, maxi, left, i) + solve(arr,maxi, i+1, right))
//         }
//         return dp[left][right] = ans;
//     }
//     int mctFromLeafValues(vector<int>& arr){
//         map<pair<int, int>, int> maxi;
//         int n = arr.size();
//         vector<vector<int> > dp(n+1, vector<int>(n+1, -1));

//         for(int i=0; i<arr.size(); i++){
//             maxi[{i,i}] = arr[i];
//             for(int j=i+1; i<arr.size(); j++){
//                 maxi[{i,j}] = max(arr[j], maxi[{i, j-1}]);
//             }
//         }
//         return solve(arr, maxi, 0, arr.size()-1, dp);
//     }
// };





// //Buy and Sell Stock part 1
// class Solution{
//     public:
//     int maxProfit(vector<int>& prices){
//         int mini = prices[0];
//         int profit = 0;
//         for(int i=1; i<prices.size(); i++){
//             int diff = prices[i] - mini;
//             profit = max(profit, diff);
//             mini = min(mini, prices[i]);
//         }
//         return profit;
//     }
// };





// //Buy and Sell Stock part 2
// class Solution{
//     public:
//     int solve(int index, int buy, vector<int>& prices){
//         if(index == prices.size()){
//             return 0;
//         }
//         int profit = 0;
//         if(buy){
//             int buykaro = -prices[index] + solve(index+1, 0, prices);
//             int skipkaro = 0 + solve(index+1, 1, prices);
//             profit = max(buykaro, skipkaro);
//         }
//         else{
//             int sellkaro = prices[index] + solve(index+1, 1, prices); 
//             int skipkaro = 0, solve(index+1, 0, prices);
//             profit = max(sellkaro, skipkaro);
//         }
//         return profit;
//     }
//     int solve(int index, int buy, vector<int>& prices, vector<vector<int>> &dp){
//         if(index == prices.size()){
//             return 0;
//         }
//         if(dp[index][buy] != -1){
//             return dp[index][buy];
//         }

//         int profit = 0;
//         if(buy){
//             int buykaro = -prices[index] + solve(index+1, 0,dp);
//             int skipkaro = 0 + solve(index+1, 1, prices, dp);
//             profit = max(buykaro, skipkaro);
//         }
//         else{
//             int sellkaro = prices[index] + solve(index+1, 1, prices, dp); 
//             int skipkaro = 0, solve(index+1, 0, prices, dp);
//             profit = max(sellkaro, skipkaro);
//         }
//         return dp[index][buy] = profit;
//     }
//     int solveTab(vector<int>& prices){
//         int n = prices.size();

//         vector<int> curr(2,0);
//         vector<int> prev(2, 0);
        
//         for(int index = n-1; index >= 0; index--){
//             for(int buy = 0; buy <= 1; buy++){
//                 int profit = 0;
//                 if(buy){
//                     int buykaro = -prices[index] + next[0];
//                     int skipkaro = 0 + next[1];
//                     profit = max(buykaro, skipkaro);
//                 }
//                 else{
//                     int sellkaro = prices[index] + next[1];
//                     int skipkaro = 0 + next[0];
//                     profit = max(sellkaro, skipkaro);
//                 }
//                 curr[buy] = profit;
//             }
//             next = curr;
//         }
//         return next[1];
//     }
//     int maxProfit(vector<int>& prices){
//         // return solve(0, 1, prices);

//         // int n = prices.size();
//         // vector<vector<int> >dp(n, vector<int>(2, -1));
//         // return solve(0, 1, prices, dp);

//         return solveTab(prices);
//     }
// }






// //Buy and sell stock part - 3
// class Solution{
//     public:
//     int solve(int index, int buy, vector<int>& prices, int limit){
//         if(index == prices.size())
//             return 0;
//         if(limit == 0){
//             return 0;
//         }
//         int profit = 0;
//         if(buy){
//             int buykaro = -prices[index] + solve(index+1, 0, prices, limit);
//             int skipkaro = 0 + solve(index+1, 1, prices, limit);
//             profit = max(buykaro, skipkaro);
//         }
//         else{
//             int sellkaro = prices[index] + solve(index+1, 0, prices, limit-1);
//             int skipKaro = 0 + skipKaro(index+1, 0, prices, limit);
//             profit = max(sellkaro, skipKaro);
//         }
//         return profit
//     }
//     int solve(int index, int buy, vector<int>& prices, int limit, vector<vector<int> >& dp){
//         if(index == prices.size())
//             return 0;
//         if(limit == 0){
//             return 0;
//         }
//         if(dp[index][buy][limit] != -1){
//             return dp[index][buy][limit];
//         }

//         int profit = 0;
//         if(buy){
//             int buykaro = -prices[index] + solve(index+1, 0, prices, limit, dp);
//             int skipkaro = 0 + solve(index+1, 1, prices, limit, dp);
//             profit = max(buykaro, skipkaro);
//         }
//         else{
//             int sellkaro = prices[index] + solve(index+1, 0, prices, limit-1, dp);
//             int skipKaro = 0 + skipKaro(index+1, 0, prices, limit, dp);
//             profit = max(sellkaro, skipKaro);
//         }
//         return dp[index][buy][limit] = profit;
//     }
//     int solveTab(vector<int>& prices){
//         int n = prices.size();
//         vector<vector<vector<int> > > dp(n+1, vector<vector<int> >(2, vector<int>(3,0)));

//         for(int index = n-1; index >= 0; index--){
//             for(int buy = 0; buy <= 1; buy++){
//                 for(int limit = 1; limit<=2; limit++){
//                     int profit = 0;
//                     if(buy){
//                         int buyKaro = -prices[index] + dp[index+1][0][limit];
//                         int skipKaro = 0 + dp[index+1][1][limit];
//                         profit = max(buyKaro, skipKaro);
//                     }
//                     else{
//                         int sellKaro = prices[index] + dp[index+1][1][limit-1];
//                         int skipKaro = 0 + dp[index+1][0][limit];
//                         profit = max(sellKaro, skipKaro);
//                     }
//                     dp[index][buy][limit] = profit;
//                 }
//             }
//         }
//         return dp[0][1][2];
//     }
//     int solveTab(vector<int>& prices){
//         int n = prices.size();

//         vector<vector<int> > curr(2, vector<int>(3,0));
//         vector<vector<int> > prev(2, vector<int>(3,0));

//         for(int index = n-1; index >= 0; index--){
//             for(int buy = 0; buy <= 1; buy++){
//                 for(int limit = 1; limit <= 2; limit++){
//                     int profit = 0;
//                     if(buy){
//                         int buyKaro = -prices[index] + next[0][limit];
//                         int skipKaro = 0 + next[1][limit];
//                         profit = max(buyKaro, skipKaro);
//                     }
//                     else{
//                         int sellKaro = prices[index] + next[1][limit-1];
//                         int skipKaro = 0 + next[0][limit];
//                         profit = max(sellKaro, skipKaro);
//                     }
//                     curr[buy][limit] = profit;
//                 }
//             }
//             next = curr;
//         }
//         return next[1][2];
//     }
//     int maxProfit(vector<int>& prices){
//         // int n = prices.size();
//         // vector<vector<vector<int> > > dp(n, vector<int> >(2, vector<int>(3, -1)));

//         // return solve(0, i, prices, 2, dp);

//         return solveTab(prices);
//     }
// }






// //Buy and sell stock part - 4
// class Solution{
//     public:
//     int solveTab(vector<int>& prices, int k){
//         int n = prices.size();

//         vector<vector<int> > curr(2, vector<int>(k+1,0));
//         vector<vector<int> > prev(2, vector<int>(k+1,0));

//         for(int index = n-1; index >= 0; index--){
//             for(int buy = 0; buy <= 1; buy++){
//                 for(int limit = 1; limit <= k; limit++){
//                     int profit = 0;
//                     if(buy){
//                         int buyKaro = -prices[index] + next[0][limit];
//                         int skipKaro = 0 + next[1][limit];
//                         profit = max(buyKaro, skipKaro);
//                     }
//                     else{
//                         int sellKaro = prices[index] + next[1][limit-1];
//                         int skipKaro = 0 + next[0][limit];
//                         profit = max(sellKaro, skipKaro);
//                     }
//                     curr[buy][limit] = profit;
//                 }
//             }
//             next = curr;
//         }
//         return next[1][k];
//     }
//     int solve(int index, int operationNo, int k, vector<int>& prices, vector<int>& dp){
//         if(index == prices.size()){
//             return 0;
//         }
//         if(operationNo == 2*k){
//             return 0;
//         }
//         if(dp[index][operationNo] != -1){
//             return dp[index][operationNo];
//         }
//         int profit = 0;
//         if(operationNo%2 == 0){
//             //buy allowed
//             int buyKaro = -prices[index] + solve(index+1, operationNo+1, k, prices, dp);
//             int skipKaro = 0 + solve(index+1, operationNo, k, prices, dp);
//             profit = max(buyKaro,skipKaro);
//         }
//         else{
//             int sellKaro = prices[index] + solve(index+1, operationNo+1, k, prices, dp);
//             int skipKaro = 0 + solve(index+1, operationNo, k , prices, dp);
//             profit = max(sellKaro, skipKaro);
//         }
//         return dp[index][operationNo] = profit;
//     }
//     int solveTab(int k, vector<int>& prices){
//         int n = prices.size();
//         vector<vector<int> > dp(n+1, vector<int>(2*k+1, 0));

//         for(int index = n-1; index >= 0; index--){
//             for(int operationNo = 0; operationNo < 2*K; operationNo++){
//                 int profit = 0;
//                 if(operationNo%2 == 0){
//                     int buyKaro = -prices[index] + dp[index+1][operationNo+1];
//                     int skipKaro = 0 + dp[index+1][operationNo];
//                     profit  = max(buyKaro, skipKaro);
//                 }
//                 else{
//                     int sellKaro = prices[index] + dp[index+1][operationNo+1];
//                     int skipKaro = 0 + dp[index+1][operationNo];
//                     profit = max(sellKaro, skipKaro);
//                 }
//                 dp[index][operationNo] = profit;
//             }
//         }
//         return dp[0][0];
//     }
//     int solveTab(int k, vector<int>& prices){
//         int n = prices.size();

//         vector<int> > curr(2*k+1,0);
//         vector<int> > next(2*k+1,0);

//         for(int index = n-1; index >= 0; index--){
//             for(int operationNo = 0; operationNo <= 1; operationNo++){
//                     int profit = 0;
//                     if(operationNo%2 == 0){
//                         int buyKaro = -prices[index] + next[operationNo+1];
//                         int skipKaro = 0 + next[operationNo];
//                         profit = max(buyKaro, skipKaro);
//                     }
//                     else{
//                         int sellKaro = prices[index] + next[operationNo+1];
//                         int skipKaro = 0 + next[operationNo];
//                         profit = max(sellKaro, skipKaro);
//                     }
//                     curr[operationNo] = profit;
//                 }
//             }
//             next = curr;
//         }
//         return next[0];
//     }
//     int maxProfit(int k, vector<int>& prices){
//         // return solveTab(prices, k);

//         // int n = prices.size();+
//         // vector<vector<int> > dp(n, vector<int>(2*k, -1));
//         // return solve(0, 0, k, prices, dp);

//         return solveTab(k, prices);
//     }
// }





// //Best time to buy and sell stock with transcation fee
// int solveTab(vector<int>& prices, int fee){
//         int n = prices.size();

//         vector<int> curr(2,0);
//         vector<int> prev(2, 0);
        
//         for(int index = n-1; index >= 0; index--){
//             for(int buy = 0; buy <= 1; buy++){
//                 int profit = 0;
//                 if(buy){
//                     int buykaro = -prices[index] + next[0];
//                     int skipkaro = 0 + next[1];
//                     profit = max(buykaro, skipkaro);
//                 }
//                 else{
//                     int sellkaro = prices[index] + next[1] - fee;
//                     int skipkaro = 0 + next[0];
//                     profit = max(sellkaro, skipkaro);
//                 }
//                 curr[buy] = profit;
//             }
//             next = curr;
//         }
//         return next[1];
// }
// int maxProfit(vector<int>& prices, int fee){
//     return solveTab(prices, fee);
// }




// //Longest Common Subsequence
// class Solution{
//     public:
//     int solve(string& a, string& b, int i, int j, vector<vector<int>& dp){
//         //base case
//         if(i == a.length()){
//             return 0;
//         }
//         if(j == b.length()){
//             return 0;
//         }
//         if(dp[i][j] != -1){
//             return dp[i][j];
//         }

//         int ans = 0;
//         if(a[i] == b[j]){
//             ans = 1 + solve(a, b, i+1, j+1, dp);
//         }
//         else{
//             ans = max(solve(a, b, i+1, j, dp), solve(a, b, i, j+1, dp));
//         }
//         return dp[i][j] = ans;
//     }
//     int solveTab(string a, string b){
//         vector<int> curr(b.length()+1, 0);
//         vector<int> next(b.length()+1, 0);

//         for(int i=a.length()-1; i>=0; i--){
//             for(int j=b.length()-1; j>=0; j--){
//                 int ans = 0;
//                 if(a[i] == b[j]){
//                     ans = 1 + next[j+1];
//                 }
//                 else{
//                     ans = max(next[j], curr[j+1]);
//                 }
//                 curr[j] = ans;
//             }
//             next = curr;
//         }
//         return next[0];
//     }
//     int longestCommonSubsequence(string text1, string text2){
//         // vector<vector<int> > dp(text1.length(), vector<int>(text2.length(), -1));
//         // return solve(text1, text2, 0, 0, dp);

//         return solveTab(text1, text2);
//     }
// };





// //Longest Palindromic Subsequence
// class Solution{
//     public:
//     int solveTab(string a, string b){
//         vector<int> curr(b.length()+1, 0);
//         vector<int> next(b.length()+1, 0);

//         for(int i=a.length()-1; i>=0; i--){
//             for(int j=b.length()-1; j>=0; j--){
//                 int ans = 0;
//                 if(a[i] == b[j]){
//                     ans = 1 + next[j+1];
//                 }
//                 else{
//                     ans = max(next[j], curr[j+1]);
//                 }
//                 curr[j] = ans;
//             }
//             next = curr;
//         }
//         return next[0];
//     }
//     int longestPalindromeSubseq(string s){
//         string revStr = s;
//         reverse(revStr.begin(), revStr.end());
//         int ans = solveTab(s, revStr);
//         return ans;
//     }
// };





// //Edit distance
// class Solution{
//     public:
//     int solve(string& a, string& b, int i, int j, vector<vector<int> >& dp){
//         //base case
//         if(i == a.length()){
//             return b.length()-j;
//         }
//         if(j == b.length()){
//             return a.length()-i;
//         }
//         if(dp[i][j] != -1){
//             return dp[i][j];
//         }
//         int ans = 0;
//         if(a[i] == b[j]){
//             return solve(a, b, i+1, j+1, dp);
//         }
//         else{
//             //insert
//             int insertAns = 1 + solve(a, b, i, j+1, dp);
//             //delete
//             int deleteAns = 1 + solve(a, b, i+1, j, dp);
//             //replace
//             int replaceAns = 1 + solve(a, b, i+1, j+1, dp);

//             ans = min(insertAns, min(deleteAns, replaceAns));
//         }
//         return dp[i][j] = ans;
//     }
//     int solveTab(string a, string b){
//         vector<vector<int> > dp(a.length()+1, vector<int>(b.length()+1, 0))
//             for(int j=0; j<b.length(); j++){
//                 dp[a.length()][j] = b.length()-j;
//             }
//             for(int i=0; i<a.length; i++){
//                 dp[i][b.length()] = a.length()-i;
//             }

//             for(int i=a.length()-1; i>=0; i--){
//                 for(int j=b.length()-1; j>=0; j--){
//                     int ans = 0;
//                     if(a[i]==b[j]){
//                         ans = dp[i+1][j+1];
//                     }
//                     else{
//                         //insert 
//                         int insertAns = 1 + dp[i][j+1];
//                         //delete
//                         int deleteAns = 1 + dp[i+1][j];
//                         //replace
//                         int replaceAns = 1 + dp[i+1][j+1];

//                         ans = min(insertAns, min(deleteAns, replaceAns));
//                     }
//                     dp[i][j] = ans;
//                 }
//             }
//         return dp[0][0];
//     }
//     int solveTab(string a, string b){
//         // vector<vector<int> > dp(a.length()+1, vector<int>(b.length()+1, 0))

//         vector<int> curr(b.length()+1, 0);
//         vector<int> next(b.length()+1, 0);

//             for(int j=0; j<b.length(); j++){
//                 next[j] = b.length()-j;
//             }

//             for(int i=a.length()-1; i>=0; i--){
//                 for(int j=b.length()-1; j>=0; j--){

//                     //catch here -> base case se mila yhe
//                     curr[b.length()] = a.length()-i;
//                     int ans = 0;
//                     if(a[i]==b[j]){
//                         ans = next[j+1];
//                     }
//                     else{
//                         //insert 
//                         int insertAns = 1 + curr[j+1];
//                         //delete
//                         int deleteAns = 1 + next[j];
//                         //replace
//                         int replaceAns = 1 + next[j+1];

//                         ans = min(insertAns, min(deleteAns, replaceAns));
//                     }
//                     curr[j] = ans;
//                 }
//                 next = curr;
//             }
//         return next[0];
//     }
//     int minDistance(string word1, string word2){
//         // vector<vector<int> > dp(word1.length(), vector<int>(word2.length(), -1));
//         // return solve(word1, word2, 0, 0, dp);

//         if(word1.length() == 0){
//             return word2.length();
//         }
//         if(word2.length() == 0){
//             return word1.length();
//         }
//         return solveTab(word1, word2);
//     }
// };





// //Maximum rectangle with all 1's   or Maximal Rectangle
// class Solution{
//     public:
//     vector<int> nextSmaller(vector<int> arr){
//         stack<int> s;
//         s.push(-1);

//         int n = arr.size();
//         vector<int> ans(n);

//         for(int i=n-1; i>=0; i--){
//             int item = arr[i];

//             while(s.top() != -1 && arr[s.top()] >= temp){
//                 s.pop();
//             }

//             //push in ans
//             if(s.top() != -1){
//                 ans[i] = n;
//             }
//             else{
//                 ans[i] = s.top();
//             }
//             s.push(i);
//         }
//         return ans;
//     }
//     vector<int> prevSmaller(vector<int> arr){
//         stack<int> s;
//         s.push(-1);

//         int n = arr.size();
//         vector<int> ans(n);

//         for(int i=0; i<n; i++){
//             int item = arr[i];

//             while(s.top() != -1 && arr[s.top()] >= item){
//                 s.pop();
//             }

//             //push in ans
//             ans[i] = s.top();
//             s.push(i);
//         }
//         return ans;
//     }
//     int longestArea(vector<int> arr){
//         vector<int> prev = prevSmaller(arr);
//         vector<int> next = nextSmaller(arr);

//         int maxArea = INT_MIN;

//         for(int i=0; i<arr.size; i++){
//             int length = arr[i];
//             int breadth = next[i] - prev[i] - 1;
//             int newArea = length*breadth;
//             maxArea = max(maxArea, newArea);
//         }
//         return maxArea;
//     }
//     int maximalRectangle(vector<vector<char>>& matrix){
//         int maxi = INT_MIN;
//         vector<int> histogram(matrix[0].size(), 0);

//         for(int i=0; i<matrix.size(); i++){
//             //to create histogram array
//             for(int j=0; j<height.size(); j++){
//                 if(matrix[i][j] == '1'){
//                     histogram[j]++;
//                 }
//                 else{
//                     histogram[j] = 0;
//                 }
//             }
//             maxi = max(maxi, largestArea(histogram));
//         }
//         return maxi;
//     }
// };






// //Wildcard Pattern Matching
// class Solution{
//     public:
//     bool solve(string& str, string& pattern, int i, int j){
//         //base case
//         if(i<0 && j<0){
//             return true;
//         }
//         if(i>=0 && j<0){
//             return false;
//         }

//         if(i<0 && j>=0){
//             for(int k=0; k<=j; k++){
//                 if(pattern[k] != '*'){
//                     return false;
//                 }
//             }
//             return true;
//         }

//         //match
//         if(str[i] == pattern[j] || pattern[j] == '?'){
//             return solve(str, pattern, i-1, j-1);
//         }
//         else if(pattern[j] == '*'){
//             return (solve(str, pattern, i-1, j) || solve(str, pattern, i, j-1));
//         }
//         else{
//             return false;
//         }
//     }
//     bool solve(string& str, string& pattern, int i, int j, vector<vector<int> >& dp){
//         //base case
//         if(i==0 && j==0){
//             return true;
//         }
//         if(i>0 && j==0){
//             return false;
//         }

//         if(i==0 && j>0){
//             for(int k=1; k<=j; k++){
//                 if(pattern[k-1] != '*'){
//                     return false;
//                 }
//             }
//             return true;
//         }

//         if(dp[i][j] != -1){
//             return dp[i][j];
//         }

//         //match
//         if(str[i-1] == pattern[j-1] || pattern[j-1] == '?'){
//             return dp[i][j] = (str, pattern, i-1, j-1, dp);
//         }
//         else if(pattern[j-1] == '*'){
//             return dp[i][j] = (solve(str, pattern, i-1, j, dp) || solve(str, pattern, i, j-1, dp));
//         }
//         else{
//             return false;
//         }
//     }
//     bool solveTab(string str, string pattern){
//         vector<vector<int> > dp(str.length()+1, vector<int> (pattern.length()+1, 0));
//         dp[0][0] = true;

//         for(int j=1; j<=pattern.length(); j++){
//             bool flag = true;
//             for(int k=1; k<=j; k++){
//                 if(pattern[k-1] != '*'){
//                     flag = false;
//                     break;
//                 }
//             }
//             dp[0][j] = flag;
//         }
//         for(int i=1; i<=str.length(); i++){
//             for(int j=1; j<=pattern.length(); j++){
//                 if(str[i-1] == pattern[j-1] || pattern[j-1] == '?'){
//                     dp[i][j] = dp[i-1][j-1];
//                 }
//                 else if(pattern[j-1] == '*'){
//                     dp[i][j] = (dp[i-1][j] || dp[i][j-1]);
//                 }
//                 else{
//                     dp[i][j] = false;
//                 }
//             }
//         }
//         return dp[str.length()][pattern.length()];
//     }
//     bool solveTab(string str, string pattern){
//         // vector<vector<int> > dp(str.length()+1, vector<int> (pattern.length()+1, 0));

//         vector<int> prev(pattern.length()+1, 0);
//         vector<int> curr(pattern.length()+1, 0);

//         prev[0] = true;

//         for(int j=1; j<=pattern.length(); j++){
//             bool flag = true;
//             for(int k=1; k<=j; k++){
//                 if(pattern[k-1] != '*'){
//                     flag = false;
//                     break;
//                 }
//             }
//             prev[j] = flag;
//         }
//         for(int i=1; i<=str.length(); i++){
//             for(int j=1; j<=pattern.length(); j++){
//                 if(str[i-1] == pattern[j-1] || pattern[j-1] == '?'){
//                     curr[j] = prev[j-1];
//                 }
//                 else if(pattern[j-1] == '*'){
//                     curr[j] = (prev[j] || curr[j-1]);
//                 }
//                 else{
//                     curr[j] = false;
//                 }
//             }
//             prev = curr;
//         }
//         return prev[pattern.length()];
//     }
//     bool isMatch(string s, string p){
//         // return solve(s, p, s.length()-1, p.length()-1);

//         // vector<vector<int> > dp(s.length(), vector<int>(p.length(), -1));
//         // return solve(s, p, s.length()-1, p.length()-1, dp);

//         return solveTab(s, p);
//     }
// };