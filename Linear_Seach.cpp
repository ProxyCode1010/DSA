// #include<iostream>
// using namespace std;
// bool search(int arr[],int n,int key){
//     for(int i = 0; i<n; i++){
//         if(arr[i]== key){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[10]= {432,555,45,1,5,1,55,78,51,54};
//     cout<<"Enter the element to search for"<<endl;
//     int key;
//     cin>>key;
//     bool found = search(arr, 10, key);
//     if(found){
//         cout<<"Key is present";
//     }
//     else{
//         cout<<"Key is absent";
//     }
//     return 0;
// }


// #include<iostream>                      //Doubt how to found index if element is same 
// using namespace std;
// bool search(int arr[],int n,int key){
//     for(int i = 0; i<n; i++){
//         if(arr[i]== key){
//             cout<<"Element found at index "<<i<<endl;
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[10]= {432,555,45,1,5,1,55,78,51,54};
//     cout<<"Enter the element to search for"<<endl;
//     int key;
//     cin>>key;
//     bool found = search(arr, 10, key);
//     if(found){
//         cout<<"Key is present";
//     }
//     else{
//         cout<<"Key is absent";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void reverse(int arr[], int n){
//     int start = 0;
//     int end = n-1;
//     while(start<=end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// void printArray(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[6] = { 1,4,54,64,746,-846};
//     int brr[5] = { 2,433,546,464,6};
//     reverse(arr, 6);
//     reverse(brr, 5);
//     printArray(arr, 6);
//     printArray(brr, 5);
//     return 0;
// }


//Sum of array
// #include<iostream>
// using namespace std;
// void Sum_Array(int arr[], int n){
//     int sum = 0;
//     for(int i = 0; i<n; i++){
//         sum = sum + arr[i];
//     }
//     cout<<sum<<endl;
// }
// int main(){
//     int arr[6] = { 1,2,1,2,3,-2};
//     int brr[5] = { 2,433,546,464,6};
//     Sum_Array(arr, 6);
//     Sum_Array(brr, 5);
//     return 0;
// }