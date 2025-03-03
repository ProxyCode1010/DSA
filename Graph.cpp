// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;
// class graph{
//     public:
//     //here we also replace int by t by including template <typename T> 
//     unordered_map<int, list<int> > adj;
//     void addEdge(int u, int v, bool direction){
//         //direction = 0 -> undirected
//         //direction = 1 -> directed graph

//         //create an edge from u to v
//         adj[u].push_back(v);
//         if(direction == 0){
//             adj[v].push_back(u);
//         }
//     }
//     void printAdjList(){
//         for(auto i:adj){
//             cout<<i.first<<" -> ";
//             for(auto j:i.second){
//                 cout<<j<<", ";
//             }
//             cout<<endl;
//         }
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter the number of nodes"<<endl;
//     cin>>n;
//     int m;
//     cout<<"Enter the number of edges"<<endl;
//     cin>>m;

//     graph g;
//     for(int i=0; i<n; i++){
//         int u,v;
//         cin>>u>>v;
//         //creating an undirected graph
//         g.addEdge(u,v,0);
//     }
//     //printing graph
//     g.printAdjList();
//     return 0;
// }



// //Creating and printing -> codestudio
// vector < vector <int >> printAdjacency(int n, int m, vector < vector < int>> & edges){
//     vector<int> ans[n];
//     //ans array will store all adjacent nodes corresponding on indexes...
//     for(int i=0; i<n; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         ans[u].push_back(v);
//         ans[v].push_back(u);
//     }
//     vector<vector<int> > adj;
//     for(int i=0; i<n; i++){
//         adj[i].push_back(i);
//         //entering neighbours
//         for(int j=0; j<ans[i].size(); j++){
//             adj[j].push_back(ans[i][j]);
//         }
//     }
//     return adj;
// }




// //BFS Traversal in Graph
// void prepareAdjList(unordered_map<int>, list<int> > &adjList, vector<pair<int, int> > &edges){
//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i].first;
//         int v = edges[i].second;

//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
//     }
// }
// vector<int> BFS(int vertex, vector<pair<int, int>> edges){
//     unordered_map<int, list<int> > adjList;
//     vector<int> ans;
//     unordered_map<int, bool > visited;

//     prepareAdjList(adjList, edges);

//     //traverse all components of a graph
//     for(int i=0; i<vertex; i++){
//         if(!visited[i]){
//             bfs(adjList, visited, ans, i);
//         }
//     }
//     return ans;
// }




// //BFS in Graph
// #include<unordered_map>
// #include<list>
// #include<queue>
// #include<set>
// void prepareAdjList(unordered_map<int, list<int> > &adjList, vector<pair<int, int>> &edges){
//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i].first;
//         int v = edges[i].second;

//         adjList[u].insert(v);
//         adjList[v].insert(u);
//     }
// }
// void printAdj(unordered_map<int, list<int> > &adjList){
//     for(auto i: adjList){
//         cout<<i.first<<" -> ";
//         for(auto j: i.second){
//             cout<<j<<", ";
//         }cout<<endl;
//     }
// }
// void bfs(unordered_map<int, list<int> > &adjList, unordered_map<int, bool > &visited, vector<int> &ans, int node){
//     queue<int> q;
//     q.push(node);
//     visited[node] = 1;

//     while(!q.empty()){
//         int frontNode = q.front();
//         q.pop();

//         //store frontNode into ans
//         ans.push_back(frontNode);

//         //traverse all neighbours of frontNode
//         for(auto i: adjList[frontNode]){
//             if(!visited[i]){
//                 q.push(i);
//                 visited[i] = 1;
//             }
//         }
//     }
// }
// vector<int> BFS(int vertex, vector<pair<int, int>> edges){
//     unordered_map<int, set<int> > adjList;
//     vector<int> ans;
//     unordered_map<int, bool > visited;

//     prepareAdjList(adjList, edges);
//     //printAdj(adjList);
//     //traverse all components of a graph
//     for(int i=0; i<vertex; i++){
//         if(!visited[i]){
//             bfs(adjList, visited, ans, i);
//         }
//     }
//     return ans;
// }




// //DFS Traversal
// void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int> > &adj, vector<int> &component){
//     //ans store
//     component.push_back(node);
//     //mark visited
//     visited[node] = true;

