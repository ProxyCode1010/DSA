// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     //create a queue
//     queue<int> q;
//     q.push(11);
//     q.push(15);
//     cout<<"Front of q is "<<q.front()<<endl;
//     q.push(13);
//     cout<<"size of queue is : "<<q.size()<<endl;
//     q.pop();
//     q.pop();
//     q.pop();
//     cout<<"size of queue is : "<<q.size()<<endl;
//     if(q.empty()){
//         cout<<"Queue is empty "<<endl;
//     }
//     else{
//         cout<<"Queue is not empty "<<endl;
//     }
//     return 0;
// }




// //Implement a Queue
// class Queue{
//     int* arr;
//     int front;
//     int rear;
//     int size;

//     public:
//     Queue(){
//         size = 100001;
//         arr = new int[size];
//         front = 0;
//         rear = 0
//     }

//     bool isEmpty(){
//         if(front == rear){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     void enqueue(int data){
//         if(rear == size){
//             cout<<"Queue is full"<<endl;
//         }
//         else{
//             arr[rear] = data;
//             rear++;
//         }
//     }
//     int dequeue(){
//         if(front == rear){
//             return -1;
//         }
//         else{
//             int ans = arr[front];
//             arr[front] = -1;
//             front++;
//             if(front == rear){
//                 front = 0;
//                 rear = 0;
//             }
//             return ans;
//         }
//     }
//     int front(){
//         if(front == rear){
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//     }
// };





// //Circular Queue
// class CircularQueue{
//     int *arr;
//     int front;
//     int rear;
//     int size;

//     public:
//     CircularQueue(int n){
//         size = n;
//         arr = new int[size];
//         front = rear = -1;
//     }
//     bool enqueue(int value){
//         if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
//             cout<<"Queue is Full";
//             return false;
//         }
//         else if(front == -1){
//             front = rear = 0;
//         }
//         else if(rear == size-1 && front != 0){
//             rear = 0;
//         }
//         else{
//             rear++;
//         }
//         arr[rear] = value;
//         return true;
//     }
//     int dequeue(){
//         if(front == -1){
//             cout<<"Queue is Empty" <<endl;
//             return -1;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         if(front == rear){
//             front = rear = -1;
//         }
//         else if(front == size-1){
//             front = 0;
//         }
//         else{
//             front++;
//         }
//         return ans;
//     }
// };





// //Dequeue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     dequeue<int> d;
//     d.push_front(12);
//     d.push_back(14);

//     cout<<d.front()<<endl;
//     cout<<d.back()<<endl;

//     d.pop_front();

//     cout<<d.front()<<endl;
//     cout<<d.back()<<endl;

//     d.pop_back();

//     if(d.empty()){
//         cout<<"Queue is empty"<<endl;
//     }
//     else{
//         cout<<"Queue is not empty"<<endl;
//     }
// }





// //Dequeue -- Codestudio
// class Dequeue{
//     int *arr;
//     int front;
//     int rear;
//     int size;

//     public:
//     Dequeue(int n){
//         size = n;
//         arr = new int[n];
//         front = -1;
//         rear = -1;
//     }
//     bool pushFront(int x){
//         if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
//             return false;
//         }
//         else if(front == -1){
//             front = rear = 0;
//         }
//         else if(front == 0 && rear != size-1){
//             front = n-1;
//         }
//         else{
//             front--;
//         }
//         arr[front] = x;
//         return true;
//     }
//     bool pushRear(int x){
//         if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
//             return false;
//         }
//         else if(front == -1){
//             front = rear = 0;
//         }
//         else if(rear == size-1 && front != 0){
//             rear = 0;
//         }
//         else{
//             rear++;
//         }
//         arr[rear] = x;
//         return true;
//     }
//     int popFront(){
//         if(front == -1){
//             return -1;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         if(front == rear){
//             front = rear = -1;
//         }
//         else if(front == size-1){
//             front = 0;
//         }
//         else{
//             front++;
//         }
//         return ans;
//     }
//     int popRear(){
//         if(front == -1){
//             return -1;
//         }
//         int ans = arr[rear];
//         arr[rear] = -1;
//         if(front == rear){
//             front = rear = -1;
//         }
//         else if(rear == 0){
//             rear = size-1;
//         }
//         else{
//             rear++;
//         }
//         return ans;
//     }
//     int getFront(){
//         if(isEmpty()){
//             return -1;
//         }
//         return arr[front];
//     }
//     int getRear(){
//         if(isEmpty()){
//             return -1;
//         }
//         return arr[rear];
//     }
//     bool isEmpty(){
//         if(front == -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     bool isFull(){
//         if((front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1))){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };





