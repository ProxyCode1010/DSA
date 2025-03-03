// //N meetings in one room
// class Solution{
//     public:
//     static bool cmp(pair<int, int> a, pair<int, int> b){
//         return a.second < b.second;
//     }
//     int maxMeetings(int start[], int end[], int n){
//         vector<pair<int, int> v;
//         for(int i=0; i<n; i++){
//             pair<int, int> p = make_pair(start[i], end[i]);
//             v.push_back(p);
//         }
//         sort(v.begin(), v.end(), cmp);

//         int count = 1;
//         int ansEnd = v[0].second;

//         for(int i=1; i<n; i++){
//             if(v[i].first > ansEnd){
//                 count++;
//                 ansEnd = v[i].second;
//             }
//         }
//         return count;
//     }
// };




//Maximum Meetings in one room   -> gog question



// //Shop in Candy Shop
// class Solution{
//     public:
//     vector<int> candyStore(int candies[], int N, int K){
//         sort(candies, candies+N);
//         int mini = 0;
//         int buy = 0;
//         int free = N-1;

//         while(buy <= free){
//             mini = mini + candies[buy];
//             buy++;
//             free = free - k;
//         }
//         int maxi = 0;
//         buy = N-1;
//         free = 0;

//         while(free <= buy){
//             maxi = maxi + candies[buy];
//             buy--;
//             free = free + K;
//         }
//         vector<int> ans; 
//         ans.push_back(mini);
//         ans.push_back(maxi);
//         return ans;
//     }
// };





// //Check if it is possible to survive on Island
// class Solution{
//     public:
//     int minimumDays(int S, int N, int M){
//         int sunday = S/7;

//         int buyingDays = S - sunday;
//         int totalFood = S*M;
//         int ans = 0;
//         if(totalFood % N == 0){
//             ans = totalFood/N;
//         }
//         else{
//             ans = totalFood/N + 1;
//         }
        
//         if(ans <= buyingDays){
//             return ans;
//         }
//         else{
//             return -1;
//         }
//     }
// }





// //Reverse words in a given string
// class Solution{
//     public:
//     string reverseWords(string S){
//         string ans = "";
//         string temp = "";
//         for(int i=S.length()-1; i>=0; i--){
//             if(S[i] == '.'){
//                 reverse(temp.begin(), temp.end());
//                 ans = ans + temp;
//                 ans.push_back('.');
//                 temp = "";
//             }
//             else{
//                 temp.push_back(S[i]);
//             }
//         }
//         reverse(temp.begin(), temp.end());
//         ans = ans + temp;
//         return ans;
//     }
// };





// //Chocolate Distribution Problem
// class Solution{
//     public:
//     long long findMinDiff(vector<long long> a, long long n, long long m){
//         sort(a.begin(), a.end());
//         int i = 0;
//         int j = m-1;
        
//         int mini = INT_MAX;
//         while(j < a.size()){
//             int diff = a[j] - a[i];
//             mini = min(mini, diff);
//             i++;
//             j++;
//         }
//         return mini;
//     }
// };






// //Minimum Cost of rapes
// class Solution{
//     public:
//     long long minCost(long long arr[], long long n){
//         priority_queue<long long, vector<long long>, greater<long long> > pq;

//         for((int i=0; i<n; i++)){
//             pq.push(arr[i]);
//         }

//         long long cost = 0;
//         while(pq.size() > 1){
//             long long first = pq.top();
//             pq.pop();

//             long long second = pq.top();
//             pq.pop();

//             long long mergedLength = first + second;
//             cost = cost + mergedLength;
            
//             pq.push(mergedLength);
//         }
//         return cost;
//     }
// };





// //Huffman Encoding
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int d){
//         data = d;
//         left = NULL;
//         right = NULL;
//     }
// };
// class cmp{
//     public:
//     bool operator()(Node* a, Node* b){
//         return a->data > b->data;
//     }
// };
// class Solution{
//     public:
//     void traverse(Node* root, vector<string>& ans, string temp){
//         //base case
//         if(root->left == NULL && root->right == NULL){
//             ans.push_back(temp);
//             return;
//         }
//         traverse(root->left, ans, temp+'0');
//         traverse(root->right, ans, temp+'1');
//     }
//     vector<string> huffmanCodes(string s, vector<int> f, int N){
//         priority_queue<Node*, vector<Node*>, cmp> pq;

//         for(int i=0; i<N; i++){
//             Node* temp = new Node(f[i]);
//             pq.push(temp);
//         }
//         while(pq.size() > 1){
//             Node* left = pq.top();
//             pq.pop();

//             Node* right = pq.top();
//             pq.pop();

//             Node* newNode = new Node(left->data + right->data);
//             newNode -> left = left;
//             newNode -> right = right;
//             pq.push(newNode);
//         }
//         Node* root = pq.top();
//         vector<string> ans;
//         string temp = "";
//         traverse(root, ans, temp);
//         return ans;
//     }
// }





// //Fractional Knapsack
// class Solution{
//     public:
//     static bool cmp(pair<double, Item> a, pair<double, Item> b){
//         return a.first > b.first;
//     }
//     double fractionalKnapsack(int W, Item arr[], int n){
//         vector< pair<double, Item> > v;

//         for(int i=0; i<n; i++){
//             double perUnitValue = (1.0*arr[i].value) / arr[i].weight;
//             pair<double, Item> p = make_pair(perUnitValue, arr[i]);
//             v.push_back(p);
//         }
//         sort(v.begin(), v.end(), cmp);

//         double totalValue = 0;
//         for(int i=0; i<n; i++){
//             if(v[i].second.weight > W){
//                 //toh main sirf fraction le skta hu
//                 totalValue += W*v[i].first;
//                 W = 0;
//             }
//             else{
//                 totalValue += v[i].second.value;
//                 W = W - v[i].second.weight;
//             }
//         }
//         return totalValue;
//     }
// };






//Activity Selection -> gog question




// //Job Sequencing Problem
// class Solution{
//     public:
//     static bool cmp(Job a, Job b){
//         return a.profit > b.profit;
//     }
//     vector<int> JobScheduling(Job arr[], int n){
//         sort(arr, arr+n, cmp);

//         int maxiDeadline = INT_MIN;
//         for(int i=0; i<n; i++){
//             maxiDeadline = max(maxiDeadline, arr[i].dead);
//         }

//         vector<int> schedule(maxiDeadline+1, -1);

//         int count = 0;
//         int maxProfit = 0;
//         for(int i=0; i<n; i++){
//             int currProfit = arr[i].profit;
//             int currJobID = arr[i].id;
//             int currDead = arr[i].dead;

//             for(int k=currDead; k>0; k--){
//                 if(schedule[k] == -1){
//                     count++;
//                     maxProfit += currProfit;
//                     schedule[k] = currJobID;
//                     break;
//                 }
//             }
//         }
//         vector<int> ans;
//         ans.push_back(count);
//         ans.push_back(maxProfit);
//         return ans;
//     }
// }