//     //every connected node k liye recursive call
//     for(auto i: adj[node]){
//         if(!visited[i]){
//             dfs(i, visited, adj, component);
//         }
//     }
// }
// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges){
//     //prepare adjList
//     unordered_map<int, list<int> > adjList;
//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<vector<int>> ans;
//     unordered_map<int, bool> visited;

//     for(int i=0; i<V; i++){
//         if(!visited[i]){
//             vector<int> component;
//             dfs(i, visited, adj, component);
//             ans.push_back(component);
//         }
//     }
//     return ans;
// }




// //Cycle detection in Undirected Graph
// #include<unordered_map>
// #include<queue>
// #include<list>
// bool isCyclicBFS(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int> > &adj){
//     unordered_map<int, int> parent;
//     parent[src] = -1;
//     visited[src] = 1;
//     queue<int> q;
//     q.push(src);

//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         for(auto neighbour: adj[front]){
//             if(visited[neighbour] == true && neighbour != parent[front]){
//                 return true;
//             }
//             else if(!visited[neighbour]){
//                 q.push(neighbour);
//                 visited[neighbour] = 1;
//                 parent[neighbour] = front;
//             }
//         }
//     }
//     return false;
// } 
// bool isCyclicDFS(int node, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int> > &adj){
//     visited[node] = true;

//     for(auto neighbour: adj[node]){
//         if(!visited[neighbour]){
//             bool cycleDetected = isCyclicDFS(neighbour, node, visited, adj);
//             if(cycleDetected){
//                 return true;
//             }
//             else if(neigbour != parent){
//                 //cycle present
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// string cycleDetection(vector<vector<int>> & edges, int n, int m){
//     //create adjacency list
//     unordered_map<int, list<int> > adj;
//     for(int i=0; i<n; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     //to handle disconnected components
//     for(int i=0; i<n; i++){
//         if(!visited[i]){
//             bool ans = isCyclicBFS(i, -1, visited, adj);
//             if(ans == 1){
//                 return "Yes";
//             }
//         }
//     }
//     return "No";
// }





// //Cycle Detection in Directed graph
// #include<unordered_map>
// #include<list>
// bool checkCycleDFS(int node, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVisited, unordered_map<int, list<int> > &adj){
//     visited[node] = true;
//     dfsVisited[node] = true;

//     for(auto neighbour: adj[node]){
//         if(!visited[neighbour]){
//             bool cycleDetected = checkCycleDFS(neighbour, visited, dfsVisited, adj);
//             if(cycleDetected){
//                 return true;
//             }
//         }
//         else if(dfsVisited[neighbour]){
//             return true;
//         }
//     }
//     dfsVisited[node] = false;
//     return false;
// }
// int detectCycleDirectedGraph(int n, vector<pair<int, int>> & edges){
//     //create adj list
//     unordered_map<int, list<int> > adj;
//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i].first;
//         int v = edges[i].second;

//         adj[u].push_back(v);
//     }
//     //call dfs for all components
//     unordered_map<int, bool> visited;
//     unordered_map<int, bool> dfsVisited;
//     for(int i=1; i<=n; i++){
//         if(!visited[i]){
//             bool cycleFound = checkCycleDFS(i, visited, dfsVisited, adj);
//             if(cycleFound){
//                 return true;
//             }
//         }
//     }
//     return false;
// }





// //Topological Sort(using DFS)  --Most important
// #include<unordered_map>
// #incldue<list>
// #include<stack>
// void topoSort(int node, vector<bool> &visited, stack<int> &s, unordered_map<int, list<int> > &adj){
//     visited[node] = 1;
//     for(auto neighbour: adj[node]){
//         if(!visited[neighbour]){
//             topoSort(neighbour, visited, s, adj);
//         }
//     }
//     //important
//     s.push(node);
// }
// vector<int> topologicalSort(vector<int>> &edges, int v, int e){
//     //create adj list
//     unordered_map<int, list<int> > adj;
//     for(int i=0; i<e; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//     }
//     //call dfs topolgical sort util function for all components
//     // unordered_map<int, bool> visited;  //--it will through tle
//     vector<bool> visited(v);
//     stack<int> s;
//     for(int i=0; i<v; i++){
//         if(!visited[i]){
//             topoSort(i, visited, s, adj);
//         }
//     }
//     vector<int> ans;
//     while(!s.empty()){
//         ans.push_back(s.top());
//         s.pop();
//     }
//     return ans;
// }