// //Queue Reversal
// queue<int> rev(Queue<int> q){
//     stack<int> s;
//     while(!q.empty()){
//         int element = q.front();
//         q.pop();
//         s.push(element);
//     }
//     while(!s.empty()){
//         int element = s.top();
//         s.pop();
//         q.push(element);
//     }
//     return q;
// }





// //First negative integer in every window of size k
// vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K){
//     deque<long long int> dq;
//     vector<long long> ans;

//     //process first window of k size
//     for(int i=0; i<K; i++){
//         if(A[i] < 0){
//             dq.push_back(i);
//         }
//     }
//     //store answer of first k size window
//     if(dq.size() > 0){
//         ans.push_back(A[dq.front()]);
//     }
//     else{
//         ans.push_back(0);
//     }
//     //process for remaining windows
//     for(int i=K; i<N; i++){
//         //removal
//         if(!dq.empty() && i-dq.front() >= k){
//             dq.pop_front();
//         }
//         //addition
//         if(A[i] < 0){
//             dq.push_back(i);
//         }
//         //ans store
//         if(dq.size() > 0){
//             ans.push_back(A[dq.front()]);
//         }
//         else{
//             ans.push_back(0);
//         }
//     }
//     return ans;
// }




// //Reverse first K element of Queue
// queue<int> modifyQueue(queue<int> q, int k){
//     stack<int> s;
//     //step1 : pop first k from Q and put into stack
//     for(int i=0; i<k; i++){
//         int val = q.front();
//         q.pop();
//         s.push(val);
//     }
//     //step2 : fetch from stack and push into q
//     while(!s.empty()){
//         int val = s.top();
//         s.pop();
//         q.push(val);
//     }
//     //step3 : fetch from (n-k) element from Q and push back
//     int t = q.size()-k;

//     while(t--){
//         int val = q.front();
//         q.pop();
//         q.push(val);
//     }
//     return q;
// }




// //Find non-repeating character in a stream
// class Solution{
//     public:
//     string FirstNonRepeating(string A){
//         unordered_map<char, int> count;
//         queue<int> q;
//         string ans = "";
//         for(int i=0; i<A.length(); i++){
//             char ch = A[i];

//             //increase count
//             count[ch]++;

//             //queue m push karo
//             q.push(ch);

//             while(!q.empty()){
//                 if(count[q.front()] > 1){
//                     //repeating character
//                     q.pop();
//                 }
//                 else{
//                     //non repeating character milgya
//                     an.push_back(q.front());
//                     break;
//                 }
//             }
//             if(q.empty()){
//                 ans.push_back('#');
//             }
//         }
//         return ans;
//     }
// };





// //Circular tour
// class Solution{
//     public:
//     int tour(petrolPump p[], int n){
//         int deficit = 0;
//         int balance = 0;
//         int start = 0;

//         for(int i=0; i<n; i++){
//             balance += p[i].petrol - p[i].distance;
//             if(balance < 0){
//                 deficit += balance;
//                 start = i+1;
//                 balance = 0;
//             }
//         }
//         if(deficit + balance >= 0){
//             return start;
//         }
//         else{
//             return -1;
//         }
//     }
// };





