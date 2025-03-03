// #include<iostream>
// using namespace std;
// int main(){
//     // //declare
//     // int number[15];
//     // //accessing an array
//     // cout<<"Value at 14 index "<< number[14]<<endl;   //random value 
//     // //cout<<"Value at 20 index "<<number[20]<<endl;    //random value
//     // cout<< endl << " Everything is fine "<<endl << endl;

//     // //initialising an array
//     // int second[3] = {5,7,11};
//     // //accessing an element
//     // cout<<"Value at 2 index "<<second[2]<<endl;

//     // //intialising an array
//     // int third[15] = {2,7};
//     // int n = 15;
//     // cout<<"printing the array "<<endl;
//     // //print the array
//     // for(int i = 0; i<n; i++){
//     //     cout<<third[i]<<" ";
//     // }

//     // //initalising an array
//     // int fourth[10] = {0};
//     // int n = 10;
//     // cout<<"printing the array"<<endl;
//     // //print the array
//     // for(int i =0; i<n; i++){
//     //     cout<<fourth[i]<<" ";
//     // }    

//     // //initalising an array
//     // int fifth[10] = {1};
//     // int n = 10;
//     // cout<<"printing the array"<<endl;
//     // //print the array
//     // for(int i =0; i<n; i++){
//     //     cout<<fifth[i]<<" ";
//     // }    

//     //cout<< endl << "Everything is fine "<<endl <<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void printArray(int arr[], int size){
//     cout<<"Printing the array"<<endl;
//     //print the array
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int first[15] = {2,7};
//     int n = 15;
//     printArray(first, 15);
//     int firstsize = sizeof(first)/sizeof(int);
//     cout<<endl<<"Size of third is "<<firstsize <<endl;

//     int second[10] = {0};
//     n = 10;
//     printArray(second, 10);
//     return 0;
// }


//Max and Min of array
// #include<iostream>
// using namespace std;
// // int getmax(int num[], int n){
// //     int max = INT16_MIN;
// //     for(int i = 0; i<n; i++){
// //         if(num[i]>max){
// //             max = num[i];
// //         }
// //     }
// //     //returning max value
// //     return max;
// // }
// // int getmin(int num[], int n){
// //     int min = INT16_MAX;
// //     for(int i = 0; i<n; i++){
// //         if(num[i]<min){
// //             min = num[i];
// //         }
// //     }
// //     //returning the min
// //     return min;
// // }
//       //Other method 
// // int getmax(int num[], int size){
// //     int maxi = INT16_MIN;
// //     for(int i = 0; i<size; i++){
// //         maxi = max(maxi, num[i]);
// //     }
// //     return maxi;
// // }
// // int getmin(int num[], int size){
// //     int mini = INT16_MAX;
// //     for(int i = 0; i<size; i++){
// //         mini = min(mini, num[i]);
// //     }
// //     return mini;
// // }
// int main(){
//     int size;
//     cin>>size;
//     int num[100];
//     //taken input in array
//     for(int i = 0; i<size; i++){
//         cin>>num[i];
//     }
//     cout<<"Maximum value is "<<getmax(num, size)<<endl;
//     cout<<"Minimum value is "<<getmin(num, size)<<endl;
//     return 0;
// }


//Updating an array
// #include<iostream>
// using namespace std;
// // //Array original value is update when we pass it to function
// // void update(int arr[], int arraysize){
// //     cout<<"Inside the function"<<endl;
// //     //updating array first position
// //     arr[0]= 120;
// //     //printing the array
// //     for(int i = 0; i<arraysize; i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<"Going back to main function"<<endl;;
// // }
// // int main(){
// //     int arr[3] = {1,34,24};
// //     int arraysize = sizeof(arr)/sizeof(int);
// //     update(arr, arraysize);
// //     for(int i=0; i<arraysize; i++){
// //         cout<<arr[i]<<endl;
// //     } cout<<endl;
//     return 0;
// }