// //Topological Sort(using BFS) -- Khan's algo   --> Most important
// #include<unordered_map>
// #include<list>
// #include<queue>
// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e){
//     //create adj list
//     unordered_map<int, list<int> > adj;
//     for(int i=0; i<e; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];
//         adj[u].push_back(v);
//     }
//     //find all indegrees
//     vector<int> indegree(v);
//     for(auto i:adj){
//         for(auto j: i.second){
//             indegree[j]++;
//         }
//     }
//     //0 indegree walo ko push kardo
//     queue<int> q;
//     for(int i=0; i<v; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     //do bfs
//     vector<int> ans;
//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         //ans store
//         ans.push_back(front);

//         //neighbour indegree update
//         for(auto neighbour: adj[front]){
//             indegree[neighbour]--;
//             if(indegree[neighbour] == 0){
//                 q.push(neighbour);
//             }
//         }
//     }
//     return ans;
// }






// //Detect Cycle in a directed graph
// #include<unordered_map>
// #include<list>
// #include<queue>
// int detectCycleInDirectedGraph(int n, vector< pair <int, int>> &edges){
//     //create adj list
//     unordered_map<int, list<int> > adj;
//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i][0] - 1; //if i not want -1 here than we also change in for loop
//         int v = edges[i][1] - 1;
//         adj[u].push_back(v);
//     }
//     //find all indegrees
//     vector<int> indegree(v);
//     for(auto i:adj){
//         for(auto j: i.second){
//             indegree[j]++;
//         }
//     }
//     //0 indegree walo ko push kardo
//     queue<int> q;
//     for(int i=0; i<n; i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }
//     //do bfs
//     int cnt = 0;
//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         //ans store
//         cnt++;

//         //neighbour indegree update
//         for(auto neighbour: adj[front]){
//             indegree[neighbour]--;
//             if(indegree[neighbour] == 0){
//                 q.push(neighbour);
//             }
//         }
//     }
//     if(cnt == n){  //think deeply 
//         return false;  
//     }
//     else{
//         return true;
//     }
// }






// //Shortest path in undirected graphs
// #include<unordered_map>
// #include<queue>
// #include<list>
// vector<int> shortestPath(vector<pair<int, int>> edges, int n , int m, int s, int t){
//     //create adjacency list
//     unordered_map<int, list<int> > adj;
//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i].first;
//         int v = edges[i].second;

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     // do bfs
//     unordered_map<int, bool> visited;
//     unordered_map<int, int> parent;
//     queue<int> q;
//     q.push(s);
//     visited[s] = true;

//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         for(auto i : adj[front]){
//             if(!visited[i]){
//                 visited[i] = true;
//                 parent[i] = front;
//                 q.push(i);
//             }
//         }
//     }

//     //prepare shortest path
//     vector<int> ans;
//     int curentNode = t;
//     ans.push_back(t);

//     while(currentNode != s){
//         currentNode = parent[currentNode];
//         ans.push_back(currentNode);
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }





// // Shortest Path in an Unweighted graph
// #include<unordered_map>
// #include<queue>
// #include<list>
// vector<int> shortestPath(vector<pair<int,int>> edges, int n, int m, int s, int t){
//     //create adjacency list
//     unordered_map<int, list<int> > adj;
//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i].first;
//         int v = edges[i].second;

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     //do bfs
//     unordered_map<int, bool> visited;
//     unordered_map<int, int> parernt;
//     queue<int> q;
//     q.push(s);
//     visited[s] = true;

//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         for(auto i: adj[front]){
//             if(!visited[i]){
//                 visited[i] = true;
//                 parent[i] = front;
//                 q.push(i);
//             }
//         }
//     }
//     //prepare shortest path
//     vector<int> ans;
//     int currentNode = t;
//     ans.push_back(t);

//     while(currentNode != s){
//         currentNode = parent[currentNode];
//         ans.push_back(currentNode);
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
// }





// //Shortest path in Directed Acyclic Graphs
// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<stack>
// #include<vector>
// #include<limits.h>
// using namespace std;
// class Graph{
//     public:
//     unordered_map<int, list<pair<int,int> > > adj;
    
//     void addEdge(int u, int v, int weight){
//         pair<int, int> p = make_pair(v, weight);
//         adj[u].push_back(p);
//     }

//     void printAdj(){
//         for(auto i: adj){
//             cout<<i.first<<"-> ";
//             for(auto j: i.second){
//                 cout<<"("<<j.first<<" , "<<j.second<<"), ";
//             } cout<<endl;
//         }
//     }


