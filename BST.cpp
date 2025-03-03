// #include<iostream>
// #include<queue>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     //constructor
//     Node(int d){
//         this-> data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// void levelOrderTraversal(Node* root){
//         queue<Node*> q;
//         q.push(root);
//         q.push(NULL);
//         while(!q.empty()){
//             Node* temp = q.front();
//             cout<< temp ->data <<" ";
//             q.pop();
//             if(temp == NULL){   //purana level complete traverse ho chuka h
//                 cout<<endl;
//                 if(!q.empty()){   //queue still has some child nodes
//                     q.push(NULL);
//                 }
//             }
//             else{
//                 cout<<temp->data<<" ";
//                 if(temp->left){
//                     q.push(temp ->left);
//                 }
//                 if(temp->right){
//                     q.push(temp ->right);
//                 }
//             }
//         }
// }
// Node* insertIntoBST(Node* root, int d){
//     //base case
//     if(root == NULL){
//         root = new Node(d);
//         return root;
//     } 
//     if(d > root->data){
//         //right part me insert krna h
//         root->right = insertIntoBST(root->right, d);
//     }
//     else{
//         root->left = insertIntoBST(root->left, d);
//     }
//     return root;
// }
// Node *minVal(Node* root){
//     Node* temp = root;
//     while(temp->left != NULL){
//         temp = temp->left;
//     }
//     return temp;
// }
// Node *maxVal(Node* root){
//     Node* temp = root;
//     while(temp->right != NULL){
//         temp = temp->right;
//     }
//     return temp;
// }
// Node* deleteFromBST(Node* root, int val){
//     //base case
//     if(root == NULL){
//         return root;
//     }
//     if(root->data == val){
//         //0 child
//         if(root->left == NULL && root->right == NULL){
//             delete root;
//             return NULL;
//         }
//         //1 child
//         //left child
//         if(root->left != NULL && root->right == NULL){
//             Node* temp = root->left;
//             delete root;
//             return temp;
//         }
//         //right child
//         if(root->left == NULL && root->right != NULL){
//             Node* temp = root->right;
//             delete root;
//             return temp;
//         }

//         //2 child
//         if(root->left != NULL && root->right != NULL){
//             int mini = minVal(root->right)->data;
//             root->data = mini;
//             root->right = deleteFromBST(root->right, mini);
//             return root;
//         }
//     }
//     else if(root->data > val){
//         root->left = deleteFromBST(root->left, val);
//         return root;
//     }
//     else{
//         root->right = deleteFromBST(root->right, val);
//         return root;
//     }
// }
// void takeInput(Node* &root){
//     int data;
//     cin>>data;
//     while(data != -1){
//         root = insertIntoBST(root, data);
//         cin>>data;
//     }
// }
// int main(){
//     Node* root = NULL;
//     cout<<"Enter data to create BST "<<endl;
//     takeInput(root);

//     cout<<"Printing the BST"<<endl;
//     levelOrderTraversal(root);

//     //paste inorder, preorder, postorder try that one also

//     cout<<"Min value is "<<minVal(root)->data <<endl;
//     cout<<"Max value is "<<maxVak(root)->data <<endl;

//     root = deleteFromBST(root, 30);

//     //again print to see change in tree
//     return 0;
// }



//Search in BST
// //This one throw TLE 
// bool searchInBST(BinartTreeNode<int> *root, int x){
//     //base case
//     if(root == NULL){
//         return false;
//     }
//     if(root->data == x){
//         return true;
//     }
//     if(root->data > x){
//         //left part m
//         return searchInBST(root->left, x);
//     }
//     else{
//         //right part m
//         return searchInBST(root->right, x);
//     }
// }
// //Another optimized solution'
// bool searchInBST(BinaryTreeNode<int> *root, int x){
//     BinaryTreeNode<int> *temp = root;
//     while(root != NULL){
//         if(root->data == x){
//             return true;
//         }
//         if(root->data > x){
//             temp = temp->left;
//         }
//         else{
//             temp = temp->right;
//         }
//     }
//     return false;
// }




// //Validate BST
// bool isBST(Binary<int> *root, int min, int max){
//     //base case
//     if(root == NULL){
//         return true;
//     }
//     if(root->data >= min && root->data <= max){
//         bool left = isBST(root->left, min, root->data);
//         bool right = isBST(root->right, root->data, max);
//         return left && right;
//     }
//     else{
//         return false;
//     }
// }
// bool validateBST(BinaryTreeNode<int> *root){
//     return isBST(root, INT_MIN, INT_MAX);
// }



