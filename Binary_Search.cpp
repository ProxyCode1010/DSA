// //Binary Search
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[], int n, int key){
//     int start = 0;
//     int end = n-1;
//     int mid = start + (end-start)/2;  //This is right method for find mid thatone exceeds their int range when start = (2^31)-1 and end = (2^31)-1
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         //Go to right
//         if(key>arr[mid]){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return -1;
// }
// int main(){
//     int even[6] = {1,2,3,4,5,6};
//     int odd[5] = {1,2,3,4,5};
//     int key = 3;
//     int evenIndex = binarySearch(even, 6, key);
//     cout<<"Index of 3 is "<<evenIndex<<endl;
//     int oddIndex = binarySearch(even, 5, key);
//     cout<<"Index of 3 is "<<oddIndex<<endl;    
//     return 0;
// }


// //First and Last Position of an element in sorted array 
// #include<iostream>
// using namespace std;
// int startPosition(int arr[], int n, int key){  --Must be check array is sorted or not
//     int start = 0;
//     int end = n-1;
//     int ans = -1;
//     int mid = start + (end-start)/2;  //This is right method for find mid thatone exceeds their int range when start = (2^31)-1 and end = (2^31)-1
//     while(start<=end){
//         if(arr[mid]==key){
//             ans = mid;
//             end = mid-1;
//         }
//         //Go to right
//         else if(key>arr[mid]){
//             start = mid+1;
//         }
//         //Go to left
//         else if(key<arr[mid]){
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return ans;
// }
// int lastPosition(int arr[], int n, int key){
//     int start = 0;
//     int end = n-1;
//     int ans = -1;
//     int mid = start + (end-start)/2;  //This is right method for find mid thatone exceeds their int range when start = (2^31)-1 and end = (2^31)-1
//     while(start<=end){
//         if(arr[mid]==key){
//             ans = mid;
//             start = mid+1;
//         }
//         //Go to right
//         else if(key>arr[mid]){
//             start = mid+1;
//         }
//         //Go to left
//         else if(key<arr[mid]){
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return ans;
// }
// int main(){
//     int even[5] = {1,2,2,2,5};
//     int odd[5] = {1,2,2,2,5};
//     int firstOccurance = startPosition(even, 6, 2);
//     cout<<"2 start from index is "<<firstOccurance<<endl;
//     int lastOccurances = lastPosition(even, 6, 2);
//     cout<<"2 end from index is "<<lastOccurances<<endl;
//     //Total number of occurance
//     int totalOccurances = (lastOccurances - firstOccurance)+1;
//     cout<<"Total number of occurances : "<<totalOccurances;
//     return 0;
// } 


//Total number of Occurances (Rightmost index - leftmost index + 1)


//Peak index in a Mountain Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4] = {3,4,5,1};
//     int n = sizeof(arr)/sizeof(int);
//    // cout<<n;
//     int start = 0;
//     int end = n - 1;
//     int mid = start + (end-start)/2;
//     while(start<end){
//         if(arr[mid] < arr[mid+1]){
//             start = mid+1;
//         }
//         else{
//             end = mid;
//         }
//         mid = start + (end-start)/2;
//     }
//     cout<<start;
// }


// //Find pivot in an array
// #include<iostream>
// using namespace std;
// int getPivot(int arr[], int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     while(s<e){
//         if(arr[mid] >= arr[0]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }
// int main(){
//     int arr[5] = {2,8,10,17,1};
//     cout<<"Pivot is "<<getPivot(arr, 5)<<endl;
// }


// //Find pivot index in an array
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int getPivotindex(vector<int>& arr){
//     int sum = 0;
//     int sum1 = 0;
//     unordered_map<int, int> leftsum;
//     unordered_map<int, int> rightsum;
//     for(int i=0; i<arr.size(); i++){
//         leftsum[i] = sum;
//         sum = sum + arr[i];
//     }
//     for(int j=arr.size()-1; j>=0; j--){
//         rightsum[j] = sum1;
//         sum1 = sum1 + arr[j];
//     }
//     for(int i=0; i<arr.size(); i++){
//         if(leftsum[i] == rightsum[i]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> arr = {2,1,-1};
//     int result = getPivotindex(arr);
//     cout<<result<<endl;
//     return 0;
// }


// //Search in Rotated Sorted Array
// #include<iostream>
// using namespace std;
// int getPivot(int arr[], int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     while(s<e){
//         if(arr[mid] >= arr[0]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }
// int binarySearch(int arr[], int s, int e, int key){
//     int start = s;
//     int end = e;
//     int mid = start + (end-start)/2;  //This is right method for find mid thatone exceeds their int range when start = (2^31)-1 and end = (2^31)-1
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         //Go to right
//         if(key>arr[mid]){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return -1;
// }
// int findPosition(int arr[], int n, int k){
//     int pivot = getPivot(arr, n);
//     if(k >= arr[pivot] && k <= arr[n-1]){
//         //BS on second line
//         return binarySearch(arr, pivot, n-1, k);
//     }
//     else{
//         //BS on first line
//         return binarySearch(arr, 0, pivot-1, k);
//     }
// }
// int main(){
//     int arr[7] = {4,5,6,7,0,1,2};
//     int n = 7;
//     int k = 2;
//     int result = findPosition(arr, n, k);
//     cout<<result;
// }


// //Find Square root using binary search                        DOUBT,,,,,,,,,,,,,,,,,,
// // 1. Without float part, 2. With float part
// //Without float part
// #include<iostream>
// using namespace std;
// long long int sqrt_Integer(int n){
//     int s = 0;
//     int e = n;
//     long long int mid = s + (e-s)/2;
//     long long int ans = -1;
//     while(s<=e){
//         long long int square = mid*mid;
//         if(square == n){
//             return mid;
//         }
//         if(square < n){
//             ans = mid;
//             s = mid - 1;
//         }
//         else{
//             e = mid-1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// //If we need to find floating part also than we include this part also in code
// double morePrecision(int n, int precision, int tempsol){
//     double factor = 1;
//     double ans = tempsol;
//     for(int i = 0; i<precision; i++){
//         factor = factor/10;
//           //0.1  0.01, 0.001 as like factor update
//         for(double j = ans; j*j<n; j = j+factor){
//             ans = j;
//         }
//     }
//     return ans;
// }
// int main(){ 
//     int n;
//     cout<<"Enter number which you want to find square root : "<<endl;
//     cin>>n;
//     int tempsol = sqrt_Integer(n);
//    // cout<<"My result is : "<<result<<endl;
//     cout<<"My result is : "<< morePrecision(n, 3, tempsol)<<endl;
//     return 0;
// }


// //Bank Allocation problem
// #include<iostream>
// using namespace std;
// bool isPossible(int arr[], int n, int m, int mid){
//     int studentCount = 1;
//     int pageSum = 0;
//     for(int i = 0; i<n; i++){
//         if(pageSum + arr[i] <= mid){
//             pageSum += arr[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount >m || arr[i] > mid){
//                 return false;
//             }
//             pageSum = arr[i];
//         }
//     }
//     return true;
// }
// int allocateBooks(int arr[], int n, int m){
//     int s = 0;
//     int sum = 0;
//     for(int i = 0; i<n; i++){
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
//     while(s<=e){
//         if(isPossible(arr, n, m, mid)){
//             ans = mid;
//             e = mid-1;
//         }
//         else{
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     int arr[4] = {5,17,100,11};
//     int m = 4;
//     int n = 4;
//     int mid = 2;
//     int result = allocateBooks(arr, n, m);
//     cout<<result;
//     return 0;
// }


//Painter's Partition Problem                HOMEWORK


// //Aggresive Cows Problem
// #include<iostream>
// using namespace std;
// bool isPossible(int stalls[], int k, int mid){
//     int cowCount = 1;
//     int lastPos = stalls[0];
//     for(int i = 0; i<5; i++)
//         if(stalls[i]-lastPos >= mid){
//             cowCount++;
//             if(cowCount == k){
//                 return true;
//             }
//             lastPos = stalls[i];
//         }
//     }
//     return false;
// }
// int aggresiveCows(int stalls[], int k){
//    // sort(stalls.begin(), stalls.end());  not working now
//     int s = 0;
//     int maxi = -1;
//     for(int i = 0; i<5; i++){
//         maxi = max(maxi, stalls[i]);
//     }
//     int e = maxi;
//     int ans = -1;
//     int mid = s + (e-s)/2;
//     while(s<=e){
//         if(isPossible(stalls, k, mid)){
//             ans = mid;
//             s = mid+1;
//         }
//         else{
//             e = mid-1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     int stalls[5]= {1,3,5,7,8};
//     int k = 2;
//     int result = aggresiveCows(stalls, k);
//     cout<<result;
//     return 0;
// }