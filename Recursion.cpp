// //Factorial
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     //base case
//     if(n == 0){
//         return 1;
//     }
//     // int smallerProblem =  factorial(n-1);
//     // int biggerProblem = n * smallerProblem;
//     // return biggerProblem;

//     return n * factorial(n-1);
// }
// int main(){
//     int n;
//     cin >> n;
//     int ans = factorial(n);
//     cout<<ans<<endl;
//     return 0;
// }


// //Power(2,n)
// #include<iostream>
// using namespace std;
// int power(int n){
//     //base case
//     if(n == 0){
//         return 1;
//     }
//     //recursive relation
//     // int smallerProblem =  power(n-1);
//     // int biggerProblem = 2 * smallerProblem;
//     // return biggerProblem;
//     //In single line
//     return 2 * power(n-1);
// }
// int main(){
//     int n;
//     cin >> n;
//     int ans = power(n);
//     cout<<ans<<endl;
//     return 0;
// }


// //Counting printing upto n
// #include<iostream>
// using namespace std;
// int print(int n){
//     //base case
//     if(n == 0){
//         return 1;
//     }
//     // cout<<n<<endl;  //In descending order
//     // print(n-1);
    
//     print(n-1);       //In ascending order
//     cout<<n<<endl;
//     return 0;
// }
// int main(){
//     int n;
//     cin >> n;
//     cout<<endl;
//     print(n);
//     return 0;
// }


// //Source to Destination
// #include<iostream>
// using namespace std;
// void reachDestination(int src, int dest){
//     cout<<"Now, source is "<<src<<" ans destination is "<<dest<<endl;
//     if(src == dest){
//         cout<<"He will come"<<endl;
//         return;
//     }
//     //processing
//     src++;
//     //recursive call
//     reachDestination(src, dest);
// }
// int main(){
//     int destination = 10;
//     int source = 1;
//     cout<<endl;
//     reachDestination(source, destination);
//     return 0;
// }


// //Count Ways to reach the N-th stairs     -- Leetcode solution but now throwing TLE further solve with the help of dp
// #include<iostream>
// using namespace std;
// int distinctwaystoReach(int n){
//     //base case
//     if(n < 0){
//         return 0;
//     }
//     if(n == 0){
//         return 1;
//     }
//     //recusive call
//     return distinctwaystoReach(n-1) + distinctwaystoReach(n-2);
// }
// int main(){
//     int n = 2;
//     int result = distinctwaystoReach(n);
//     cout<<result<<endl;
//     return 0;
// }
   // //or
// int countDistinctWayToClimbStair(long long nStairs){
//     //base case
//     if(nStairs<0){
//         return 0;
//     }
//     if(nStairs == 0){
//         return 1;
//     }
//     //R.C
//     int ans = countDistinctWayToClimbStair(nStairs-1) + countDistinctWayToClimbStair(nStairs-2);
//     return ans;
// }

// //Say Digit
// #include<iostream>
// using namespace std;
// void sayDigit(int n, string arr[]){
//     //base case
//     if(n == 0){
//         return;
//     }
//     //processing
//     int digit = n%10;
//     n = n/10;
//     cout<< arr[digit] <<" ";
//     sayDigit(n, arr);
//     cout<<"     "<< arr[digit] <<" ";            //In both case calling time differ(function call stack for breif discription)
// }
// int main(){
//     string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
//     int n;
//     cin>>n;
//     cout<<endl;
//     sayDigit(n, arr);
//     cout<<endl;
//     return 0;
// }


// //IS Sorted!!!!
// #include<iostream>
// using namespace std;
// bool isSorted(int *arr, int size){
//     //base case
//     if(size == 0 || size == 1){
//         return true;
//     }
//     if(arr[0] > arr[1]){
//         return false;
//     }
//     else{
//         return isSorted(arr+1, size-1);
//     }
// }
// int main(){
//     int arr[5] = {2,4,16,8,9};
//     int size = 5;
//     bool ans = isSorted(arr, size);
//     if(ans){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is not sorted"<<endl;
//     }
//     return 0;
// }


// //Get Sum
// #include<iostream>
// using namespace std;
// int getSum(int *arr, int size){
//     //base case
//     if(size == 0){
//         return 0;
//     }
//     if(size == 1){
//         return arr[0];
//     }
//     int remainingPart = getSum(arr+1, size-1);
//     int ans = arr[0] + remainingPart;
//     return ans;
// }
// int main(){
//     int arr[5] = {2,4,16,8,9};
//     int size = 5;
//     int ans = getSum(arr, size);
//     cout<<ans<<endl;
// }


// //Linear Search
// #include<iostream>
// using namespace std;
// void print(int arr[], int n){
//     cout<<"Size of array is "<<n<<endl;
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// bool linearSearch(int *arr, int size, int k){
//     //base case
//     if(size == 0){
//         return false;
//     }
//     if(arr[0] == k){
//         return true;
//     }
//     return linearSearch(arr+1, size-1, k);
// }
// int main(){
//     int arr[5] = {2,4,16,8,9};
//     int size = 5;
//     int k = 18;
//     print(arr, size);
//     bool ans = linearSearch(arr, size, k);
//     cout<<ans;
// }


