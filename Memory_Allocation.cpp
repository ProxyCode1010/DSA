// #include<iostream>
// using namespace std;
// void update(int& n){
//     n++;
// }
// void update2(int n){   //Here call by value takes place value not update outside the function
//     n++;
// }
// int& func(int a){
//     int num = a;
//     int& ans = num;
//     return ans; 
// }
// int* fun(int n){
//     int* ptr = &n;
//     return ptr;
// }
// int main(){
//     // int i = 5;
//     // //Create a ref variable
//     // int &j = i;
//     // cout<<i<<endl;
//     // i++;
//     // cout<<i<<endl;
//     // j++;
//     // cout<<i<<endl;
//     // cout<<j<<endl;

//     int n = 5;
//     cout<<"Before "<<n<<endl;
//     update2(n);
//     cout<<"After "<<n<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     char ch = 's';
//     cout<<sizeof(ch)<<endl;
//     char* c = &ch;
//     cout<<sizeof(c)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int getSum(int *arr, int n){
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     //variable size array
//     int *arr = new int[n];  //Memory alloacted in heap
//     //taking input in array
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int ans = getSum(arr, n);
//     cout<<"Answer is "<<ans<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     //Memory is always allocated at compile time 
//     //Types of memory = stack, heap
//     //In stack - memory is deallocated after the loop
//     while(true){
//         int i = 0;
//     }
//     //In heap = pointer memory is deallocated but heap memory is not deallocated(pointer - stack)
//     while(true){
//         int *ptr = new int; //new for heap
//     }
//     return 0;
// }


// //2d-Array(Row = Column) - Memory Allocataion
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     //Creating a 2D array
//     int **arr = new int*[n];
//     for(int i=0; i<n; i++){
//         arr[i] = new int[n];
//     }
//     //Taking input
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin>>arr[i][j];
//         }
//     }
//     //Taking output
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     cout<<endl;
// }


// //2d-Array(Row != Column) - Memory Allocataion
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cin>>row;
//     int col;
//     cin>>col;
//     //Creating a 2D array
//     int **arr = new int*[row];
//     for(int i=0; i<row; i++){
//         arr[i] = new int[col];
//     }
//     //Taking input
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>arr[i][j];
//         }
//     }
//     //Taking output
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }

//     //Deallocates heap memory
//     for(int i=0; i<row; i++){
//         delete [] arr[i];
//     }
//     delete []arr;
//     cout<<endl;
// }