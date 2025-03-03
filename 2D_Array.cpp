// #include<iostream>
// using namespace std;
// int main(){
//     //Creating 2d array
//     int arr[3][4];
    
//     // //taking input -> row wise input
//     // for(int i=0; i<3; i++){
//     //     for(int j=0; j<4; j++){
//     //         cin>>arr[i][j];
//     //     }
//     // }

//     // //taking input -> row wise input
//     // for(int i=0; i<4; i++){
//     //     for(int j=0; j<3; j++){
//     //         cin>>arr[j][i];
//     //     }
//     // }

//     int arr1[3][4] = {1,2,3,4,5,6,7,8,9,0,1,2};
//     int arr2[3][4] = {{1,11,111,1111},{2,22,222,222},{3,33,333,3333}};
//     //Print
//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cout<<arr2[i][j]<<" ";
//         }
//         cout <<endl;
//     }
// }


// //Linear Search in 2d Array
// #include<iostream>
// using namespace std;
// bool isPresent(int arr[][4], int row, int col, int target){
//     for(int row=0; row<3; row++){
//         for(int col=0; col<4; col++){
//             if(arr[row][col] == target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//     cout<<"Enter element of an 2d array : ";
//     int arr[3][4];
    // for(int row=0; row<3; row++){
    //     for(int col=0; col<4; col++){
    //         cin >> arr[row][col];
    //     }
    // }
//     cout<<endl;
//     cout<<"Enter target : ";
//     int target;
//     cin>>target;
//     int result = isPresent(arr,3,4,target);
//     cout<<"My result is "<<result<<endl;
//     return 0;
// }


// //Row-Wise Sum
// #include<iostream>
// using namespace std;
// void printSum(int arr[][3]){
//     cout<<"Printing sum ->"<<endl;
//     for(int i=0; i<3; i++){
//         int sum = 0;
//         for(int j=0; j<3; j++){
//             sum += arr[i][j];
//         }
//         cout<< sum <<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[3][3];
//     cout<<"Enter element of an array ";
//     for(int row=0; row<3; row++){
//         for(int col=0; col<3; col++){
//             cin >> arr[row][col];
//         }
//     }
//     printSum(arr);
// }


// //Column-Wise Sum
// #include<iostream>
// using namespace std;
// void printSum(int arr[][3]){
//     cout<<"Printing sum ->"<<endl;
//     for(int i=0; i<3; i++){
//         int sum = 0;
//         for(int j=0; j<3; j++){
//             sum += arr[j][i];
//         }
//         cout<< sum <<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[3][3];
//     cout<<"Enter element of an array ";
//     for(int row=0; row<3; row++){
//         for(int col=0; col<3; col++){
//             cin >> arr[row][col];
//         }
//     }
//     printSum(arr);
// }


// //Largest Row Sum
// #include<iostream>
// using namespace std;
// int largestRowSum(int arr[][3]){
//     int maxi = INT16_MIN;
//     int rowIndex = -1;
//     for(int i=0; i<3; i++){
//         int sum = 0;
//         for(int j=0; j<3; j++){
//             sum += arr[i][j];
//         }
//         if(sum > maxi){
//             maxi = sum;
//             rowIndex = i;
//         }
//     }
//     cout<<"The maximum sum is "<<maxi<<endl;
//     cout<<endl;
//     return rowIndex;
// }
// int main(){
//     int arr[3][3];
//     cout<<"Enter element of an array ";
//     for(int row=0; row<3; row++){
//         for(int col=0; col<3; col++){
//             cin >> arr[row][col];
//             cout<<endl;
//         }
//     }
//     largestRowSum(arr);
// }





// //Print like a wave
// vector<int> wavePrint(vector<int>> arr, int nRows, int nCols){
//     vector<int> ans;
//     for(int col=0; col<nCols; col++){
//         if(col&1){
//             //odd index -> Bottom to top
//             for(int row=nRows-1; row>=0; row--){
//                 cout<<arr[row][col]<<" ";
//                 ans.push_back(arr[row][col]);
//             }
//         }
//         else{
//             //0 or even index->top to bottom
//             for(int row = 0; row<nRows; row++){
//                 cout<<arr[row][col]<<" ";
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }
//     return ans;
// }




//Multiply 3X3 matrix
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of columns"<<endl;
    cin>>cols;
    int arr1[rows][cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<"Enter element of arr1 index "<<i <<" "<< j <<" :"<<endl;
            cin>>arr1[i][j];
        }
    }
    int arr2[rows][cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<"Enter element at arr2 index "<<i <<" "<< j<<" :"<<endl;
            cin>>arr2[i][j];
        }
    }
    int result[9] = {0};  //for storing ans
    for(int k=0; k<9; k++){
        result[k] = k*9 + i*3 + j;
    }
    int arr2D[rows][cols]; // 2D array of size 3x3
    // Converting 1D array to 2D array
    for (int i = 0; i < 9; i++) {
        int row = i / cols;  // Calculate the row index
        int col = i % cols;  // Calculate the column index
        arr2D[row][cols] = result[i];
        // Display the element in the 2D array as it is being filled
        cout << arr2D[row][cols] << " "; // Display the current element

        // Print a new line after every row is filled
        if (cols == cols - 1) {
            cout << endl; // Move to the next line after each row
        }
    }
    return 0;
}