// //Binary Search
// #include<iostream>
// using namespace std;
// void print(int arr[], int s, int e){
//     for(int i = s; i<= e; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// bool binarySearch(int *arr, int s, int e, int k){
//     cout<<endl;
//     print(arr, s, e);
//     //base case
//     if(s > e){
//         return false;
//     }
//     int mid = s + (e-s)/2;
//     if(arr[mid] == k){
//         return true;
//     }
//     if(arr[mid] < k){
//         return binarySearch(arr, mid+1, e, k);
//     }
//     else{
//         return binarySearch(arr, s, mid-1, k);
//     }
// }
// int main(){
//     int arr[5] = {2,4,6,8,10};
//     int size = 5;
//     int k = 12;
//    // bool ans = binarySearch(arr, 0, size-1, k);
//     cout<<binarySearch(arr, 0, size-1, k)<<endl;
// }


// //Reverse string
// #include<iostream>
// using namespace std;
// void reverse(string& str, int i, int j){    //for printing reverse string we must have to pass address of that one not a memory
//     //base case
//     if(i>j){
//         return;
//     }
//     swap(str[i], str[j]);
//     i++;
//     j--;
//     //Recursive call
//     reverse(str, i, j);
// }
// int main(){
//     string name = "hello";
//     cout<<endl;
//     reverse(name, 0, name.length()-1);
//     cout<<endl;
//     cout<<name<<endl;
//     return 0;
// }


// //Check Palindrome
// #include<iostream>
// using namespace std;
// bool checkPalindrome(string str, int i, int j){
//     if(i>j){
//         return true;
//     }
//     if(str[i] != str[j]){
//         return false;
//     }
//     else{
//         //Recursive call
//         return checkPalindrome(str, i+1, j-1);
//     }
// }
// int main(){
//     string name = "aabbcdcbbaa";
//     cout<<endl;
//     bool isPalindrome = checkPalindrome(name, 0, name.length()-1);
//     if(isPalindrome){
//         cout<<"Yhaa! It's be a palindrome";
//     }
//     else{
//         cout<<"Sorry, It's not be a palindrome";
//     }
//     return 0;
// }


// //Power
// #include<iostream>
// using namespace std;
// int power(int a, int b){
//     if(b == 0){
//         return 1;
//     }
//     if(b == 1){
//         return a;
//     }
//     //Recursive call
//     int ans = power(a, b/2);
//     //If b is even
//     if(b%2 == 0){
//         return ans*ans;
//     }
//     else{
//         //If b is odd
//         return a*ans*ans;
//     }
// }
// int main(){
//     int a, b;
//     cin>>a>>b;
//     cout<<endl;
//     int ans = power(a, b);
//     cout<<"Answer is "<<ans<<endl;
//     return 0;
// }


// //Sort Array == Bubble sort
// #include<iostream>
// using namespace std;
// void sortArray(int *arr, int n){
//     //base case - already sorted
//     if(n == 0 || n == 1){
//         return;
//     }
//     for(int i=0; i<n-1; i++){
//         if(arr[i] > arr[i+1]){
//             swap(arr[i], arr[i+1]);
//         }
//     }
//     sortArray(arr, n-1);
// }
// int main(){
//     int arr[5] = {2,5,23,5,35};
//     sortArray(arr, 5);
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     return 0;
// }


//Subsets --Leetcode


// //Subsequences of String
// #include<iostream>
// #include<vector>
// using namespace std;
// void solve(string str, string output, int index, vector<string>& ans){   //must be pass address not copy
//     //base case
//     if(index >= str.length()){
//         ans.push_back(output);
//         return;
//     }
//     //exclude
//     solve(str, output, index+1, ans);
//     //include
//     char element = str[index];
//     output.push_back(element);
//     solve(str, output, index+1, ans);
// }
// int main(){
//     string str = "abc";
//     vector<string> ans;
//     string output = "";
//     int index = 0;
//     solve(str,output, index, ans);
//     for(string i : ans){
//         cout<<i<<" ";
//     }cout<<endl;
//    // cout<< <<endl;
//     return 0;
// }


// //Rat in maze problem - 1
// class Solution{
//     private:
//     bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> ....){
//         if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && m[x][y] == 1){
//             return true;
//         } 
//         else{
//             return false;
//         }
//     }
//     void solve(vector<vector<int>> &m, int n, vector<string>& ans, int x, int y, vector<vector<int>> visited, string path){
//         //you have reached x,y here

//         //base case
//         if(x == n-1 && y = n-1){
//             ans.push_back(path);
//             return;
//         }
//         visited[x][y] = 1;
        
//         //4 choices = D, L, R, U
//         //down
//         int newx = x-1;
//         int newy = y;
//         if(isSafe(newx, neewy, n, visited, m)){
//             path.push_back('D');
//             solve(m, n, ans, newx, newy, visited, path);
//             path.push_back();
//         }
//         //left
//         newx = x;
//         newy = y-1;
//         if(isSafe(newx, neewy, n, visited, m)){
//             path.push_back('L');
//             solve(m, n, ans, newx, newy, visited, path);
//             path.push_back();
//         }
//         //Right
//         newx = x-1;
//         newy = y;
//         if(isSafe(newx, neewy, n, visited, m)){
//             path.push_back('U');
//             solve(m, n, ans, newx, newy, visited, path);
//             path.push_back();
//         }
//         //UP
//         newx = x-1;
//         newy = y;
//         if(isSafe(newx, neewy, n, visited, m)){
//             path.push_back('U');
//             solve(m, n, ans, newx, newy, visited, path);
//             path.push_back();
//         }
//     }
//     public:
//     vector<string> findPath(vector<vector<int>> &m, int n){
//         vector<string> ans;
//         if(n[0][0] == 0){
//             return ans;
//         }
//         int srcx = 0;
//         int srcy = 0;

//         vector<vector<int>> visited = n;
//         //initialise with 0
//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 visited[i][j] = 0;
//             }
//         }
//         string path = "";
//         solve(m, n, ans, srcx, srcy, visited, path);
//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// }