//     void dfs(int node, unordered_map<int, bool> &vis, stack<int> &topo){
//     vis[node] = true;
//     for(auto neighbour: adj[node]){
//         if(!vis[neighbour.first]){
//             dfs(neighbour.first, vis, topo);
//         }
//     }
//     topo.push(node);
//     }

//     void getShortestPath(int src, vector<int> &dist, stack<int> &topo){
//         dist[src] = 0;

//         while(!topo.empty()){
//             int top = topo.top();
//             topo.pop();

//             if(dist[top] != INT_MAX){
//                 for(auto i : adj[top]){
//                     if(dist[top] + i.second < dist[i.first]){
//                         dist[i.first] = dist[top] + i.second;
//                     }
//                 }
//             }
//         }
//     }
// };

// int main(){
//     Graph g;
//     g.addEdge(0,1,5);
//     g.addEdge(0,2,3);
//     g.addEdge(1,2,2);
//     g.addEdge(1,3,6);
//     g.addEdge(2,3,7);
//     g.addEdge(2,4,4);
//     g.addEdge(2,5,2);
//     g.addEdge(3,4,-1);
//     g.addEdge(4,5,-2);

//     g.printAdj();

//     int n = 6;
//     //topological sort
//     unordered_map<int, bool> visited;
//     stack<int> s;
//     for(int i=0; i<n; i++){
//         if(!visited[i]){
//             g.dfs(i, visited, s);
//         }
//     }

//     int src = 1;
//     vector<int> dist(n);
//     for(int i=0; i<n; i++){
//         dist[i] = INT_MAX;
//     }
//     g.getShortestPath(src, dist, s);

//     for(int i=0; i<dist.size(); i++){
//         cout<<dist[i]<<" ";
//     }cout<<endl;
// }






// //Dijkstra's Algroithm  (as like shorest path in undirected weighted graph)
// #include<unordered_map>
// #include<list>
// #include<set>
// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source){
//     //create adjacency list
//     unordered_map<int, list<pair<int, int> > > adj;
//     for(int i=0; i<edges; i++){
//         int u = vec[i][0];
//         int v = vec[i][1];
//         int w = vec[i][2];

//         adj[u].push_back(make_pair(v, w));
//         adj[v].push_back(make_pair(u,w));
//     }

//     //creation of distance array with infinite value initially
//     vector<int> dist(vectices);
//     for(int i=0; i<vertices; i++){
//         dist[i] = INT_MAX;
//     }

//     //creation of set on basis (distance, node)
//     set<pair<int, int> > st;

//     //initialize distance and set with source node
//     dist[source] = 0;
//     st.insert(make_pair(0, source));

//     while(!st.empty()){
//         //fetch top record
//         auto top = *(st.begin());

//         int nodeDistance = top.first;
//         int topNode = top.second;

//         //remove top record now
//         st.erase(st.begin());

//         //traverse on neighbour
//         for(auto neighbour : adj[topNode]){
//             if(nodeDistance + neighbour.second < dist[neighbour.first]){
//                 auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
//                 //if record found, then erase it
//                 if(record != st.end()){
//                     st.erase(record);
//                 }

//                 //distance update
//                 dist[neighbour.first] = nodeDistance + neighbour.second;
//                 //record push in set
//                 st.insert(make_pair(dist[neighbour.first], neighbour.first));
//             }
//         }
//     }
//     return dist;
// }






// //Prime's MST (Minimum spanning tree)
// #include<unordered_map>
// #include<list>
// #include<limits.h>
// vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g){
//     //create adj list
//     unordered_map<int, list<pair<int, int> > > adj;
//     for(int i=0; i<g.size(); i++){
//         int u = g[i].first.first;
//         int v = g[i].first.second;
//         int w = g[i].second;
//         adj[u].push_back(make_pair(v,w));
//         adj[v].push_back(make_pair(u,w));
//     }

//     vector<int> key(n+1);
//     vector<bool> mst(n+1);
//     vector<int> parent(n+1);

//     for(int i=0; i<=n; i++){
//         key[i] = INT_MAX;
//         parent[i] = -1;
//         mst[i] = false;
//     }

//     //let's start the algo
//     key[1] = 0;
//     parent[1] = -1;

//     for(int i=1; i<n; i++){       //here time complexity is o(nsquare) -> o(nlogn) by using priority queue for finding min node
//         int mini = INT_MAX;
//         int u;
//         //find the min wali node
//         for(int v=1; v<=n; v++){
//             if(mst[v] == false && key[v] < mini){
//                 u = v;
//                 mini = key[v];
//             }
//         }
//         //mark min node as true
//         mst[u] = true;

