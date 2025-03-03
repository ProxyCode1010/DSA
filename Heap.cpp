// #include<iostream>
// #include<queue>
// using namespace std;
// class heap{
//     public:
//     int arr[100];
//     int size;

//     //constructor
//     heap(){
//         arr[0] = -1;
//         size = 0;
//     }
//     void insert(int val){
//         size = size+1;
//         int index = size;
//         arr[index] = val;

//         while(index>1){
//             int parent = index/2;
//             if(arr[parent] < arr[index]){
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//             else{
//                 return;
//             }
//         }
//     }
//     void print(){
//         for(int i=0; i<=size; i++){
//             cout<< arr[i] <<" ";
//         }cout<<endl;
//     }

//     void deletefromHeap(){
//         if(size == 0){
//             cout<<"nothing to delete"<<endl;
//             return;
//         }
//         //Step 1 : put last element into first index
//         arr[1] = arr[size];
//         //Step 2 : remove last element
//         size--;
//         //Step 3 : take root node to its correct position
//         int i = 1;
//         while(i<size){
//             int leftindex = 2*i;
//             int rightindex = 2*i+1;
//             if(leftindex < size && arr[i] < arr[leftindex]){
//                 swap(arr[i], arr[leftindex]);
//                 i = leftindex;
//             }
//             else if(rightindex < size && arr[i] < arr[rightindex]){
//                 swap(arr[i], arr[rightindex]);
//                 i = rightindex;
//             }
//             else{
//                 return;
//             }
//         }
//     }
// };
// void heapify(int arr[], int n, int i){
//     int largest = i;
//     int left = 2*i;
//     int right = 2*i+1;
//     if(left < n && arr[largest] < arr[left]){
//         largest = left;
//     }
//     if(right < n && arr[largest] < arr[right]){
//         largest = right;
//     }
//     if(largest != i){
//         swap(arr[largest], arr[i]);
//         heapify(arr, n, largest);
//     }
// }
// void heapSort(int arr[], int n){
//     int size = n;
//     while(size>1){
//         //step 1 : swap
//         swap(arr[size], arr[1]);
//         size--;

//         heapify(arr, size, 1);
//     }
// }
// int main(){
//     heap h;
//     h.insert(50);
//     h.insert(51);
//     h.insert(52);
//     h.insert(53);
//     h.insert(54);
//     h.insert(55);
//     h.print();

//     h.deletefromHeap();
//     h.print();

//     int arr[6] = {-1, 54, 53, 55, 52, 50};
//     int n=5;
//     //heap creation
//     for(int i=n/2; i>0; i--){
//         heapify(arr, n, 1);
//     }
//     cout<<"Printing the array now"<<endl;
//     for(int i=1; i<=n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     //heapSort
//     heapSort(arr, n);

//     cout<<"Printing the sorted array now"<<endl;
//     for(int i=1; i<=n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     cout<<"Using  Priority Queue here"<<endl;
//     //max heap
//     priority_queue<int> pq;
//     pq.push(4);
//     pq.push(2);
//     pq.push(5);
//     pq.push(3);
//     cout<<"Element at top "<<pq.top()<<endl;
//     pq.pop();
//     cout<<"Element at top "<<pq.top()<<endl;
//     cout<<"Size is "<<pq.size()<<endl;

//     if(pq.empty()){
//         cout<<"pq is empty "<<endl;
//     }
//     else{
//         cout<<"pq is not empty "<<endl;
//     }
//     //min heap
//     priority_queue<int, vector<int>, greater<int> > minheap;
//     minheap.push(4);
//     minheap.push(2);
//     minheap.push(5);
//     minheap.push(3);
//     minheap.push(1);

//     cout<<"Element at top "<<minheap.top() <<endl;
//     minheap.pop();
//     cout<<"Element at top "<<minheap.top() <<endl;
//     cout<<"Size is "<<minheap.size()<<endl;
//     if(minheap.empty()){
//         cout<<"minheap is empty "<<endl;
//     }
//     else{
//         cout<<"minheap is not empty "<<endl;
//     }

//     return 0;
// }




// //Build Min Heap  
// void heapify(vector<int> &arr, int n, int i){
//     int smallest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;
//     if(left < n && arr[smallest] > arr[left]){
//         smallest = left;
//     }
//     if(right < n && arr[smallest] > arr[right]){
//         smallest = right;
//     }
//     if(smallest != i){
//         swap(arr[smallest], arr[i]);
//         heapify(arr, n, smallest);
//     }
// }
// vector<int> buildMinHeap(vector<int> &arr){
//     int n = arr.size();
//     for(int i=n/2-1; i>=0; i--){
//         heapify(arr, n, i);
//     }
//     return arr;
// }



//Build max heap --minor difference b/w min heap and this one




//K-th largest sum subarray
// int getKthLargest(vector<int> &arr, int k){
//     vector<int> sumStore;
//     int n = arr.size();

//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=1; j<n; j++){
//             sum += arr[j];
//             sumStore.push_back(sum);
//         }
//     }
//     sort(sumStore.begin(), sumStore.end());
//     return sumStore[sumStore.size()-k];
// }
// //Another more optimized approach
// int getKthLargest(vector<int> &arr, int k){
//     priority_queue<int, vector<int>, greater<int> >mini;
//     int n = arr.size();
//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             if(mini.size() < k){
//                 mini.push(sum);
//             }
//             else{
//                 if(sum>mini.top()){
//                     mini.pop();
//                     mini.push(sum);
//                 }
//             }
//         }
//     }
//     return mini.top();
// }




