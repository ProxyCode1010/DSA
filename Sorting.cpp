// //Selection Sort
// #include<iostream>
// using namespace std;
// void selectionSort(int arr[], int n){
//     for(int i = 0; i < n-1; i++){
//         int minIndex = i;
//         for(int j = i+1; j<n; j++){
//             if(arr[j] < arr[minIndex]){
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }
// void printresult(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[7] = {24,5,36,74,78,85,85};
//     int size = sizeof(arr)/sizeof(int);
//     selectionSort(arr, size);
//     cout<<"Sorted array : \n";
//     printresult(arr, size);
//     return 0;
// }


// //Bubble Sort
// #include<iostream>
// using namespace std;
// void bubbleSort(int arr[], int n){
//     for(int i = 1; i<n; i++){
//         //for round 1 to n-1
//         for(int j = 0; j<n-1; j++){
//             //process element till n-1th index
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 int swapped = true;
//             }
//         }
//         if(int swapped = false){
//             //already swapped
//             break;
//         }
//     }
// }
// void printresult(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[7] = {24,5,36,74,78,89,85};
//     int size = sizeof(arr)/sizeof(int);
//     bubbleSort(arr, size);
//     cout<<"Sorted array : \n";
//     printresult(arr, size);
//     return 0;
// }


// //Insertion Sort
// #include<iostream>
// using namespace std;
// void insertionSort(int n, int arr[]){
//     for(int i = 1; i<n; i++){
//         int temp = arr[i];
//         int j = i-1;
//         for(;j>=0; j--){
//             if(arr[j]>temp){
//                 //shift
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 //stop there
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }
// }
// void printresult(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[7] = {24,5,36,74,78,89,85};
//     int size = sizeof(arr)/sizeof(int);
//     insertionSort(size, arr);
//     cout<<"Sorted array : \n";
//     printresult(arr, size);
//     return 0;
// }


// //Merge Sort
// #include<iostream>
// using namespace std;
// void merge(int *arr, int s, int e){
//     int mid = s+(e-s)/2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     //Creating memory in heap memory
//     int *first = new int(len1);
//     int *second = new int(len2);
//     //Copy value
//     int mainArrayIndex = s;
//     for(int i=0; i<len1; i++){
//         first[i] = arr[mainArrayIndex++];
//     }
//     mainArrayIndex = mid + 1;
//     for(int i=0; i<len2; i++){
//         second[i] = arr[mainArrayIndex++];
//     }

//     //Merge 2 sorted array
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;
//     while(index1 < len1 && index2 < len2){
//         if(first[index1] < second[index2]){
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else{
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }
//     while(index1 < len1){
//         arr[mainArrayIndex++] = first[index1++];
//     }
//     while(index2 < len2){
//         arr[mainArrayIndex++] = second[index2++];
//     }
//     delete []first;
//     delete []second;
// }
// void mergeSort(int *arr, int s, int e){
//     int mid = s + (e-s)/2;
//     if(s>=e){
//         return;
//     }
//     //Sort left part
//     mergeSort(arr, s, mid);
//     //Sort right part
//     mergeSort(arr, mid+1, e);
//     //Merge 2 sorted array
//     merge(arr, s, e);
// }

// int main(){
//     int arr[5] = {1,35,56,3,546};
//     int size = sizeof(arr)/sizeof(int);
//     mergeSort(arr, 0, size-1);
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// //Quick Sort
// #include<iostream>
// using namespace std;
// int partition(int arr[], int s, int e){
//     int pivot = arr[s];
//     int count = 0;
//     for(int i=s+1; i<=e; i++){
//         if(arr[i] <= pivot){
//             count++;  //Counting number of smaller element than pivot
//         }
//     }
//     int pivotIndex = s + count; //Right index of pivot
//     swap(arr[pivotIndex],arr[s]);
//     //Now take over left part(pivot>i && pivot<j)
//     int i = s, j = e;
//     while(i<pivotIndex && pivotIndex<j){
//         //Left side
//         while(arr[i] < pivot){
//             i++;
//         }
//         //Right side
//         while(arr[j] > pivot){
//             j--;
//         }
//         if(i<pivotIndex && pivotIndex<j){
//             swap(arr[i++],arr[j--]);
//         }    
//     }
//     return pivotIndex;
// }
// void quickSort(int arr[], int s, int e){
//     if(s>=e){
//         return;
//     }
//     int mid = s + (e-s)/2;
//     //Partition point
//     int p = partition(arr, s, e);
//     //Left part recursive call
//     quickSort(arr, s, p-1);
//     //Right part recursive call
//     quickSort(arr, p+1, e);
// }
// int main(){
//     int arr[5] = {2,45,46,1,35};
//     int n = 5;
//     quickSort(arr, 0, n-1);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     return 0;
// }


// //Inversion count -How far the array is from being sorted
// #include<iostream>
// using namespace std;
// int inversionCount(int arr[], int size){
//     int count = 0;
//     for(int i=0; i<size-1; i++){
//         for(int j=i+1; j<size; j++){
//             if(arr[i] > arr[j]){
//                 count++;
//             }
//         }
//     }
//     return count;
// }
// int main(){
//     int arr[5] = {35,56,2,4,64};
//     int size = sizeof(arr)/sizeof(int);
//     cout<<inversionCount(arr, size)<<" steps far for being sorted!!!!";
//     return 0;
// }