//Swap Alternates
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {1,5,8,77,4,3};
//     // for(int i = 0; i<6; i++){
//     //     if(i+1 < 6){
//     //     swap(arr[i],arr[i+1]);
//     //     i++; }
//     // }
//          //without using swap function
//     // for(int i = 0; i<6; i++) {
//     //     int temp;
//     //     if(i+1 <6){
//     //     temp = arr[i];
//     //     arr[i] = arr[i+1];
//     //     arr[i+1] = temp;
//     //     i++; }
//     // }
//     for(int i = 0; i<6; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//Find Unique elements
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {1,2,2,1,1,3};
//     int ans = 0;
//     for(int i = 0; i<6; i++){
//         ans = ans^arr[i];
//     }
//     cout<<ans;
//     return 0;
// }


// //Find Duplicates
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]= {1,2,3,4,3};
//     int ans = 0;
//     //XOR int all array elements
//     for(int i = 0; i<5; i++){
//         ans = ans^arr[i];
//     }
//     //XOR(1, n-1)
//     for(int i = 1; i<5; i++){
//         ans = ans^i;
//     }
//     cout<<ans;
//     return 0;
// }


// //Array Intersection
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[5]= {1,2,3,14,45};
//     int arr2[5]= {12,13,14,15,16};
//        //IT THROUGH TIME LIMIT ERROR
//     // for(int i = 0; i<5; i++){
//     //     int element = arr1[i];
//     //     for(int j =0; j<5; j++){
//     //         if(element < arr2[j]){
//     //             break;
//     //         }
//     //         if(element == arr2[j]){
//     //             cout<<arr2[j];
//     //             arr2[j] = -2;
//     //             break;
//     //         }
//     //     }
//     // }
//        //LET'S TRY ANOTHER METHOD = IT'S BE RIGHT
//     // int i = 0, j = 0;
//     // while(i<5 && j<5){
//     //     if(arr1[i] == arr2[j]){
//     //         cout<<arr1[i];
//     //         i++;
//     //         j++;
//     //     }
//     //     else if(arr1[i] < arr2[j]){
//     //         i++;
//     //     }
//     //     else{
//     //         j++;
//     //     }
//     // }
// }


// //Pair Sum    == IT'S NOT IN SORTED ORDER FOR SORTED ORDER WE USE LATER SORT METHOD AND VECTOR
// #include<iostream>
// using namespace std;
// int main(){
//     int s = 5;
//     int arr[5]= {1,2,3,4,5};
//     for(int i = 0; i<5; i++){
//         for(int j = i+1; j<5; j++){
//             if(arr[i]+arr[j] == s){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//             }
//         }
//     }
// }


//Triplets with Given Sum  = IF ITS IN TLE THAN TRY TO FIND OPTIMISE SOLUTION
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]= {1,2,3,4,5};
//     int key = 10;
//     for(int i = 0; i<5; i++){
//         for(int j = i+1; j<5; j++){
//             for(int k = i+2; k<5; k++){
//                 if(arr[i]+arr[j]+arr[k] == key){
//                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//                 }
//             }
//         }
//     }
// }


