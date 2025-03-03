// //Length of string
// #include<iostream>
// using namespace std;
// int getLength(char name[]){
//     int count = 0;
//     for(int i = 0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     char name[20];
//     cout<<"Let's find length of name ";
//     cin>>name;
//     cout<<"Length : "<<getLength(name)<<endl;
//     return 0;
// }


// //Check Palindrome - String
// #include<iostream>
// using namespace std;
// bool checkPalindrome(char arr[], int n){
//     int s = 0;
//     int e = n-1;
//     while(s<=e){
//         if(arr[s] != arr[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// int getLength(char name[]){
//     int count = 0;
//     for(int i = 0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     char arr[20];
//     cout<<"Enter string to check palindrome : ";
//     cin>>arr;
//     int len = getLength(arr);
//     int result = checkPalindrome(arr,len);
//     cout<<"My result is : "<<result<<endl;
//     return 0;
// }


// //Reverse a string
// #include<iostream>
// using namespace std;
// void reverseString(char arr[],int n){
//     int s = 0;
//     int e = n-1;
//     while(s<e){
//         swap(arr[s++], arr[e--]);
//     }
// }
// int getLength(char name[]){
//     int count = 0;
//     for(int i = 0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     char reverse[20];
//     cout<<"Enter string : ";
//     cin>>reverse;
//     int len = getLength(reverse);
//     reverseString(reverse,len);
//     cout<<"Reverse string is : "<<reverse<<endl;
//     return 0;
// }


// #include<iostream>                               //  Leetcode....................................................................
// using namespace std;
// void reverseString(char arr[],int n){
//     for(int i = 0; i<n; i++){
//         if(arr[i] == ' '){
//             reverse(arr[i],arr[i-1]);
//         }
//        // swap(arr[i], arr[i+1]);
//     }
// }

// int getLength(char name[]){
//     int count = 0;
//     for(int i = 0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     char reverse[20];
//     cout<<"Enter string : ";
//     cin.getline(reverse, 20);
//     int len = getLength(reverse);
//     reverseString(reverse,len);
//     cout<<"Reverse string is : "<<reverse<<endl;
//     return 0;
// }


// //Convert all character to Lower case/Upper case
// #include<iostream>
// using namespace std;
// char toLowercase(char ch){
//     if(ch >= 'a' && ch <= 'z'){
//         return ch;
//     }
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// char toUppercase(char ch){
//     if(ch >= 'A' && ch <= 'Z'){
//         return ch;
//     }
//     else{
//         char temp = ch - 'a' + 'A';
//         return temp;
//     }
// }
// int main(){
//     cout<<"After conversion "<<toLowercase('b')<<endl;
//     cout<<"After conversion "<<toLowercase('B')<<endl;
//     cout<<"After conversion "<<toUppercase('b')<<endl;
//     cout<<"After conversion "<<toUppercase('B')<<endl;
//     return 0;
// }


// //Replace Spaces
// #include<iostream>
// using namespace std;
// string replaceSpaces(string &str){
//     string temp = "";
//     for(int i = 0; i<str.length(); i++){
//         if(str[i] == ' '){
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('1');
//         }
//         else{
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }
// int main(){
//     string s;
//     getline(cin, s);
//     cout<<"After replace string is : "<<replaceSpaces(s);
//     return 0;
// }


// //Maximum Occurance character
// #include<iostream>
// using namespace std;
// char getMaxOccCharacter(string s){
//     int arr[26] = {0};
//     //Create an array of count of characters
//     for(int i = 0; i<s.length(); i++){
//         char ch = s[i];
//         //Lowercase
//         int number = 0;
//         if(ch >= 'a' && ch <= 'z'){
//             number = ch - 'a';
//         }
//         //Uppercase
//         else{
//             number = ch - 'A';
//         }
//         arr[number]++;
//     }
//     //Find maximum occ. character
//     int maxi = -1, ans = 0;
//     for(int i = 0; i<26; i++){
//         if(maxi<arr[i]){
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     char finalAns = 'a'+ans;
//     return finalAns;
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<getMaxOccCharacter(s)<<endl;
//     return 0;
// }


//String Compression -- Leetcode


// //Permutation in String
// #include<iostream>
// using namespace std;
// bool checkequal(int a[26], int b[26]){
//     for(int i =0; i<26; i++){
//         if(a[i] != b[i]){
//             return 0;
//         }
//     }
//     return 1;
// }
// bool checkInclusion(string s1, string s2) {
//         //Character count array
//     int count1[26] = {0};
//     for(int i = 0; i<s1.length(); i++){
//         int index = s1[i] - 'a';
//         count1[index]++;
//     }
//         //Now traverse S2 string in window of size S1 length and compare
//     int i = 0;
//     int windowSize = s1.length();
//     int count2[26] = {0};
//         //running for first window
//     while(i<windowSize && i<s2.length()){
//         int index = s2[i] - 'a';
//         count2[index]++;
//         i++;
//     }
//     if(checkequal(count1, count2)){
//         return 1;
//     }
//         //move forward window
//     while(i<s2.length()){
//         char newchar = s2[i];
//         int index = newchar - 'a';
//         count2[index]++;

//         char oldchar = s2[i-windowSize];
//         index = oldchar - 'a';
//         count2[index]--;
//         i++;

//     if(checkequal(count1, count2))
//         return 1;

//     }
//     return 0;
// }
// int main(){
//     string s1 = "ab";
//     string s2 = "bcdfba";
//     int result = checkInclusion(s1,s2);
//     cout<<"Our string is "<<result<<endl;
//     return 0;
// }


// //To lower Case - String
// #include<bits/stdc++.h>
// using namespace std;
// string toLowercase(string s){
//     transform(s.begin(),s.end(),s.begin(),::tolower);
//     cout<<s<<endl;
//     return s;}
//     //ORR
// //     string str = "";
// //     for(char ch : s){
// //         str += tolower(ch); 
// //     }
// //     cout<<str<<endl;
// // }
// int main(){
//     cout<<toLowercase("fbAJHg")<<endl;
//     return 0;
// }