// //Find k-th smallest element in BST
// int solve(BinaryTreeNode<int>* root, int& i, int k){
//     //base case
//     if(root == NULL){
//         return -1;
//     }
//     // L
//     int left = solve(root->left, i, k);
//     if(left != -1){
//         return left;
//     }
//     //N
//     i++;
//     if(i == k){
//         return root->data;
//     }
//     //R
//     return solve(root->right, i, k);
// }
// int kthSmallest(BinaryTreeNode<int>* root, int i, int k){
//     int ans = solve(root, i, k);
//     return ans;
// }



// //Predecessor and Successor in BST
// pair<int, int> predecessorSuccessor(BinaryTreeNode<int>* root, int key){
//     //find key
//     BinaryTreeNode<int>* temp = root;
//     int pred = -1;
//     int succ = -1;
//     while(temp->data != key){
//         if(temp->data > key){
//             succ = temp->data;
//             temp = temp->left;
//         }
//         else{
//             pred = temp->data;
//             temp = temp->right;
//         }
//     }
//     //pred and succ
//     //pred
//     BinaryTreeNode<int>* leftTree = temp->left;
//     while(leftTree != NULL){
//         pred = leftTree->data;
//         leftTree = leftTree->right;
//     }
//     //succ
//     BinaryTreeNode<int>* rightTree = temp->right;
//     while(rightTree != NULL){
//         succ = rightTree->data;
//         rightTree = rightTree->left;
//     }
    
//     pair<int, int> ans = make_pair(pred, succ);
//     return ans;
// }




//LCA in BST
// TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q){
//     //base case
//     if(root == NULL){
//         return NULL;
//     }
//     if(root->data < P->data && root->data < Q->data){
//         return LCAinaBST(root->right, P, Q);
//     }
//     if(root->data > P->data && root->data > Q->data){
//         return LCAinaBST(root->left, P, Q);
//     }
//     return root;
// }
// //More optimized
// TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q){
//     //base case
//     if(root == NULL){
//         return NULL;
//     }
//     while(root != NULL){
//         if(root->data < P->data && root->data < Q->data){
//             root = root->right;
//         }
//         else if(root->data > P->data && root->data > Q->data){
//             root = root->left;
//         }
//         else{
//             return root;
//         }
//     }
// }





// //Kth smallest element
// int kthSmallest(int arr[], int l, int r, int k){
//     priority_queue<int> pq;
//     //step1
//     for(int i=0; i<k; i++){
//         pq.push(arr[i]);
//     }
//     //step2
//     for(int i=k; i<=r; i++){
//         if(arr[i] < pq.top()){
//             pq.pop();
//             pq.push(arr[i]);
//         }
//     }
//     //ans = pq.top();
//     int ans = pq.top();
//     return ans;
// }




// //Is binary Tree Heap
// int countNodes(struct Node* root){
//     //base case
//     if(root == NULL){
//         return 0;
//     }
//     int ans = 1 + countNode(root->left) + countNodes(root->right);
//     return ans;
// }
// bool isCBT(struct Node* root, int index, int cnt){
//     if(root == NULL){
//         return true;
//     }
//     if(index >= cnt){
//         return false;
//     }
//     else{
//         bool left = isCBT(root->right, 2*index + 1, cnt);
//         bool right = isCBT(root->right, 2*index + 2, cnt);
//         return (left && right);
//     }
// }
// boo isMaxOrder(struct Node* root){
//     //leaf node
//     if(root->left == NULL && root->right == NULL){
//         return true;
//     }
//     if(root->right == NULL){
//         return (root->data > root->right->data);
//     }
//     else{
//         bool left = isMaxOrder(root->left);
//         bool right = isMaxOrder(root->right);
//         return (left && right && (root->data > root->left->data && root->data > root->right->data));
//     }
// }
// bool isHeap(struct Node* tree){
//     int index = 0;
//     int totalCount = countNodes(root);
//     if(isCBT(tree, index, totalCount) && isMaxOrder(tree)){
//         return true;
//     }
//     else{
//         return false;
//     }
// }




// //Merge two binary Max heaps
// class Solution{
//     public:
//     void heapify(vector<int> &arr, int n, int i){
//         int largest = i;
//         int left = 2*i;
//         int right = 2*i + 1;
//         if(left < n && arr[largest] < arr[left]){
//             largest = left;
//         }
//         if(right < n  && arr[largest] < arr[right]){
//             largest = right;
//         }
//         if(largest != i){
//             swap(arr[largest], arr[i]);
//             heapify(arr, n, largest);
//         }
//     }
//     vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n,int m){
//         //Step 1 : merge both arrays into one
//         vector<int> ans;
//         ans.push_back(-1);
//         for(auto i: a){
//             ans.push_back(i);
//         }
//         for(auto i: b){
//             ans.push_back(i);
//         }
//         //Step 2 : build heap using merge in array
//         int size = arr.size();
//         for(int i = size/2 - 1; i>-0; i--){
//             heapify(ans, size, i);
//         }
//         return ans;
//     }
// };




