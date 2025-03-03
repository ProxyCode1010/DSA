// //Creating stack using class
// #include<iostream>
// #include<stack>
// using namespace std;
// class Stack{
//     //properties
//     public:
//         int *arr;
//         int top;
//         int size;
//     // behaviour
//     Stack(int size){
//         this -> size = size;
//         arr = new int[size];
//         top = -1;
//     }
//     void push(int element){
//         if(size - top > 1){
//             top++;
//             arr[top] = element;
//         }
//         else{
//             cout<<"Stack overflow"<<endl;
//         }
//     }
//     void pop(){
//         if(top >= 0){
//             top--;
//         }
//         else{
//             cout<<"Stack underflow"<<endl;
//         }
//     }
//     int peek(){
//         if(top >= 0){
//             return arr[top];
//         }
//         else{
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//     }
//     bool isEmpty(){
//         if(top == -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){
//     Stack st(5);
//     st.push(22);
//     st.push(21);
//     st.push(20);
//     st.push(19);
//     st.push(18);
    
//     //st.push(17);  //not enough space

//     cout<< st.peek()<<endl;
//     st.pop();
//     cout<< st.peek()<<endl;
//     st.pop();
//     cout<< st.peek()<<endl;
//     st.pop();
//     cout<< st.peek()<<endl;
//     st.pop();
//     cout<< st.peek()<<endl;
//     st.pop();

//     //st.pop();   //no elements for pop
//     if(st.isEmpty()){
//         cout<<"Uff! Stack is empty"<<endl;
//     }
//     else{
//         cout<<"Yhee! Stack is not empty"<<endl;
//     }
// }



// //Two stack
// #include<iostream>
// using namespace std;
// //Efficient approach(in this num1 from start and num2 from end do their operation) another approach is divide arr/2 and then do operation as per need in this storage is divided 
// class TwoStack{
//     int *arr;
//     int top1;
//     int top2;
//     int size;

//     public:
//     //Initialize TwoStack
//     TwoStack(int s){
//         this -> size = s;
//         top1 = -1;
//         top2 = s;
//         arr = new int[s];
//     }
//     //Push is stack 1
//     void push1(int num){
//         //atleast a empty space present
//         if((top2 - top1) > 1){
//             top1++;
//             arr[top1] = num;
//         }
//         else{
//             cout<<"Stack overflow"<<endl;
//         }
//     }
//     //Push in stack 2
//     void push2(int num){
//         if((top2 - top1) > 1){
//             top2--;
//             arr[top2] = num;
//         }
//         else{
//             cout<<"Stack overflow"<<endl;
//         }
//     }
//     //Pop from stack 1 and return popped element
//     int pop1(){
//         if(top1 >= 0){
//             int ans = arr[top1];
//             top1--;
//             return ans;
//         }
//         else{
//             return -1;
//         }
//     }
//     //Pop from stack 2 and return popped element
//     int pop2(){
//         if(top2 < size){
//             int ans = arr[top2];
//             top2++;
//             return ans;
//         }
//         else{
//             return -1;
//         }
//     }
// };
// int main(){
//     TwoStack st(5);
//     st.push1(2);
//     st.push1(3);
//     st.push1(2);
//     st.push1(5);
//     st.push2(6);

//     //st.push2(5);

//     return 0;
// }



// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     string str = "Dheeraj";
//     stack<char> s;
//     for(int i=0; i<str.length(); i++){
//         char ch = str[i];
//         s.push(ch);
//     }
//     string ans = "";
//     while(s.empty()){
//         char ch = s.top();
//         ans.push_back(ch);

//         s.pop();
//     }
//     cout<<"Answer is "<< ans <<endl;
//     return 0;
// }



// //Next smaller element
// #include<stack>
// vector<int> nextSmallerElement(vector<int> &arr, int n){
//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n);

//     for(int i = n-1; i>=0 i--){
//         int curr = arr[i];
//         while(s.top() >= curr){
//             s.pop();
//         }
//         //ans is stack ka top
//         ans[i] = s.top();
//         s.push(curr);
//     }
//     return ans;
// }



