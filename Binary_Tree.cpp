// #include<iostream>
// #include<queue>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// node* buildTree(node* root){
//     cout<<"Enter the data: ";
//     int data;
//     cin>>data;
//     root = new node(data);
//     if(data == -1){
//         return NULL;
//     }
//     cout<<"Enter data for inserting in left of "<<data<<endl;
//     root->left = buildTree(root->left);
//     cout<<"Enter data for inserting in right of "<<data<<endl;
//     root->right = buildTree(root->right);  
//     return root;
// }
// void levelOrderTraversal(node* root){
//         queue<node> q;
//         q.push(root);
//         q.push(NULL);
//         while(!q.empty()){
//             node* temp = q.front();
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
// void inorder(Node* root){
//     //base case
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void preorder(node* root){
//     //base case
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void postorder(node* root){
//     //base case
//     if(root == NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }

// node* buildFromLevelOrder(node* root){
//     queue<node*> q;
//     cout<<"Enter data for root "<<endl;
//     int data;
//     cin>>data;
//     root = new node(data);
//     q.push(root);

//     while(!q.empty()){
//         node* temp = q.front();
//         q.pop();
//         cout<<"Enter the left node for "<<temp->data<<endl;
//         int leftData;
//         cin>>leftData;

//         if(leftData != -1){
//             temp -> left = new node(leftData);
//             q.push(temp->left);
//         }
//         cout<<"Enter right node for "<<temp->data<<endl;
//         int rightData;
//         cin>>rightData;
//         if(rightData != -1){
//             temp -> right = new node(rightData);
//             q.push(temp->right);
//         }
//     }
// }
// int main(){
//     node* root = NULL;
//     // //creating a tree
//     // root = buildTree(root);

//     // //level order
//     // cout<<"Printing the level order traversal output"<<endl;
//     // levelOrderTraversal(root);

//     // //inorder traversal
//     // cout<<"Inorder traversal is "<<endl;
//     // inorder(root);

    
//     // //Preorder traversal
//     // cout<<"Preorder traversal is "<<endl;
//     // preorder(root);

//     // //Postorder traversal
//     // cout<<"Postorder traversal is "<<endl;
//     // postorder(root);

//     buildFromLevelOrder(root);
//     levelOrderTraversal(root);
//     return 0;
// }



// //Count leaf Nodes   --Coding ninja
// void inorder(BinaryTreeNode<int> *root, int &count){
//     //base case
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left, count);
//     //leaf node
//     if(root-> left == NULL && root-> right == NULL){
//         count++;
//     }
//     inorder(root -> right, count);
// }
// int noOfLeafNodes(BinaryTreeNode<int> *root){
//     int cnt = 0;
//     inorder(root, cnt);
//     return cnt;
// }



// //Height of binary tree
// class Solution{
//     public:
//     int height(struct Node* node){
//         //base case
//         if(node==NULL){
//             return 0;
//         }
//         int left = height(node->left);
//         int right = height(node->right);
//         int ans = max(left, right)+1;
//         return ans;
//     }
// }



//Diameter of binary tree
// class Solution{  //more space consuming
//     public:
//     int diameter(Node* root){
//         //base case
//         if(root == NULL){
//             return 0;
//         }
//         int op1 = diameter(root->left);
//         int op2 = diameter(root->right);
//         int op3 = height(root->left) + height(root->right) + 1;
//         int ans = max(op1, max(op2, op3))'
//         return ans;
//     }
// }
//More optimized approach
// class Solution{ 
//     private:
//     int height(struct Node* node){
//         //base case
//         if(node==NULL){
//             return 0;
//         }
//         int left = height(node->left);
//         int right = height(node->right);
//         int ans = max(left, right)+1;
//         return ans;
//     }
//     public:
//     int diameter(Node* root){
//         //base case
//         if(root == NULL){
//             return 0;
//         }
//         int op1 = diameter(root->left);
//         int op2 = diameter(root->right);
//         int op3 = height(root->left) + height(root->right) + 1;
//         int ans = max(op1, max(op2, op3))'
//         return ans;
//     }
// }
// //Another approach
// class Solution{
//     private:
//     int height(struct Node* node){
//         //base case
//         if(node==NULL){
//             return 0;
//         }
//         int left = height(node->left);
//         int right = height(node->right);
//         int ans = max(left, right)+1;
//         return ans;
//     }
//     public:
//     pair<int,int> diameterFast(Node* root){
//         //base case
//         if(root == NULL){
//             pair<int, int> p = make_pair(0,0);
//             return p;
//         }
//         pair<int,int> left = diameterFast(root->left);
//         pair<int, int> right = diameterFast(root->right);
//         int op1 = left.first;
//         int op2 = right.first;
//         int op3 = left.second + right.second + 1;

//         pair<int, int> ans;
//         ans.first = max(op1, max(op2, op3));
//         ans.second = max(left.second, right.second) + 1;
//         return ans;
//     }
//     int diameter(Node* root){
//         return diameterFast(root).first;
//     }
// };



// // //Check Balanced Tree
// // class Solution{
// //     private:
// //     int height(struct Node* node){
// //         //base case
// //         if(node == NULL){
// //             return 0;
// //         }
// //         int left = height(node->left);
// //         int right = height(node->right);
// //         int ans = max(left, right) + 1;
// //         return ans;
// //     }
// //     public:
// //     bool isBalanced(Node* root){
// //         //base case
// //         if(root == NULL){
// //             return true;
// //         }
// //         bool left = isBalanced(root->left);
// //         bool right = isBalanced(root->right);
// //         bool diff = abs(height(root->left) - height(root->right)) <= 1;

// //         if(left && right && diff){
// //             return 1;
// //         }
// //         else{
// //             return false;
// //         }
// //     }
// // };
// //More optimized approach
// class Solution{
//     public:
//     pair<bool, int> isBalancedFast(Node* root){
//         if(root == NULL){
//             pair<bool, int> p = make_pair(true, 0);
//             return p;
//         }
//         pair<int, int> left = isBalancedFast(root->left);
//         pair<int, int> right = isBalancedFast(root->right);

//         bool leftAns = left.first;
//         bool rightAns = right.first;

//         bool diff = abs(left.second - right.second) <= 1;
//         pair<bool, int> ans;
//         ans.second = max(left.second, right.second) + 1;
//         if(left && right && diff){
//             ans.first = true;
//         }
//         else{
//             ans.first = false;
//         }
//         return ans;
//     }
//     bool isBalanced(Node* root){
//         return isBalancedFast(root).first;
//     }
// };



// //Determine if Two Trees are Identical
// class Solution{
//     public:
//     bool isIdentical(Node* r1, Node* r2){
//         //base case
//         if(r1 == NULL && r2 == NULL){
//             return true;
//         }
//         if(r1 == NULL && r2 != NULL){
//             return false;
//         }
//         if(r1 != NULL && r2 == NULL){
//             return false;
//         }
//         bool left = isIdentical(r1->left, r2->left);
//         bool right = isIdentical(r1->right, r2->right);
//         bool value = r1->data == r2->data;
//         if(left && right && value){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };



// // //Sum Tree
// // class Solution{
// //     public:
// //     void sum(Node* root, int &sumTotal){
// //         if(root == NULL){
// //             return 0;
// //         }
// //     }
// //     bool isSumTree(Node* root){
// //         if(root == NULL){
// //             return true;
// //         }
// //         int sumTotal = 0;
// //         if(root->data == sum(root->left, sumTotal.........))
// //     }
// // };
// //Another optimized approach
// class Solution{
//     public:
//     pair<bool, int> isSumTreeFast(Node* root){
//         //base case
//         if(root == NULL){
//             pair<bool, int> p = make_pair(true, 0);
//             return p;
//         }
//         if(root->left == NULL && root->right == NULL){
//             pair<bool, int> p = make_pair(true, root->data);
//             return p;
//         }
//         pair<bool, int> leftAns = isSumTreeFast(root->left);
//         pair<bool, int> rightAns = isSumTreeFast(root->right);

//         bool left = leftAns.first;
//         bool right = rightAns.first;

//         bool condn = root->data == leftAns.second + rightAns.second;

//         pair<bool, int> ans;

//         if(left && right && condn){
//             ans.first = true;
//             ans.second = 2*root->data;
//         }
//         else{
//             ans.first = false;
//         }
//         return ans;
//     }
//     bool isSumTree(Node* root){
//         return isSumTreeFast(root).first;
//     }
// };



// //Zig-Zag Tree Traversal
// class Solution{
//     public:
//     vector<int> zigzagTraversal(Node* root){
//         vector<int> result;
//         if(root == NULL){
//             return result;
//         }
//         queue<Node*> q;
//         q.push(root);
//         bool leftToRight = true;
//         while(!q.empty()){
//             int size = q.size();
//             vector<int> ans(size);
//             //level process
//             for(int i=0; i<size; i++){
//                 Node* frontNode = q.front();
//                 q.pop();
//                 int index = leftToRight ? i : size - i -1;
//                 arr[index] = frontNode -> data;

//                 if(frontNode->left){
//                     q.push(frontNode -> left);
//                 }
//                 if(frontNode->right){
//                     q.push(frontNode -> right);
//                 }
//             }
//             //change direction
//             leftToRight = !leftToRight;
//             for(auto i : ans){
//                 result.push_back(i);
//             }
//         }
//         return result;
//     }
// };



// //Boundary Traversal of binary tree
// class Solution{
//     public:
//     void traversalLeft(Node* root, vector<int> &ans){
//         //base case
//         if((root == NULL) || (root->left == NULL && root->right == NULL)){
//             return;
//         }
//         ans.push_back(root->data);
//         if(root->left){
//             traversalLeft(root->left, ans);
//         }
//         else{
//             traversalLeft(root->right, ans);
//         }
//     }
//     void traversalLeaf(Node* root, vector<int> &ans){
//         //base case
//         if(root == NULL){
//             return;
//         }
//         if(root->left == NULL && root->right == NULL){
//             ans.push_back(root->data);
//             return;
//         }
//         traversalLeaf(root->left, ans);
//         traversalLeaf(root->right, ans);
//     }
//     void traverseRight(Node* root, vector<int> &ans){
//         //base case
//         if((root == NULL) || (root->left == NULL && root->right == NULL)){
//             return;
//         }
//         if(root->right){
//             traverseRight(root->right, ans);
//         }
//         else{
//             traverseRight(root->left, ans);
//         }
//         //wapas aagya
//         ans.push_back(root->data);
//     }
//     vector<int> boundary(Node* root){
//         vector<int> ans;
//         if(root == NULL){
//             return ans;
//         }
//         ans.push_back(root->data);

//         //left part print/store
//         traversaLeft(root->left, ans);

//         //traverse leaf nodes
//         //left subtree
//         traversalLeaf(root->left, ans);
//         //right subtree
//         traversalLeaf(root->right, ans);

//         //traverse right part
//         traverseRight(root->right, ans);

//         return ans;
//     }
// };




// //Vertical traversal of binary tree
// class Solution{
//     public:
//     vector<int> verticalOrder(Node *root){
//         map<int, map<int,vector<int> > > nodes;
//         queue<pair<Node*, pair<int, int> > > q;
//         vector<int> ans;
//         if(root == NULL){
//             return ans;
//         }
//         q.push(make_pair(root, make_pair(0,0)));
//         while(!q.empty()){
//             pair<Node*, pair<int, int> > temp = q.front();

//             Node* frontNode = temp.first;
//             int hd = temp.second.first;
//             int lvl = temp.second.second;

//             nodes[hd][lvl].push_back(frontNode->data);
//             if(frontNode->left){
//                 q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1)));
//             }
//             if(frontNode->right){
//                 q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
//             }
//         }
//         for(auto i : nodes){
//             for(auto j : second){
//                 for(auto k : second){
//                     ans.push_back(k);
//                 }
//             }
//         }
//         return ans;
//     }
// };



// //Top view of binary tree
// class Solution{
//     public:
//     vector<int> topView(Node *root){
//         vector<int> ans;
//         if(root == NULL){
//             return ans;
//         }
//         map<int, int> topNode;
//         queue<pair<Node*, int> > q;
//         q.push(make_pair(root, 0));
//         while(!q.empty()){
//             pair<Node*, int> temp = q.front();
//             q.pop();
//             Node* frontNode = temp.first;
//             int hd = temp.second;
//             //if one value is present for a HD, then do nothing
//             if(topNode.find[hd] == topNode.end()){
//                 topNode[hd] = frontNode -> data;
//             }
//             if(frontNode->left){
//                 q.push(make_pair(frontNode->left, hd-1));
//             }
//             if(frontNode->right){
//                 q.push(make_pair(frontNode->right, hd+1));
//             }
//         }
//         for(auto i : topNode){
//             ans.push_back(i.second);
//         }
//         return ans;
//     }
// };



// //Bottom view of binary tree
// class Solution{
//     public:
//     vector<int> topView(Node *root){
//         vector<int> ans;
//         if(root == NULL){
//             return ans;
//         }
//         map<int, int> topNode;
//         queue<pair<Node*, int> > q;
//         q.push(make_pair(root, 0));
//         while(!q.empty()){
//             pair<Node*, int> temp = q.front();
//             q.pop();
//             Node* frontNode = temp.first;
//             int hd = temp.second;

//             topNode[hd] = frontNode->data;

//             if(frontNode->left){
//                 q.push(make_pair(frontNode->left, hd-1));
//             }
//             if(frontNode->right){
//                 q.push(make_pair(frontNode->right, hd+1));
//             }
//         }
//         for(auto i : topNode){
//             ans.push_back(i.second);
//         }
//         return ans;
//     }
// };




// //Left view of Binary tree
// void solve(Node* root, vector<int> &ans, int level){
//     //base case
//     if(root == NULL){
//         return;
//     }
//     //we entered into a new level
//     if(level == ans.size()){
//         ans.push_back(root->data);
//     }
//     solve(root->left, ans, level + 1);
//     solve(root->right, ans, level + 1);
// }
// vector<int> leftview(Node* root){
//     vector<int> ans;
//     solve(root, ans, 0);
//     return ans;
// }



// //Right view of Binary tree
// void solve(Node* root, vector<int> &ans, int level){
//     //base case
//     if(root == NULL){
//         return;
//     }
//     //we entered into a new level
//     if(level == ans.size()){
//         ans.push_back(root->data);
//     }
//     solve(root->right, ans, level + 1);
//     solve(root->left, ans, level + 1);
// }
// vector<int> leftview(Node* root){
//     vector<int> ans;
//     solve(root, ans, 0);
//     return ans;
// }



// //Sum of the largest Bloodline of a tree(sum of nodes on the largest path from root to leaf node)
// class Solution{
//     public:
//     void solve(Node* root, int sum, int &maxSum, int len, int &maxlen){
//         //base case
//         if(root == NULL){
//             if(len>maxlen){
//                 maxlen = len;
//                 maxSum = sum;
//             }
//             else if(len == maxlen){
//                 maxSum = max(sum, maxSum);
//             }
//             return;
//         }
//         sum = sum+root->data;
//         solve(root->left, sum, maxSum, len+1, maxlen);
//         solve(root->right, sum, maxSum, len+1, maxlen);
//     }
//     int sumOfLongToLeafPath(Node* root){
//         int len = 0;
//         int maxlen = 0;
//         int sum = 0;
//         int maxSum = INT_MIN;
//         solve(root, sum, maxSum, len, maxlen);
//         return maxSum;
//     }
// };



// //Lowest Common Ancestor in a Binary Tree
// class Solution{
//     public:
//     Node* lca(Node* root, int n1, int n2){
//         //base case
//         if(root == NULL){
//             return NULL;
//         }
//         if(root->data == n1 || root->data == n2){
//             return root;
//         }
//         Node* leftAns = lca(root->left, n1, n2);
//         Node* rightAns = lca(root->right, n1, n2);
//         if(leftAns != NULL && rightAns != NULL){
//             return root;
//         }
//         else if(leftAns != NULL && rightAns == NULL){
//             return leftAns;
//         }
//         else if(leftAns == NULL && rightAns != NULL){
//             return rightAns;
//         }
//         else{
//             return NULL;
//         }
//     }
// };




// //K Sum Path
// class Solution{
//     public:
//     void solve(Node* root, int k, int &count, vector<int> path){
//         //base case
//         if(root == NULL){
//             return;
//         }
//         path.push_back(root->data);
//         //left 
//         solve(root->left, k, count, path);
//         //right
//         solve(root->right, k, count, path);
//         //check for k sum
//         int size = path.size();
//         int sum = 0;
//         for(int i=size-1; i>=0; i--){
//             sum += path[i];
//             if(sum == k){
//                 count++;
//             }
//         }
//         path.pop_back();
//     }
//     int sumK(Node* root, int k){
//         vector<int> path;
//         int count = 0;
//         solve(root, k, count, path);
//         return count;
//     }
// };




// //Kth Ancestor in a tree
// Node* solve(Node* root, int &k, int node){
//     //base case
//     if(root == NULL){
//         return NULL;
//     }
//     if(root->data == node){
//         return root;
//     }
//     Node* leftAns = solve(root->left, k, node);
//     Node* rightAns = solve(root->right, k, node);
//     if(leftAns != NULL && rightAns == NULL){
//         k--;
//         if(k<=0){
//             //answer lock
//             k = INT_MAX;
//             return root;
//         }
//         return leftAns;
//     }
//     if(leftAns == NULL && rightAns != NULL){
//         k--;
//         if(k<=0){
//             //answer lock
//             k = INT_MAX;
//             return root;
//         }
//         return rightAns;
//     }
//     return NULL;
// }
// int kthAncestor(Node* root, int k, int node){
//     Node* ans = solve(root, k, node);
//     if(ans == NULL || ans->data == node){
//         return -1;
//     }
//     else{
//         return ans->data;
//     }
// }



// //Maximum sum of Non-adjacent nodes
// class Solution{
//     public:
//     pair<int, int> solve(Node* root){
//         //base case
//         if(root == NULL){
//             pair<int, int> p = make_pair(0,0);
//             return p;
//         }
//         pair<int, int> left = solve(root->left);
//         pair<int, int> right = solve(root->right);
//         pair<int, int> res;
//         res.first = root->data + left.second + right.second;
//         res.second = max(left.first, left.second) + max(right.first, right.second);
//         return res;
//     }
//     int getMaxSum(Node* root){
//         pair<int, int> ans = solve(root);
//         return max(ans.first, ans.second);
//     }
// };




// //Check Tree from Inorder & Preorder
// class Solution{
//     public:
//     void createMapping(int in[], map<int, int> &nodeToIndex, int n){
//         for(int i=0; i<n; i++){
//             nodeToIndex[in[i]] = i;
//         }
//     }
//     int findPosition(int in[], int element, int n){
//         for(int i=0; i<n; i++){
//             if(in[i] == element){
//                 return i;
//             }
//         }
//         return -1;
//     }
//     Node* solve(int in[], int pre[], int index, int inorderStart, int inorderEnd, int n,  map<int, int> &nodeToIndex){
//         //base case
//         if(index >= n || inorderStart > inorderEnd){
//             return NULL;
//         }
//         int element = pre[index++];
//         Node* root = new Node(element);
//         //find element's index in inorder
//         int position = nodeToIndex[element];
//         //int position = findPosition(in, element, n);  using O(1) space complexity that's why we are not using this function

//         //recursive calls
//         root->left = solve(in, pre, index, inorderStart, position-1, n, nodeToIndex);
//         root->right = solve(in, pre, index, position+1, inorderEnd, n, nodeToIndex);
//         return root;
//     }
//     Node* buildTree(int in[], int pre[], int n){
//         int preOrderIndex = 0;
//         map<int, int> nodeToIndex;
//         //create nodes to index mapping
//         createMapping(in, nodeToIndex, n);
//         Node* ans = solve(in, pre, preOrderIndex, 0, n-1);
//         return ans;
//     }
// };





// //Check Tree from Postorder & Inorder
// class Solution{
//     public:
//     void createMapping(int in[], map<int, int> &nodeToIndex, int n){
//         for(int i=0; i<n; i++){
//             nodeToIndex[in[i]] = i;
//         }
//     }
//     Node* solve(int in[], int post[], int index, int inorderStart, int inorderEnd, int n,map<int, int> &nodeToIndex){
//         //base case
//         if(index < 0 || inorderStart > inorderEnd){
//             return NULL;
//         }
//         //create a root node for element
//         int element = post[index--];
//         Node* root = new Node(element);
//         //find element's index in inorder
//         int position = nodeToIndex[element];
//         //int position = findPosition(in, element, n);  using O(1) space complexity that's why we are not using this function

//         //recursive calls
//         root->right = solve(in, post, index, position+1,inorderEnd, n, nodeToIndex);
//         root->left = solve(in, post, index, inorderStart, position-1, n, nodeToIndex);
//         return root;
//     }
//     Node* buildTree(int in[], int pre[], int n){
//         int postOrderIndex = n-1+;
//         map<int, int> nodeToIndex;
//         //create nodes to index mapping
//         createMapping(in, nodeToIndex, n);
//         Node* ans = solve(in, post, postOrderIndex, 0, n-1);
//         return ans;
//     }
// };




// //Flatten binary tree in linked list
// class Solution{
//     public:
//     void flatten(Node* root){
//         Node* curr = root;
//         while(curr != NULL){
//             if(curr->left){
//                 Node* pred = curr->left;
//                 while(pred->right){
//                     pred = pred->right;
//                 }
//                 pred->right = curr->right;
//                 curr->right = curr->left;
//                 curr->left = NULL;
//             }
//             curr = curr->right;
//         }
//         //left part NULL
//         curr = root;
//         while(curr!=NULL){
//             curr->left = NULL;
//             curr = curr->right;
//         }
//     }
// };




//Morris travesal important





// //Burning Tree
// class Solution{
//     public:
//     Node* createParentMapping(Node* root, int target, map<Node* , Node*> &nodeToParent){
//         Node* res = NULL;
//         queue<Node*> q;
//         q.push(root);
//         nodeToParent[root] = NULL;
//         while(!q.empty()){
//             Node* front = q.front();
//             q.pop();
            
//             if(front->data == target){
//                 res = front;
//             }
//             if(front->left){
//                 nodeToParent[front->left] = front;
//                 q.push(fornt->left);
//             }
//             if(front->right){
//                 nodeToParent[front->right] = front;
//                 q.push(front->right);
//             }
//         }
//         return res;
//     }
//     int burnTree(Node* root, map<Node*, Node*> &nodeToParent){
//         map<Node*, bool> visited;
//         queue<Node*> q;
//         q.push(root);
//         visited[root] = true;
//         while(!q.empty()){
//             bool flag = 0;
//             int size = q.size();
//             for(int i=0; i<size; i++){
//                 //process neighbour nodes
//                 Node* front = q.front();
//                 q.pop();

//                 if(front->left && !visited[front->left]){
//                     flag = 1;
//                     q.push(front->left);
//                     visited[front->left] - 1;
//                 }
//                 if(front->right && !visited[front->right]){
//                     flag = 1;
//                     q.push(front->right);
//                     visited[front->right] - 1;
//                 }
//                 if(nodeToParent[front] && !visited[nodeToParent[front]]){
//                     flag = 1;
//                     q.push(nodeToParent[front]);
//                     visited[nodeToParent[front]] - 1;
//                 }
//             }
//             if(flag == 1){
//                 ans++;
//             }
//         }
//         return ans;
//     }
//     int minTime(Node* root, int target){
//         map<Node*, Node*> nodeToParent;
//         Node* targetNode = createParentMapping(root, target, nodeToparent);
//         int ans = burnTree(targetNode, nodeToParent);
//         return ans;
//     }
// };




// //Queue Reversal
// queue<int> rev(queue<int> q){
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
//     //store answer of first k sized window
//     if(dq.size() > 0){
//         ans.push_back(A[dq.front()]);
//     }
//     else{
//         ans.push_back(0);
//     }

//     //process for remaining windows
//     for(int i=K; i<N; i++){
//         //removeal
//         if(!dq.empty() && i - dq.front() >= K){
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