// //Rat In A Maze
// bool isSafe(int newx, int newy, vector<vector<bool>>&vis, vector<vector<int>> &arr, int n){
//     if((newx >= 0 && newx < n) && (newy >=0 && newy < n) && (vis[newx][newy] != 1 && arr[newx][newy] == 1)){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// void solve(int x, int y, vector < vector <int>> &arr, int n, vector<string> &ans, vector< vector< bool >> &vis, string path){
//     //base case
//     if(x == n-1 && y = n-1){
//         ans.push_back(path);
//         return;
//     }
//     //4 Movement
//     //D, L, R, U
//     // //Down
//     // if(isSafe(x+1, y, vis, arr, n)){
//     //     vis[x][y] = 1;
//     //     solve(x+1, y, arr, n, ans, vis, path + 'D');
//     //     vis[x][y] = 0;
//     // }
//     // //Left
//     // if(isSafe(x, y-1, vis, arr, n)){
//     //     vis[x][y] = 1;
//     //     solve(x, y-1, arr, n, ans, vis, path + 'L');
//     //     vis[x][y] = 0;
//     // }
//     // //Right
//     // if(isSafe(x, y+1, vis, arr, n)){
//     //     vis[x][y] = 1;
//     //     solve(x, y+1, arr, n, ans, vis, path + 'R');
//     //     vis[x][y] = 0;
//     // }
//     // //Up
//     // if(isSafe(x-1, y, vis, arr, n)){
//     //     vis[x][y] = 1;
//     //     solve(x-1, y, arr, n, ans, vis, path + 'U');
//     //     vis[x][y] = 0;
//     // }

//     //OR
//     vis[x][y] = 1;
//     //Down
//     if(isSafe(x+1, y, vis, arr, n)){
//         solve(x+1, y, arr, n, ans, vis, path + 'D');
//     }
//     //Left
//     if(isSafe(x, y-1, vis, arr, n)){
//         solve(x, y-1, arr, n, ans, vis, path + 'L');
//     }
//     //Right
//     if(isSafe(x, y+1, vis, arr, n)){
//         solve(x, y+1, arr, n, ans, vis, path + 'R');
//     }
//     //Up
//     if(isSafe(x-1, y, vis, arr, n)){
//         solve(x-1, y, arr, n, ans, vis, path + 'U');
//     }
//     vis[x][y] = 0;
// }
// vector<string> searchMaze(vector<int>> &arr, int n){
//     vector<string> ans;
//     vector<vector<bool>> visited(n, vector<bool>(n,0));
//     string path = "";
//     if(arr[0][0] == 0){
//         return ans;
//     }

//     solve(0,0,arr,n,ans,visited,path);
//     return ans;
// }




// //The N-Queen Puzzle
// void addSolution(vector<vector<int> >&ans, vector<vector<int> > &board, int n){
//     vector<int> temp;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             temp.push_back(board[i][j]);
//         }
//     }
//     ans.push_back(temp);
// }
// bool isSafe(int row, int col, vector<vector<int> > &board, int n){
//     int x = row;
//     int y = col;

//     //check for same row
//     while(y>=0){
//         if(board[x][y] == 1){
//             return false;
//         }
//         y--;
//     }
//     x = row;
//     y = col;
//     //check for diagonal
//     while(x>=0 && y>=0){
//         if(board[x][y] == 1){
//             return false;
//         }
//         y--;
//         x--;
//     }
//     x = row;
//     y = col;
//     //check for diagonal
//     while(x<n && y>=0){
//         if(board[x][y] == 1){
//             return false;
//         }
//         y--;
//         x++;
//     }
//     return true;
// }
// void solve(int col, vector<vector<int> > &ans, vector<vector<int> > &board, int n){
//     //base case
//     if(col == n){
//         addSolution(ans, board, ans);
//         return;
//     }

//     //solve 1 case and rest recursion will take care
//     for(int row = 0; row < n; row++){
//         if(isSafe(row, col, board, n)){
//             //if placing queen is safe
//             board[row][col] = 1;
//             solve(col+1, ans, board, n);
//             //backtrack
//             board[row][col] = 0;
//         }
//     }
// }
// vector<vector<int>> nQueens(int n){
//     vector<vector<int>> board(n, vector<int>(n,0));
//     vector<vector<int> > ans;

//     solve(0, ans, board, n);
//     return ans;
// }





// //Sudoku Solver  --Important
// class Solution {
// public:
//     bool isSafe(int row, int col, vector<vector<char>>& board, int val){
//         for(int i = 0; i < board.size(); i++){
//             //row check
//             if(board[row][i] == val){
//                 return false;
//             }
//             //col check
//             if(board[i][col] == val){
//                 return false;
//             }
//             //3 X 3 matric check
//             if(board[3*(row/3) + i/3][3*(col/3) + i%3] == val){
//                 return false;
//             } 
//         }
//         return true;
//     }

//     bool solve(vector<vector<char>>& board){  //char or int depend on input
//         int n = board[0].size();
//         for(int row=0; row<n; row++){
//             for(int col=0; col<n; col++){
//                 //cell empty
//                 if(board[row][col] == '.'){   //" . " or may be 0 in int condition
//                     for(int val = '1'; val <= '9'; val++){
//                         if(isSafe(row, col, board, val)){
//                             board[row][col] = val;
//                             //recursive call
//                             bool aageSolutionPossible = solve(board);
//                             if(aageSolutionPossible){
//                                 return true;
//                             }
//                             else{
//                                 //backtrack
//                                 board[row][col] = '.';
//                             }
//                         }
//                     }
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }

//     void solveSudoku(vector<vector<char>>& board) {
//         solve(board);
//     }
// };