// //Minimum cost of ropes
// class Solution{
//     public:
//     long long minCost(long long arr[], long long n){
//         priority_queue<long long, vector<long long>, greater<long long> > pq;

//         for(int i=0; i<n; i++){
//             pq.push(arr[i]);
//         }

//         long long cost = 0;
//         while(pq.size() > 1){
//             long long a = pq.top();
//             pq.pop();

//             long long b = pq.top();
//             pq.pop();

//             long long sum = a+b;
//             cost += sum;

//             pq.push(sum);
//         }
//         return cost;
//     }
// };



//Convert BST to Min Heap




// //Merge 2 BST
// void inorder(TreeNode<int> *root, vector<int> &in){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left, in);
//     in.push_back(root->data);
//     inorder(root->right, in);
// }
// vector<int> mergeArray(vector<int> &a, vector<int> &b){
//     vector<int> ans(a.size() + b.size());
//     int i=0, j=0;
//     int k = 0;
//     while(i<a.size() && j<b.size()){
//         if(a[i] < b[j]){
//             ans[k++] = a[i];
//             i++;
//         }
//         else{
//             ans[k++] = b[j];
//             j++;
//         }
//     }
//     while(i<a.size()){
//         ans[k++] = a[i];
//         i++;
//     }
//     while(j<b.size()){
//         ans[k++] = b[j];
//         j++;
//     }
//     return ans;
// }
// TreeNode<int>* inorderToBST(int s,int e, vector<int> &in){
//     //base case
//     if(s>e){
//         return NULL;
//     }
//     int mid = (s+e)/2;
//     TreeNode<int>* root = new TreeNode<int>(in[mid]);
//     root->left = inorderToBST(s, mid-1, in);
//     root->right = inorderToBST(mid+1, e, in);
//     return root;
// }
// void convertIntoSortedDLL(TreeNode<int> *root, TreeNode<int>* &head){
//     //base case
//     if(root == NULL){
//         return NULL;
//     }
//     convertIntoSortedDLL(root->right, head);
//     root->right = head;
//     if(head!=NULL){
//         head->left = root;
//     }
//     head = root;
//     convertIntoSortedDLL(root->left, head);
// }
// TreeNode<int> mergeLinkedList(TreeNode<int> *head1, TreeNode<int> *head2){
//     TreeNode<int> *head = NULL;
//     TreeNode<int> *tail = NULL;
//     while(head1 != NULL && head2 != NULL){
//         if(head1->data < head2->data){
//             if(head == NULL){
//                 head = head1;
//                 tail = tail1;
//                 head1 = head1->right;
//             }
//             else{
//                 tail->right = head1;
//                 head1->left = tail;
//                 tail = head1;
//                 head1 = head1->right;
//             }
//         }
//         else{
//             if(head == NULL){
//                 head = head2;
//                 tail = head2;
//                 head1 = head2->right;
//             }
//             else{
//                 tail->right = head2;
//                 head2->left = tail;
//                 tail = head2;
//                 head2 = head2->right;
//             }
//         }
//     }
//     while(head1 != NULL){
//         tail->right = head1;
//         head1->left = tail;
//         tail = head1;
//         head1 = head1->right;
//     }
//     while(head2 != NULL){
//         tail->right = head2;
//         head2->left = tail;
//         tail = head2;
//         head2 = head2->right;
//     }
//     return head;
// }
// int countNodes(TreeNode<int> *head){
//     int cnt = 0;
//     TreeNode<int> *temp = head;
//     while(temp != NULL){
//         cnt++;
//         temp = temp->right;
//     }
//     return cnt;
// }
// TreeNode<int>* sortedLLToBST(TreeNode<int>* &head, int n){
//     //base case
//     if(n<=0 || root==NULL){
//         return NULL;
//     }
//     TreeNode<int> *left = sortedLLToBST(head, n/2);

//     TreeNode<int> *root = head;
//     root->left = left;

//     head = head->next;

//     root->right = sortedLLToBST(head, n-n/2-1);
//     return root;
// }
// TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
//     /*
//     //step 1 : store inorder
//     vector<int> bst1, bst2;
//     inorder(root1, bst1);
//     inorder(root2, bst2);

//     //step 2 : merge both sorted arrays
//     vector<int> mergeArray = mergeArrays(bst1, bst2);

//     //step 3 : use merged inorder array to build BST
//     int s = 0, e = mergeArray.size()-1;
//     return inorderToBST(s, e, mergeArray);
//     */

