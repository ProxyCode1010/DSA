// #include<iostream>
// using namespace std;
// int main(){
//     int num = 5;
//     cout<<num<<endl;
//     //Address of Operator - &
//     cout<<"Address of num is : "<< &num <<endl;
//     int *ptr = &num;
//     cout<<"Address is : "<< ptr <<endl;
//     cout<<"Value is : "<< *ptr <<endl;

//     double d = 4.3;
//     double *p2 = &d;
//     cout<<"Address is : "<< p2 <<endl;
//     cout<<"Value is : "<< *p2 <<endl;

//     cout<<"Size of integer is "<<sizeof(num)<<endl;
//     cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
//     cout<<"Size of pointer is "<<sizeof(p2)<<endl;        /*Doubt 4 or 8*/
//     return 0;
// }


// //Null Pointer and Value Access
// #include<iostream>
// using namespace std;
// int main(){
//     // //Pointer to int is created, and pointing to some garbage address
//     // int *p = 0;
//     // cout<< *p <<endl;

//     //Different access method
//     int i = 5;
//     int *q = &i;
//     cout<< q <<endl;
//     cout << *q <<endl;

//     int *p = 0;
//     p = &i;
//     cout<< p <<endl;
//     cout << *p <<endl;
//     return 0;
// }


// //Copying a Pointer
// #include<iostream>
// using namespace std;
// int main(){
//     int num = 5;
//     int a = num;
//     cout<<"a before :"<< num <<endl;
//     a++;
//     cout<<"a after :"<< num <<endl;

//     int *p = &num;
//     cout<<"Before : "<< num <<endl;
//     (*p)++;
//     cout<<"After : "<< num <<endl;
//     //Copying a pointer
//     int *q = p;
//     cout<< p <<" - "<< q << endl;
//     cout<< *p <<" - "<< *q << endl;
//     //Important concept
//     int i = 3;
//     int *t = &i;
//     //cout<<(*t)++<<endl;
//     *t = *t + 1;
//     cout<<"Before t "<< t <<endl;
//     t = t+1;
//     cout<<"After t "<< t <<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// //     int arr[10] = {23,122,41,67};
// //     cout<<"Address of first memory block is "<<arr<<endl;
// //     cout<<arr[0]<<endl;
// //     cout<<"Address of first memory block is "<<&arr[0]<<endl;

// //     cout<<"4th "<< *arr <<endl;
// //     cout<<"5th "<< *arr + 1<<endl;
// //     cout<<"6th "<<*(arr+1)<<endl;
// //     cout<<"7th "<<*(arr)+1<<endl;
// //     cout<<"8th "<<arr[2]<<endl;
// //     cout<<"9th "<<*(arr+2)<<endl;

// //     int i = 3;
// //     cout<<i[arr]<<endl;

//     //Size
//     int temp[10] = {1,2};
//     cout<<sizeof(temp)<<endl;
//     cout<<"1st "<<sizeof(*temp)<<endl;
//     cout<<"2nd "<<sizeof(&temp)<<endl;

//     int *ptr = &temp[0];
//     cout<< sizeof(ptr)<<endl;
//     cout<< sizeof(*ptr)<<endl;
//     cout<< sizeof(&ptr)<<endl;
//     return 0;
// }


// //Address
// #include<iostream>
// using namespace std;
// int main(){
//     // int a[20] = {1,2,3,4};
//     // cout<< " -> "<< &a[0]<<endl;
//     // cout<< &a <<endl;
//     // cout<< a <<endl;

//     // int *p = &a[0];
//     // cout<< p <<endl;
//     // cout<< *p <<endl;
//     // cout<<"-> "<< &p <<endl;

//     int arr[10];
//     // //ERROR
//     // arr = arr+1;

//     int *ptr = &arr[0];
//     cout<< arr <<endl;
//     cout<< ptr <<endl;
//     ptr = ptr + 1;
//     cout<< ptr <<endl;
//     return 0;
// }


// //Char Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     char ch[6] = "Hello";
//     cout<< arr <<endl;
//     //Attention here
//     cout<< ch <<endl;

//     char *c = &ch[0];
//     //prints entire string
//     cout << c <<endl;
//     cout << &c <<endl;

//     char temp = 'z';
//     char *p = &temp;
//     cout<< p <<endl;
//     return 0;
// }


// //Pointer and Function
// #include<iostream>
// using namespace std;
// void print(int *p){
//     cout << *p <<endl;
// }
// void update(int *p){
//     p = p+1;
//  //   cout<<"Inside "<< p <<endl;
//     *p = *p + 1;
// }
// int getSum(int *arr, int n){
//     cout<< endl <<"Size : "<< sizeof(arr) <<endl;
    