// // K Queue in an Array  --Lecture 61
// #include<iostream>
// using namespace std;
// class kQueue{
//     public:
//     int n;
//     int k;
//     int *front;
//     int *rear;
//     int *arr;
//     int freeSpot;
//     int *next;

//     public:
//     kQueue(int n, int k){
//         this-> n = n;
//         this->k = k;
//         front = new int[k];
//         rear = new int[k];
//         for(int i=0; i<k; i++){
//             front[i] = -1;
//             rear[i] = -1;
//         }
//         next = new int[n];
//         for(int i=0; i<n; i++){
//             next[i] = i+1;
//         }
//         next[n-1] = -1;
//         arr = new int[n];
//         freeSpot = 0;
//     }
//     void enqueue(int data, int qn){
//         //overflow
//         if(freeSpot == -1){
//             cout<<"No empty space is present"<<endl;
//             return;
//         }
//         //find first free index
//         int index = freeSpot;
//         //update freespot
//         freeSpot = next[index];
//         //check whether first element
//         if(front[qn-1] == -1){
//             front[qn-1] = index;
//         }
//         else{
//             //link new element to the prev element
//             next[rear[qn-1]] = index;
//         }
//         //update next
//         next[index] = -1;
//         //update rear
//         rear[qn-1] = index;
//         //push element
//         arr[index] = data;
//     }
//     void dequeue(int qn){
//         //underflow
//         if(front[qn-1] == -1){
//             cout<<"Queue Underflow"<<endl;
//             return;
//         }
//         //find index to pop
//         int index = front[qn-1];
//         //front ko aage badhao
//         front[qn-1] = next[index];
//         //freeSlots ko manage karo
//         next[index] = freeSpot;
//         freeSpot = index;
//         return arr[index];
//     }
// };
// int main(){
//     kQueue q(10, 3);
//     q.enqueue(10, 3);
//     q.enqueue(15, 1);
//     q.enqueue(20, 2);
//     q.enqueue(25, 1);

//     cout << q.dequeue(1) <<endl;
//     cout << q.dequeue(2) <<endl;
//     cout << q.dequeue(1) <<endl;
//     cout << q.dequeue(1) <<endl;

//     return 0;
// }





// //Sum of minimum and maximum elements of all subarrays of size k
// #include<iostream>
// #include<queue>
// using namespace std;
// int solve(int *arr, int n, int k){
//     deque<int> maxi(k);
//     deque<int> mini(k);

//     //addition of first k size window
//     for(int i=0; i<k; i++){
//         while(!maxi.empty() && arr[maxi.back()] <= arr[i])
//             maxi.pop_back();
//         while(!mini.empty() && arr[mini.back() >= arr[i]])
//             mini.pop_back();
//         maxi.push_back(i);
//         mini.push_back(i);
//     }

//     int ans = 0;
//     for(int i=k; i<n; i++){
//         ans += arr[maxi.front()] + arr[mini.front()];

//         //next window
//         //removal
//         while(!maxi.empty() && i - maxi.front() >= k){
//             maxi.pop_front();
//         }
//         while(!mini.empty() && i - mini.front() >= k){
//             mini.pop_front();
//         }

//         //addition
//         while(!maxi.empty() && arr[maxi.back()] <= arr[i])
//             maxi.pop_back();
//         while(!mini.empty() && arr[mini.back() >= arr[i]])
//             mini.push_back();
//         maxi.push_back(i);
//         mini.push_back(i);
//     }
//     //make sure to consider last wali window
//     ans += arr[maxi.front()] + arr[mini.front()];

//     return ans;
// }
// int main(){
//     int arr[7] = {2, -5, -1, 7, -43, 4, -34, -5};
//     int k = 4;
//     cout<<solve(arr, 7, k)<<endl;
// }




//Interleave the first half of the queue with second half --GreeksforGreeks