//         //check its adjacent nodes
//         for(auto it: adj[u]){
//             int v = it.first;
//             int w = it.second;
//             if(mst[v] == false && w < key[v]){
//                 parent[v] = u;
//                 key[v] = w;
//             }
//         }
//     }
//     vector<pair<pair<int, int>, int>> result;
//     for(int i=2; i<=n; i++){
//         result.push_back({{parent[i], i}, key[i]});
//     }
//     return result;
// }





// //Kruskal's Algorithm || Disjoint set || Union by Rank & path compression
// // Minimum Spanning tree using these
// bool cmp(vector<int> &a, vector<int> &b){
//     return a[2] < b[2];
// }
// void makeSet(vector<int> &parent, vector<int> &rank, int n){
//     for(int i=0; i<n; i++){
//         parent[i] = i;
//         rank[i] = 0;
//     }
// }
// int findParent(vector<int> *parent, int node){
//     if(parent[node] == node){
//         return node;
//     }
//     return parent[node] = findParent(parent, parent[node]);
// }
// void unionSet(int u, int v, vector<int> &parent, vector<int> *rank){
//     u = findParent(parent, u);
//     v = findParent(parent, v);

//     if(rank[u] < rank[v]){
//         parent[u] = v;
//     }
//     else if(rank[v] < rank[u]){
//         parent[v] = u;
//     }
//     else{
//         parent[v] = u;
//         rank[u]++;
//     }
// }
// int minimumSpanningTree(vector<vector<int>>& edges, int n){
//     vector<int> parent(n);
//     vector<int> rank(n);
//     makeSet(parent, rank, n);

//     int minWeight = 0;

//     for(int i=0; i<edges.size(); i++){
//         int u = findParent(parent, edges[i][0]);
//         int v = findParent(parent, edges[i][1]);

//         if(u != v){
//             minWeight += wt;
//             unionSet(u,v,parent,rank);
//         }
//     }
//     return minWeight;
// }





// //Bridges in a Graph
// #include<unordered_map>
// #include<list>
// void dfs(int node, int parent, int &timer, vector<int> &disc, vector<int> &low, vector<vector<int>> &result, unordered_map<int, list<int> > &adj, unordered_map<int, bool> &vis){
//     vis[node] = true;
//     disc[node] = low[node] = timer++;

//     for(auto nbr: adj[node]){
//         if(nbr == parent){
//             continue;
//         }
//         if(!vis(nbr)){
//             dfs(nbr,node,timer,disc,low,result,adj,vis);
//             low[node] = min(low[node], low[nbr]);
//             //check edge is bridge
//             if(low[nbr] > disc[node]){
//                 vector<int> ans;
//                 ans.push_back(node);
//                 ans.push_back(nbr);
//                 result.push_back(ans);
//             }
//         }
//         else{
//             //node already visited and not parent
//             //Back edge
//             low[node] = min(low[node], dis[nbr]);
//         }
//     }
// }
// vector<vector<int>> findBridges(vector<vector<int>> &edges, int u, int e){
//     //adj list
//     unordered_map<int, list<int> >adj;

//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     int timer = 0;
//     vector<int> disc(v);
//     vector<int> low(v);
//     int parent = -1;
//     unordered_map<int, bool> vis;

//     for(int i=0; i<v; i++){
//         disc[i] = -1;
//         low[i] = -1;
//     }

//     vector<vector<int>> result;
//     //dfs
//     for(int i=0; i<v; i++){
//         if(!vis[i]){
//             dfs(i, parent, timer, disc, low, result, adj, vis);
//         }
//     }
//     return result;
// }





// //Articulation Points in Graphs
// #include<iostream>
// #include<unordered_map>
// #include<vector>
// #include<list>
// using namespace std;
// int min(int a, int b){
//     if(a<b)
//         return a;
//     return b;
// }
// void dfs(int node, int parent, vector<int> &disc, vector<int> &low, unordered_map<int, bool> &vis, unordered_map<int, list<int> > &adj, vector<int> &ap, int &timer){
//     vis[node] = true;
//     disc[node] = low[node] = timer++;
//     int child = 0;