// //Minimum cost to make string valid
// #include<stack>
// int findMinimumCost(string str){
//     //odd condition
//     if(str.length()%2 == 1){
//         return -1;
//     }
//     stack<char> s;
//     for(int i=0; i<str.length(); i++){
//         char ch = str[i];

//         if(ch == '('){
//             s.push(ch);
//         }
//         else{
//             //ch is closed bracket
//             if(!s.empty() && s.top() == '('){
//                 s.pop();
//             }
//             else{
//                 s.push(ch);
//             }
//         }

//         //stack contains invalid expression
//         int a = 0, b = 0;
//         while(!s.empty()){
//             if(s.top() == '('){
//                 b++;
//             }
//             else{
//                 a++;
//             }
//             s.pop();
//         }
//         int ans = (a+1)/2 + (b+1)/2;
//         return ans;
//     }
// }



// //The Celebrity problem --Most important
// class Solution{
//     private:
//     bool knows(vector<int> &M, int a, int b, int n){
//         if(M[a][b] == 1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     public:
//     //function to find if there is a celebrity in the party or not
//     int celebrity(vector<int> &M, int n){
//         stack <int> s;
//         //step1 : push all element in stack
//         for(int i=0; i<n; i++){
//             s.push(i);
//         }
//         //step2: get 2 elements and compare them
//         while(s.size() > 1){
//             int a = s.top();
//             s.pop();

//             int b = s.top();
//             s.pop();

//             if(knows(M,a,b,n)){
//                 s.push(b);
//             }
//             else{
//                 s.push(a);
//             }
//         }
//         int candidate = s.top();
//         //step3: single element in stack is potential celebrity so verify it
//         bool rowCheck = false;
//         int zeroCount = 0;
//         for(int i=0; i<n; i++){
//             if(M[candidate][i] == 0){
//                 zeroCount++;
//             }
//             // all zeroes
//             if(zeroCount == n){
//                 rowCheck = true;
//             }
//             // column check
//             bool colCheck = false;
//             int oneCount = 0;
//             for(int i = 0; i<n; i++){
//                 if(M[i][candidate] == 1){
//                     oneCount++;
//                 }
//             }
//             if(oneCount == n-1){
//                 colCheck = true;
//             }
//             if(rowCheck == true && colCheck == true){
//                 return candidate;
//             }
//             else{
//                 return -1
//             }
//         }
//     }
// }


// //Max rectange --Most important
// class Solution{
//     private:
//     vector<int> nextSmallerElement(int *arr, int n){
//         stack<int> s;
//         s.push(-1);
//         vector<int> ans(n);
//         for(int i=n-1; i>=0; i--){
//             int curr = arr[i];
//             while(s.top() != -1 && arr[s.top()] >= curr){
//                 s.pop();
//             }
//             //ans is stack ka top
//             ans[i] = s.top();
//             s.push(i);
//         }
//         return ans;
//     }
//     vector<int> prevSmallerElement(int *arr, int n){
//         stack<int> s;
//         s.push(-1);
//         vector<int> ans(n);
//         for(int i=0; i<n; i++){
//             int curr = arr[i];
//             while(s.top() != -1 && arr[s.top()] >= curr){
//                 s.pop();
//             }
//             //ans is stack ka top
//             ans[i] = s.top();
//             s.push(i);
//         }
//         return ans;
//     }
//     int largestRectangleArea(int *heights, int n){
//         if(next[i] == -1){
//             next[i] = n;
//         }
//         int b = next[i] - prev[i] - 1;
//         int newArea = l*b;
//         area = max(area, newArea);
//         return ans;
//     }

//     public:
//     int maxArea(int M[MAX][MAX], int n, int m){
//         //compute area for first row
//         int area = largestRectangleArea(M[0], m);
//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 //row update: by adding previous row's value
//                 if(M[i][j] != 0){
//                     M[i][j] = M[i][j] + M[i-1][j];
//                 }
//                 else{
//                     M[i][j] = 0;
//                 }
//             }
//             //entire row is updated row
//             area = max(area, largestRectangleArea(M[i],m));
//             return area;
//         }
//     }
// }