//     int sum = 0;
//     for(int i = 0; i<n; i++){
//         sum += i[arr];   //arr[i] = i[arr]
//     }
//     return sum;
// }
// int main(){
//     int value = 5;
//     int *p = &value;
//     print(p);
//     cout<<"Before "<<p <<endl;
//     update(p);
//     cout<<"After "<<p <<endl;

//     int arr[6] = {1,2,3,4,5,6};
//     cout<<"Sum is "<< getSum(arr+3, 6)<<endl;   //Not correct output when we pass arr+3 
//     return 0;
// }


// //Double pointer
// #include<iostream>
// using namespace std;
// void update(int **p2){
//     // p2 = p2 + 1;
//     // //Any change - NO

//     // *p2 = *p2 + 1;
//     // //Any change - Yes

//     **p2 = **p2 + 1;
//     //Any change - Yes
// }
// int main(){
//     int i = 5;
//     int *p = &i;
//     int **p2 = &p;
//     // cout<<"All Is Well"<< endl;
//     // cout<<"Printing p "<< p << endl;
//     // cout<<"Address of p "<< &p << endl;
//     // cout<< *p2 << endl;

//     // cout<<i<<endl;
//     // cout<<*p<<endl;
//     // cout<<**p2<<endl;

//     // cout<< &i <<endl;
//     // cout<< p <<endl;
//     // cout<< *p2 <<endl;

//     // cout<< &p <<endl;
//     // cout<< p2 <<endl;

//     cout<<endl;
//     cout<<"Before "<< i <<endl;
//     cout<<"Before "<< p <<endl;
//     cout<<"Before "<< p2 <<endl;
//     update(p2);
//     cout<<"After "<< i <<endl;
//     cout<<"After "<< p <<endl;
//     cout<<"After "<< p2 <<endl;
//     cout<<endl;
//     return 0;
// }


// //MCQ
// #include<iostream>
// using namespace std;
// int main(){
//     // int first = 8;
//     // int second = 18;
//     // int *ptr = &second;
//     // *ptr = 9;
//     // cout<<first<<" "<<second<<endl;

//     // int first = 6;
//     // int *p = &first;
//     // int *q = p;
//     // (*q)++;
//     // cout<<first<<endl;

//     // int first = 8;
//     // int *p = &first;
//     // cout<<(*p)++<<" ";
//     // cout<< first <<endl;

//     // int *p = 0;
//     // int first = 110;
//     // *p = first;
//     // cout<< *p <<endl;

//     // int *p = 0;
//     // int first = 110;
//     // p = &first;
//     // cout<< *p <<endl;

//     // int first = 8;
//     // int second = 11;
//     // int *third = &second;
//     // first = *third;
//     // *third = *third + 2;
//     // cout<< first <<" "<<second<<endl;

//     // float f = 12.5;
//     // float p = 21.5;
//     // float *ptr = &f;
//     // (*ptr)++;
//     // *ptr = p;
//     // cout<< *ptr <<" "<< f <<" "<< p <<endl;

//     // int arr[5];
//     // int *ptr;
//     // cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;

//     // int arr[] = {11,21,13,14};
//     // cout<< *(arr) <<" "<<*(arr+1)<<endl;

//     // int arr[6] = {11,12,31};
//     // cout<< arr <<" "<<&arr<<endl;
//     // cout<<(arr+1)<<endl;

//     // int arr[6] = {11,21,31};
//     // int *p = arr;
//     // cout<<p[2]<<endl;

//     // int arr[] = {11,12,13,14,15};
//     // cout<< *(arr)<<" "<<*(arr+3);

//     // int arr[] = {11,21,31,41};
//     // int *ptr = arr++;            // arr=arr+1  Throwing error / We can try this ptr=ptr+1
//     // cout<< *ptr <<endl;

//     // char ch = 'a';
//     // char *ptr = &ch;
//     // ch++;
//     // cout<<*ptr<<endl;

//     // char arr[] = "abcde";
//     // char *p = &arr[0];
//     // cout<< p <<endl;

//     // char str[] ="Hello_Dear";
//     // char *p = str;
//     // cout<< str[0] <<" "<<p[0]<<endl;
//     return 0;
// }



// //  MCQ - Function
// #include<iostream>
// using namespace std;
// // void update(int *p){
// //     *p = (*p) * 2;
// // }
// // void increment(int **p){
// //     ++(**p);
// // }
// int main(){
//     // int i = 10;
//     // update(&i);
//     // cout<< i <<endl;

//     // int num = 110;
//     // int *ptr = &num;
//     // increment(&ptr);
//     // cout<<num<<endl;

//     // int first = 110;
//     // int *p = &first;
//     // int **q = &p;
//     // int second = (**q)++ + 2;
//     // cout<<first<<" "<<second<<endl;

//     // int first = 100;
//     // int *p = &first;
//     // int **q = &p;
//     // int second = ++(**q);
//     // int *r = *q;
//     // ++(*r);
//     // cout<<first<<" "<<second<<endl;
//     return 0;
// }