// //Sort 0 1
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]= { 1,0,1,1,0};
//     int n = sizeof(arr)/sizeof(int);
//     int left = 0, right = n-1;
//     while(left<right){
//         while(arr[left] == 0 && left<right){
//             left++;
//         }
//         while(arr[right] == 1 && left<right){
//             right--;
//         }
//             //IF EXECUTION REACHES HERE IT MEANS arr[left]==1 && arr[right]==0
//         if(left<right){
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// //Reverse Array
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> reverse(vector<int> v){
//     int s = 0, e = v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }
// void print(vector<int> v){
//     for(int i = 0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
// }
// int main(){
//     vector<int> v;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);
//     vector<int> ans = reverse(v);
//     cout<<"Printing reverse array...."<<endl;
//     print(ans);
//     return 0;
// }


// //Merge Sorted Array
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
//     int i = 0, j = 0, k = 0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k++] = arr1[i++];
//         }
//         else{
//             arr3[k++] = arr2[j++];
//         }
//     }
//     //Copy first array k element
//     while(i<n){
//         arr3[k++] = arr1[i++];
//     }
//     //Copy second array remaining element
//     while(j<n){
//         arr3[k++] = arr2[j++];
//     }
// }
// void print(int ans[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }cout<<endl;
// }
// int main(){
//     int arr1[5] = {1,3,5,7,9};
//     int arr2[3] = {2,4,6};
//     int arr3[8] = {0};
//     merge(arr1, 5, arr2, 3, arr3);
//     print(arr3, 8);
//     return 0;
// }


// //Move Zeroes
// #include<iostream>
// using namespace std;
// void moveZeroes(int arr[],int n){
//     //Shift all non zero element to left
//     int nonZero = 0;
//     for(int j = 0; j<n; j++){
//         if(arr[j] != 0){
//             swap(arr[j], arr[nonZero]);
//             nonZero++;
//         }
//     }
// }
// void printArray(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// int main(){
//     int arr[5] = {1,0,0,3,12};
//     moveZeroes(arr,5);
//     printArray(arr,5);
//     return 0;
// }


// //Rotate Array                DOUBT...................................................................
// #include<iostream>
// #include<vector>
// using namespace std;
// void rotateArray(int arr1[], int k){
//     int temp = 0;
//     //vector<int> temp(n);
//     int nums[8];
//     for(int i = 0; i<arr1.size(); i++){
//         nums[(i+k)%arr1.size()] = arr1[i];
//     }
//     arr1 = nums;
// }
// void print(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     rotateArray(arr, 3);
//     print(arr, 5);
// }


// //Check if Sorted and Rotated array
// #include<iostream>
// using namespace std;
// int check(int arr[]){
//     int count = 0;
//     int n = 5;
//     for(int i = 1; i<n; i++){
//         if(arr[i-1] > arr[i]){
//             count++;
//         }
//     }
//     if(arr[n-1] > arr[0]){
//         count++;
//     }
//     return count<=1;
// }
// int main(){
//     int arr[5] = {3,4,5,1,2};
//     int result = check(arr);
//     cout<<"Return 1 if true else 0 : "<<result;
//     return 0;
// }


// //Add Arrays
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> reverse(vector<int> v){
//     int s = 0;
//     int e = v.size()-1;
//     while(s<e){
//         swap(v[s++],v[e--]);
//     }
//     return v;
// }
// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m){
//     int i = n-1;
//     int j = m-1;
//  //   int ans[4] = {0};
//     int carry = 0;
//     vector<int> ans;
//     while(i>=0 && j>=0){
//         int val1 = a[i];
//         int val2 = b[j];
//         int sum = val1 + val2 + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }
//     //First case
//     while(i>=0){
//         int sum = a[i] + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }
//     //Second case
//     while(j>=0){
//         int sum = b[j] + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         j--;
//     }
//     //Second case
//     while(carry!=0){
//         int sum = carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//     }
//     // //Print ans
//     return reverse(ans);
// }
// void printArray(vector<int>& arr){
//     for(int num : arr){
//         cout<<num<<" ";
//     }cout<<endl;
// }
// int main(){
//     vector<int> a = {1,2,3};
//     int n = 3;
//     vector<int> b= {9,3,4};
//     int m = 3;
//     vector<int> result =  findArraySum(a, n, b, m);
//     printArray(result);
//     return 0;
// }


//Char Array
// #include<iostream>
// using namespace std;
// int main(){
//     char name[20];
//     cout<<"Enter your name : "<<endl;
//     cin>>name;
//     cout<<"Your name is ";
//     cout<< name << endl;
//     name[2] = '\0';
//     cout<<"Your name is ";
//     cout<< name << endl;   
//     return 0;
// }






#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<int>& num, int k, int size){
    cout<<"Hello";
    string ans = "";
    for(int i=0; i<size; i++){
        ans = num[i];
        cout<<ans<<endl;
    }
        // int ans1 = stoi(ans);
        // cout<<ans1;
        // int finalans;
        // finalans = ans1 + k;
        // vector<int> ans2;
        // for(int i=0; i<finalans.length(); i++){
        //     ans2.push_back(finalans[i]);
        // }
        // return ans2;
    }
int main(){
    int num[3] = {1,2,4};
    int k = 5;
    cout<<"Hello welcome"<<endl;
    solve(num, k, 3);
    return 0;
}