// void solve(stack<int>& inputStack, int count, int size){
//     //base case
//     if(count == size/2){
//         inputStack.pop();
//         return;
//     }
//     int num = inputStack.top();
//     inputStack.pop();

//     //Recursive call
//     solve(inputStack, count+1; size);
//     inputStack.push(num);
// }
// void deleteMiddle(stack<int>)





//Insert an element at its bottom in a given stack





// //Reverse a string using stack
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     string str = "Hello";
//     stack<char> s;
//     for(int i=0; i<str.length(); i++){
//         char ch = str[i];
//         s.push(ch);
//     }
//     string ans = "";
//     while(!s.empty()){
//         char ch = s.top;
//         ans.push_back(ch);

//         s.pop();
//     }
//     cout<<"Answer is : "<<ans<<endl;
//     return 0;
// }




// //Delete middle element from stack
// void solve(stack<int>&inputStack, int count, int size){
//     //base case
//     if(count == size/2){
//         inputStack.pop();
//         return;
//     }
//     int num = inputStack.top();
//     //Recursive call
//     solve(inputStack, count+1, size);

//     input(Stack.push(num));
// }
// void deleteMiddle(stack,int>&inputStack, int N){
//     int count = 0;
//     solve(inputStack, count, N);
// }





// //Valid Parenthesis
// bool isValidParenthesis(string expression){
//     stack<char> s;
//     for(int i=0; i<expression.length(); i++){
//         char ch = expression[i];

//         char ch = expression[i];

//         //if opening bracket, stack push
//         ///if close bracket, stacktop check and pop

//         if(ch == '(' || ch == '{' || ch == '{'){
//             s.push(ch);
//         }
//         else{
//             //for closing bracket
//             if(!s.empty()){
//                 char top = s.top();
//                 if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
//                     s.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             else{
//                 return false;
//             }
//         }
//     }
//     if(s.empty()){
//         return true;
//     }
//     else{
//         return false;
//     }
// }






// //Insert An Element at its bottom in a given stack
// void solve(stack<int> &s, int x){
//     //base case
//     if(s.empty()){
//         s.push(x);
//         return ;
//     }
//     int num = s.top();
//     s.pop();

//     //recursive call
//     solve(s, x);

//     s.push(num);
// }
// stack<int> pushAtBottom(stack<int>& myStack, int x){
//     solve(myStack, x);
//     return myStack;
// }





// //Reverse Stack using recursion
// void insertAtBottom(stack<int>& s, int element){
//     //base case
//     if(s.empty()){
//         stack.push[element];
//     }
// }
// void reverseStack(stack<int> &stack){
//     //base case
//     if(stack.empty()){
//         return ;
//     }
//     int num = stack.top();
//     stack.pop();

//     //recursive call
//     reverseStack(stack);

//     insertAtBottom(num);
// }





// //Sort a Stack
// void sortedInsert(stack<int> &stack, int num){
//     //base case
//     if(stack.empty() || (!stack.empty() && stack.top() < num)){
//         stack.push(num);
//         return;
//     }
//     int n = stack.top();
//     stack.pop();

//     //recursive call
//     sortedInsert(stack, num);
//     stack.push(n);
// }
// void sortStack(stack<int> &stack){
//     //base case
//     if(stack.empty()){
//         return ;
//     }
//     int num = stack.top();
//     stack.pop();

//     //recursive call
//     sortStack(stack);

//     sortedInsert(stack, num);
// }





// //Redundant Brackets
// #include<stack>
// bool findRedundantBrackets(string &s){
//     stack<char> st;
//     for(int i=0; i<s.length(); i++){
//         char ch = s[i];

//         if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
//             st.push(ch);
//         }
//         else{
//             //ch ya tho ')' hai or lowercase letter
//             if(ch == ')'){
//                 bool isRedundant = true;
//             while(st.top() != '('){
//                 char top = st.top();
//                 if(top == '+' || top == '-' || top == '*' || top == '/'){
//                     isRedundant = false;
//                 }
//                 st.pop();
//             }
//             if(isRedundant == true){
//                 return true;
//             }
//             st.pop();
//             }
//         }
//     }
//     return false;
// }