// //Merge K sorted arrays
// class node{
//     public:
//     int data;
//     int i;
//     int j;
//     node(int data, int row, int col){
//         this->data = data;
//         i = row;
//         j = col;
//     }
// };
// class compare{
//     public:
//     bool operator()(node* a, node* b){
//         return a->data > b->data;
//     }
// };
// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k){
//     priority_queue<node*, vector<node*>, compare> minHeap;

//     //step1: saare arrays k first element insert h
//     for(int i=0; i<k; i++){
//         node* tmp = new Node(kArrays[i][0], i, 0);
//         minHeap.push(tmp);
//     }
//     vector<int> ans;

//     //step2:
//     while(minHeap.size() > 0){
//         node* tmp = minHeap.top();
//         ans.push_back(tmp->data);
//         minHeap.pop();

//         int i = tmp->i;
//         int j = tmp->j;
//         if(j+1 < kArrays[i].size()){
//             node* next = new node(kArrays[i][j+1], i, j+1);
//             minHeap.push(next);
//         }
//     }
//     return ans;
// }




// //Merge K sorted Linked list
// class commpare{
//     public:
//     bool operator()(Node<int>* a, Node<int>* b){
//         return a->data > b->data;
//     }
// };
// Node<int>* mergeKLists(vector<Node<int>*> &listArray){
//     priority_queue<Node<int>*, vector<Node<int>*>, compare > minHeap;

//     int k = listArray.size();
//     if(k == a){
//         return NULL;
//     }
//     //step1:
//     for(int i=0; i<k; i++){
//         if(listArray[i] != NULL){
//             minHeap.push(listArray[i]);
//         }
//     }
//     Node<int>* head = NULL;
//     Node<int>* tail = NULL;

//     while(minHeap.size() > 0){
//         Node<int>* top = minHeap.top();
//         minHeap.pop();
//         if(top->next != NULL){
//             minHeap.push(top->next);
//         }
//         if(head == NULL){
//             //answer LL is empty
//             head = top;
//             tail = top;
//         }
//         else{
//             //insert at Linked list
//             tail->next = top;
//             tail = top;
//         }
//     }
//     return head;
// }





// //Smallest Range from K sorted list
// #include<limits.h>
// #include<queue>
// class node{
//     public:
//     int data;
//     int row;
//     int col;
//     node(int d, int r, int cl){
//         data = d;
//         row = r;
//         col = c;
//     }
// };
// class compare{
//     public:
//     bool operator()(node* a, node* b){
//         return a->data > b->data;
//     }
// };
// int kSorted(vector<vector<int>> &a, int k, int n){
//     int mini = INT_MAX, maxi = INT_MIN;
//     priority_queue<node, vector<node>, compare> minHeap;
//     //Step1 : create a min heap for starting element of each list and tracking mini/maxi ......
//     for(int i=0; i<k; i++){
//         int element = a[i][0];
//         mini = min(mini, element);
//         maxi = max(maxi, element);
//         minHeap.push(new node(element, i, 0));
//     }
//     int start = mini, end = maxi;
//     //process ranges
//     while(!minHeap.empty()){
//         //mini fetch
//         node* temp = minHeap.top();
//         minHeap.pop();
//         mini = temp->data;
//         //ranges or answer updation
//         if(maxi-mini < end-start){
//             start = mini;
//             end = maxi;
//         }
//         //next element exists
//         if(temp->col+1 < n){
//             maxi = max(maxi, a[temp->row+][temp->col + 1]);
//             minHeap.push(new node(a[temp->row][temp->col + 1], temp->row, temp->col + 1));
//         }
//         //next element does not exist
//         else{
//             break;
//         }
//     }
//     //returning the difference
//     return (end-start+1);
// }





// //Median in a Stream
// #include<queue>
// int signal(int a, int b){
//     if(a==b){
//         return 0;
//     }
//     else if(a>b){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }
// void callMedian(int element, priority_queue<int> &maxi, priority_queue<int, vector<int>, greater<int> > &mini, int &median){
//     switch(signum(maxi.size(), mini.size())){
//         case 0 : if(element > median){
//             mini.push(element);
//             median = mini.top();
//         }
//         else{
//             maxi.push(element);
//             median = maxi.top();
//         }
//         break;

//         case 1 : if(element > median){
//             mini.push(element);
//             median = (mini.top() + maxi.top())/2;
//         }
//         else{
//             mini.push(maxi.top());
//             maxi.pop();
//             maxi.push(element);
//             median = (mini.top() + maxi.top())/2;
//         }
//         break;

//         case -1 : if(element > median){
//             maxi.push(mini.top());
//             mini.pop();
//             mini.push(element);
//             median = (mini.top() + maxi.top())/2;
//         }
//         else{
//             maxi.push(element);
//             median = (mini.top() + maxi.top())/2;
//         }
//         break;
//     }
// }
// vector<int> findMedian(vector<int> &arr, int n){
//     vector<int> ans;
//     priority_queue<int> maxheap;
//     priority_queue<int, vector<int>, greater<int> > minheap;
//     int median = 0;
//     for(int i=0; i<n; i++){
//         callMedian(arr[i], maxheap, minheap, median);
//         ans.push_back(median);
//     }
//     return ans;
// }