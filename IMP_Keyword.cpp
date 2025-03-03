// #include<iostream>
// using namespace std;
// #define pi 3.14         //Defining macro
// int main(){
//     int r = 3;
//    // double pi = 3.14;
//     double area = pi * r * r;
//     cout<<"Area is "<<area<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void a(int& i){   //Reference is passing here not a copy known as reference variable
//     char ch = 'a';
//     cout<<i<<endl;
// }
// void b(int& i){
//     cout<<i<<endl;
// }
// int main(){
//     int i = 5;
//     a(i);
//     { 
//         int i = 2;
//         cout<<i<<endl;
//     }
//     cout<<i<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int score = 15;
// void a(int& i){
//     cout<<score<<" in a "<<endl;
//     score++;   //Its change the variable value globally
//     char ch = 'a';
//     cout<<i<<endl;
//     //b(i);  Throwing error
// }
// void b(int& i){
//     cout<<score<<" in b "<<endl;
//     cout<<i<<endl;
// }
// int main(){
//     cout<<score<<" in main "<<endl;
//     int i = 5;
//     a(i);
//     b(i);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 1, b = 2;
//     int ans = 0;
//     // if(a>b){
//     //     ans = a;
//     // }
//     // else{ 
//     //     ans = b;
//     // }                //We convert this simple conditional statement in ternary format in single line

//     ans = (a>b)? a : b;
//     cout<<ans<<endl;
// }


// #include<iostream>
// using namespace std;
// int getMax(int& a, int& b){    //This memory refernce save memory by not storing copy of thatone
//     return (a>b) ? a : b;
// }
// int main(){
//     int a = 1;
//     int b = 2;
//     int ans = 0;
//     ans = getMax(a,b);
//     cout<<ans<<endl;
    
//     a = a+3;
//     b = b+1;
//     ans = getMax(a,b);
//     cout<<ans<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// inline int getMax(int& a, int& b){    //This memory refernce save memory andl inline statement help in convert function in simple macro type not using any space in memory but its applicable only in single line condition or sometime in 2 line conditon.
//     return (a>b) ? a : b;
// }
// int main(){
//     int a = 1;
//     int b = 2;
//     int ans = 0;
//     ans = getMax(a,b);
//     cout<<ans<<endl;
    
//     a = a+3;
//     b = b+1;
//     ans = getMax(a,b);
//     cout<<ans<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void print(int arr[], int n, int start){
//     for(int i = start; i<n; i++){
//         cout<<arr[i]<<endl;
//     }
//     cout<<endl;
// }
// void print1(int arr[], int n, int start = 0){  //default it start with start = 0 if we not supply during function calling 
//     for(int i = start; i<n; i++){
//         cout<<arr[i]<<endl;
//     }
//     cout<<endl;
// }
// void print2(int arr[], int n = 0, int start = 0){  //default it start with start = 0 if we not supply during function calling 
//     for(int i = start; i<n; i++){
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;
//     print(arr, size, 0);
//     print1(arr, size, 3);
//     print2(arr, size, 2);
// }