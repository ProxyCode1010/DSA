// #include<iostream>
// using namespace std;
// class TrieNode{
//     public:
//     char data;
//     TrieNode* children[26];
//     bool isTerminal;

//     TrieNode(char ch){
//         data = ch;
//         for(int i=0; i<26; i++){
//             children[i] = NULL;
//         }
//         isTerminal = false;
//     }
// };
// class Trie{
//     public:
//     TrieNode* root;

//     Trie(){
//         root = new TrieNode('\0');
//     }
//     void insertUtil(TrieNode* root, string word){
//         //base case
//         if(word.length() == 0){
//             root->isTerminal = true;
//             return;
//         }
//         //assumption, word will be in CAPS
//         int index = word[0] - 'A';
//         TrieNode* child;

//         //present
//         if(root->children[index] != NULL){
//             child = root->children[index];
//         }
//         else{
//             //absent
//             child = new TrieNode(word[0]);
//             root->children[index] = child;
//         }
//         //Recursion
//         insertUtil(child, word.substr(1));
//     }
//     void insertWord(string word){
//         insertUtil(root, word);
//     }
//     bool searchUtil(TrieNode* root, string word){
//         //base case
//         if(word.length() == 0){
//             return root->isTerminal;
//         }
//         int index = word[0]-'A';
//         TrieNode* child;
//         //present
//         if(root->children[index] != NULL){
//             child = root->children[index];
//         }
//         else{
//             //absent
//             return false;
//         }
//     }
//     bool search(string word){
//         return searchUtil(root, word);
//     }
// }
// int main(){
//     Trie *t = new Trie();
//     // t->insertWord("abcd");
//     // cout<<"Present or not "<<t->searchWord("abcd")<<endl;

//     t->insertWord("ARM");
//     t->insertWord("DO");
//     t->insertWord("TIME");
//     cout<<"Present or not "<<t->searchWord("TIM")<<endl;
//     return 0;
// }




// //Implement Trie
// class TrieNode{
//     public:
//     char data;
//     TrieNode* children[26];
//     bool isTerminal;

//     TrieNode(char ch){
//         data = ch;
//         for(int i=0; i<26; i++){
//             children[i] = NULL;
//         }
//         isTerminal = false;
//     }
// }
// class Trie{
//     public:
//     TrieNode* root;+
//     //Initialize your data structure here
//     Trie(){
//         root = new TrieNode('\0');
//     }

//     //Insert a word into the trie
//     void insert(string word){
//         insertUtil(root, word);
//     }
//     bool searchUtil(TrieNode* root, string word){
//         //base case
//         if(word.length() == 0){
//             return root->isTerminal;
//         }
//         int index = word[0]-'a';
//         TrieNode* child;

//         //present
//         if(root-> children[index] != NULL){
//             child = root->children[index];
//         }
//         else{
//             //absent
//             return false;
//         }
//         //Recursion
//         return prefixUtil(child, word.substr(1));
//     }
//     //Returns if the word is in the trie
//     bool search(string word){
//         return searchUtil(root, word);
//     }
//     //Return if there is any word in the trie that starts with the given.....
//     bool startsWith(string prefix){
//         return prefUtil(root, prefix);
//     }
// };




// //Long Common prefix
// string longestCommonPrefix(vector<string> &arr, int n){   //doubt on this statement
//     public:
//     char data;
//     TrieNode* children[26];
//     int childCount;
//     bool isTerminal;

//     TrieNode(char ch){
//         data = ch;
//         for(int i=0; i<26; i++){
//             children[i] = NULL;
//         }
//         childCount = 0;
//         isTerminal = false;
//     }
// };
// class Trie{
//     public:
//     TrieNode* root;
//     Trie(char ch){
//         root = new TrieNode(ch);
//     }
//     void insertUtil(TrieNode* root, stirng word){
//         //base case
//         if(word.length() == 0){
//             root->isTerminal = true;
//             return;
//         }
//         //assumption, word will be in CAPS
//         int index = word[0] - 'A';
//         TrieNode* child;

//         //present
//         if(root->children[index] != NULL){
//             child = root->children[index];
//         }
//         else{
//             //absent
//             child = new TrieNode(word[0]);
//             root->childCount++;
//             root->children[index] = child;
//         }
//         //Recursion
//         insertUtil(child, word.substr(1));
//     }
//     void insertWord(string word){
//         insertUtil(root, word);
//     }
//     void lcp(string str, string &ans){
//         for(int i=0; i<str.length(); i++){
//             char ch = str[i];

//             if(root->childCount == 1){
//                 ans.push_back(ch);
//                 //aage badh jaoo
//                 int index = ch - 'a';
//                 root = root->children[index];
//             }
//             else{
//                 break;
//             }
//             if(root->isTerminal){
//                 break;
//             }
//         }
//     }
// }
// string longestCommonPrefix(vector<string> &arr, int n){
//     Trie *t = new Trie('\0');

//     //insert kardo all strings into trie
//     for(int i =0; i<n; i++){
//         t->insertWord(arr[i];)
//     }
//     string first = arr[0];
//     string ans = "";

//     t->lcp(first, ans);
//     return ans;
// }





// //Implement a phone directory
// class TrieNode{
//     public:
//     char data;
//     TrieNode* children[26];
//     bool isTerminal;

//     TrieNode(char ch){
//         data = ch;
//         for(int i=0; i<26; i++){
//             children[i] = NULL;
//         }
//         isTerminal = false;
//     }

//     void insertUtil(TrieNode* root, stirng word){
//         //base case
//         if(word.length() == 0){
//             root->isTerminal = true;
//             return;
//         }
//         //assumption, word will be in CAPS
//         int index = word[0] - 'a';
//         TrieNode* child;

//         //present
//         if(root->children[index] != NULL){
//             child = root->children[index];
//         }
//         else{
//             //absent
//             child = new TrieNode(word[0]);
//             root->children[index] = child;
//         }
//         //Recursion
//         insertUtil(root, word);
//     void insertWord(string word){
//         insertUtil(root, word);
//     }

//     void printSuggestions(TrieNode* curr, vector<string> &temp, string prefix){
//         if(curr->isTerminal){
//             temp.push_back(prefix);
//             //why we removed return keyword from here
//             //return;
//         }
//         for(char ch = 'a'; ch<= 'z'; ch++){
//             TrieNode* next = curr->children[ch-'a'];
//             if(next!= NULL){
//                 prefix.push_back(ch);
//                 printSuggestions(next, temp, prefix);
//                 prefix.pop_back();
//             }
//         }
//     }

//     vector<vector<string> > getSuggestions(string str){
//         TrieNode* prev = root;
//         vector<vector<string> > output;
//         string prefix = "";

//         for(int i=0; i<str.length(); i++){
//             char lastch = str[i];

//             prefix.push_back(lastch);

//             //check for last character
//             TrieNode* curr = prev->children[lastch-'a'];

//             //if not found
//             if(curr == NULL){
//                 break;
//             }
//             //if found
//             vector<string> temp;
//             printSuggestions(curr, temp, prefix);

//             output.push_back(temp);
//             temp.clear();
//             prev = curr;
//         }
//         return output;
//     }
// };
// vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr){
//     //creation of trie
//     Trie *t = new Trie();

//     //insert all contact in trie
//     for(int i=0; i<contactList.size(); i++){
//         string str = contactList[i];
//         t->insertWord(str);
//     }
//     //return ans
//     return t->getSuggestions(queryStr);
// }