//     for(auto nbr: adj[node]){
//         if(nbr == parent){
//             continue;
//         }
//         if(!vis[nbr]){
//             dfs(nbr, node, disc, low, vis, adj, ap, timer);
//             low[node] = min(low[node], low[nbr]);
//             //check AP or not
//             if(low[nbr] >= disc[node] && parent != -1){
//                 ap[node] = true;
//             }
//             child++;
//         }
//         else{
//             low[node] = min(low[node], disc[nbr]);
//         }
//     }
//     if(parent == -1 && child > 1){
//         ap[node] = 1;
//     }
// }
// int main(){
//     int n = 5;
//     int e = 5;
//     vector<pair<int, int> > edges;
//     edges.push_back(make_pair(0,3));
//     edges.push_back(make_pair(3,4));
//     edges.push_back(make_pair(0,4));
//     edges.push_back(make_pair(0,1));
//     edges.push_back(make_pair(1,2));

//     //adj list
//     unordered_map<int, list<int> > adj;

//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i].first;
//         int v = edges[i].second;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     int timer = 0;
//     vector<int> disc(n);
//     vector<int> low(n);
//     unordered_map<int, bool> vis;
//     vector<int> ap(n,0);

//     for(int i=0; i<n; i++){
//         disc[i] = -1;
//         low[i] = -1;
//     }

//     //dfs
//     for(int i=0; i<n; i++){
//         if(!vis[i]){
//             dfs(i,-1,disc,low,vis,adj,ap,timer);
//         }
//     }

//     //print ap
//     cout<<"Articulation points are as follows "<<endl;
//     for(int i=0; i<n; i++){
//         if(ap[i] != 0){
//             cout<< i <<" ";
//         }
//     }cout<<endl;
//     return 0;
// }





// //Kosaraju's Algorithm for Strongly Connected Components
// // Count Strangly Connected Components(Kosaraju's Algorithm)
// #include<unordered_map>
// #include<list>
// #include<stack>
// void dfs(int node, unordered_map<int, bool> &vis, stack<int> &st, unordered_map<int, list<int> > &adj){
//     vis[node] = true;
//     for(auto nbr: adj[node]){
//         if(!vis[nbr]){
//             dfs(nbr, vis, st, adj);
//         }
//     }
//     //topo logic
//     st.push(node);
// }
// void revDfs(int node, unordered_map<int, bool> &vis, unordered_map<int, list<int> > &adj){
//     vis[node] = true;

//     for(auto nbr: adj[node]){
//         if(!vis[nbr]){
//             revDfs(nbr, vis, adj);
//         }
//     }
// }
// int strongConnectedComponents(int v, vector<vector<int>> &edges){
//     //adj
//     unordered_map<int, list<int> > adj;
//     for(int i=0; i<edges.size(); i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//     }

//     //topo sort
//     stack<int> st;
//     unordered_map<int, bool> vis;
//     for(int i=0; i<v; i++){
//         if(!vis[i]){
//             dfs(i, vis, st, adj);
//         }
//     }

//     //create a transpose graph
//     unordered_map<int, list<int> > transpose;
//     for(int i=0; i<v; i++){
//         vis[i] = 0;
//         for(auto nbr: adj[i]){
//             transpose[nbr].push_back(i);
//         }
//     }

//     //dfs call suing above ordering
//     while(!st.empty()){
//         int top = st.top();
//         st.pop();
//         if(!vis[top]){
//             count++;
//             revDfs(top, vis, transpose);
//         }
//     }
//     return count;
// }





// //Bellman Ford Algo.
// int bellmanFort(int n, int m, int src, int dest, vector<vector<int>> &edges){
//     vector<int> dis(n+1, 1e9);  //here 1e9 is max size we assume
//     dist[src] = 0;  //distance vector source is 0

//     //n-1 times
//     for(int i=1; i<=n; i++){   //for traversing n nodes = (n-1) time traversal
//         //traverse on edge list
//         for(int j=0; i<n; j++){
//             int u = edges[j][0];
//             int v = edges[j][1];
//             int wt = edges[j][2];

//             if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){  
//                 dist[v] = dist[u] + wt;
//             }
//         }
//     }

//     //check for negative cycle if there is negative cycle than its distance value is change that's bellman also not able to find short distance
//     bool flag = 0;
//     for(int j=0; i<n; j++){
//         int u = edges[j][0];
//         int v = edges[j][1];
//         int wt = edges[j][2];

//         if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){  
//             flag = 1;
//         }
//     }
//     if(flag == 0){
//         return dist[dest];
//     }
//     return -1;
// }