//    //Step1 : convert BST into Sorted DLL in-place
//    TreeNode<int> *head1 = NULL;
//    convertIntoSortedDLL(root1, head1);
//    head1->left = NULL;

//    TreeNode<int> *head2 = NULL;
//    convertIntoSortedDLL(root2, head2);
//    head2->left = NULL;
//    //step2 : merge sorted linked list
//    TreeNode<int> *head = mergeLinkedList(head1, head2);

//    //step3 : convert sll int bst
//    return sortedLLToBST(head, countNodes(head));
// }





// //Largest BST subtree
// class info{
//     public:
//     int maxi;
//     int mini;
//     bool isBST;
//     int size;
// };
// info solve(TreeNode<int> *root, int &ans){
//     //base case
//     if(root == NULL){
//         return {INT_MIN, INT_MAX, true, 0};
//     }
//     info left = solve(root->left, ans);
//     info right = solve(root->right, ans);

//     info currNode;
//     currNode.size = left.size + right.size + 1;
//     currNode.maxi = max(root->data, right.maxi);
//     currNode.mini = min(root->data, left.mini);

//     if(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)){
//         currNode.isBST = true;
//     }
//     else{
//         currNode.isBST = false;
//     }

//     //answer update
//     if(currNode.isBST){
//         ans = max(ans, currNode.size);
//     }
//     return currNode;
// }
// int largestBST(TreeNode<int>* root){
//     int maxSize = 0;
//     info temp = solve(root, maxSize);
//     return maxSize;
// }




// //Two Sum in a BST
// void inorder(BinaryTreeNode<int>* root, vector<int> &in){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left, in);
//     in.push_back(root->data);
//     inorder(root->right, in);
// }
// bool twoSumInBST(BinaryTreeNode<int>* root, int target){
//     vector<int> inorderVal;
//     //store inorder -> sorted values
//     inorder(root, inorderVal);
//     //use 2 pointer approach to check if pair exists
//     int i=0, j=inorderVal.size()-1;
//     while(i<j){
//         int sum = inorderVal[i] + inorderVal[j];
//         if(sum == target){
//             return true;
//         }
//         else if(sum>target){
//             j--;
//         }
//         else{
//             j++;
//         }
//     }
//     return false;
// }





// //Flatten BST to a sorted list
// void inorder(BinaryTreeNode<int>* root, vector<int> &in){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left, in);
//     in.push_back(root->data);
//     inorder(root->right, in);
// }
// TreeNode<int>* flatten(TreeNode<int>* root){
//     vector<int> inorderVal;
//     //store inorder -> sorted values
//     inorder(root, inorderVal);

//     TreeNode<int>* newRoot = new TreeNode<int>(inorderVal[0]);

//     TreeNode<int>* curr = newRoot;

//     //2nd step
//     for(int i=1; i<n; i++){
//         TreeNode<int> *temp = new TreeNode<int>(inorderVal[i]);

//         curr->left = NULL;
//         curr->right = temp;
//         curr = temp;
//     }
//     //3rd step
//     curr->left = NULL;
//     curr->right = NULL;
//     return newRoot;
// }





// //Normal BST To balanced BST
// void inorder(BinaryTreeNode<int>* root, vector<int> &in){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left, in);
//     in.push_back(root->data);
//     inorder(root->right, in);
// }
// TreeNode<int>* inorderToBST(int s, int e, vector<int> &in){
//     //base case
//     if(s>e){
//         return NULL;
//     }
//     int mid = (s+e)/2;
//     TreeNode<int>* root = new TreeNode<int>(in[mid]);
//     root->left = inorderToBST(s, mid-1, in);
//     root->right = inorderToBST(mid+1, e, in);
//     return root;
// }
// TreeNode<int>* balancedBST(TreeNode<int>* root){
//     vector<int> inorderVal;
//     //store inorder -> sorted values
//     inorder(root, inorderVal);

//     return inorderToBST(0, inorderVal.size()-1, inorderVal);
// }





// //Preorder Traversal of a BST
// BinaryTreeNode<int>* solve(vector<int> &preorder, int mini, int maxi, int &i){
//     if(i >= preorder.size()){
//         return NULL;
//     }
//     if(preorder[i] < mini || preorde[i] > maxi){
//         return NULL;
//     }
    
//     BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[i++]);
//     root->left = solve(preorder, mini, root->data, i);
//     root->right = solve(preorder, root->data, maxi, i);
//     return root;
// }
// BinaryTreeNode<int>* preorderToBST(vector<int> &preorder){
//     int mini = INT_MIN;
//     int maxi = INT_MAX;
//     int i = 0;
//     return solve(preorder, mini, maxi, i);
// }