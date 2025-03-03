// //Array
// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     int basic[3] = {1,2,3};  //Basic array declaration
//     //STL declare
//     array<int,4> a = {1,2,3,4};
//     int size = a.size();
//     for(int i=0; i<size;i++){
//         cout<<a[i]<<endl;
//     }
//     cout<<"Element at 2nd index : "<<a.at(2)<<endl; 
//     cout<<"Element or not : "<<a.empty()<<endl;
//     cout<<"First element : "<<a.front()<<endl;
//     cout<<"Last element : "<<a.back()<<endl;
// }


// //Vector --Dynamic array(locates double memory of their inital)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     cout<<"Capacity : "<<v.capacity()<<endl;
//     v.push_back(1);
//     cout<<"Capacity : "<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<"Capacity : "<<v.capacity()<<endl;
//     v.push_back(3);
//     cout<<"Capacity : "<<v.capacity()<<endl;
//     cout<<"Size : "<<v.size()<<endl;

//     cout<<"Element at 2nd index : "<<v.at(2)<<endl;
//     cout<<"Front : "<<v.front()<<endl;
//     cout<<"Back : "<<v.back()<<endl;

//     cout<<"Before pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;
//     v.pop_back();
//     cout<<"After pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"Before clear size : "<<v.size()<<endl;
//     v.clear();
//     cout<<"After clear size : "<<v.size()<<endl;
// }


// //Dequeue
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int> a;
//     a.push_back(1);
//     a.push_front(2);
//     for(int i:a){
//         cout<<i<<" ";
//     }cout<<endl;
//     // a.pop_back();
//     // cout<<endl;
//     // for(int i:a){
//     //     cout<<i<<" ";
//     // }
//     cout<<"Print first index element : "<<a.at(1)<<endl;
//     cout<<"Front : "<<a.front()<<endl;
//     cout<<"Back : "<<a.back()<<endl;
//     cout<<"Empty or not : "<<a.empty()<<endl;
//     cout<<"Before erase size of a is : "<<a.size()<<endl;
//     a.erase(a.begin(),a.begin()+1);
//     cout<<"After erase : "<<a.size()<<endl;
//     for(int i:a){
//         cout<<i<<endl;
//     }
// }


// //List
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int> l;
//     list<int> n(5,100);
//     cout<<"Printing n"<<endl;
//     for(int i:n){
//         cout<<i<<" ";
//     }cout<<endl;
    
//     l.push_back(1);
//     l.push_front(2);
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     l.erase(l.begin());
//     cout<<"After erase"<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;
//     cout<<"Size of list : "<<l.size()<<endl;
// }


// //Stack --First in last out
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
    // stack<string> s;
    // s.push("Dheeraj");
    // s.push("Yadav");
    // s.push("XYZ");
    // cout<<"First element : "<<s.top()<<endl;
    // s.pop();
    // cout<<"Top element : "<<s.top()<<endl;
    // cout<<"Size of stack : "<<s.size()<<endl;
    // cout<<"Empty or not : "<<s.empty()<<endl;
// }


// //Queue --First in first out
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<string> q;
//     q.push("Dheeraj");
//     q.push("Yadav");
//     q.push("XYZ");
//     cout<<"Size before pop : "<<q.size()<<endl;
//     cout<<"First element : "<<q.front()<<endl;
//     q.pop();
//     cout<<"First element : "<<q.front()<<endl;
//     cout<<"Size after pop : "<<q.size()<<endl;
// }


// //Priority Queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     //max heap
//     priority_queue<int> maxi;
//     //min heap
//     priority_queue<int, vector<int> , greater<int> > mini;
//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);
//     cout<<"Size is : "<<maxi.size()<<endl;
//     int n = maxi.size();
//     for(int i=0; i<n; i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;

//     mini.push(5);
//     mini.push(4);
//     mini.push(1);
//     mini.push(8);
//     mini.push(3);
//     int m = mini.size();
//     for(int i=0; i<m; i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;
//     cout<<"Empty or not : "<<mini.empty()<<endl;
// }


// //Set
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int> s;
//     s.insert(5);
//     s.insert(5);
//     s.insert(5);
//     s.insert(1);
//     s.insert(0);
//     s.insert(1);
//     s.insert(2);
//     for(auto i:s){
//         cout<<i<<endl;
//     }cout<<endl;

//     set<int>::iterator it = s.begin();
//     it++;
//     s.erase(it);
//     for(auto i : s){
//         cout<<i<<endl;
//     }
//     cout<<endl;
//     cout<<"-5 is present or not : "<<s.count(-5)<<endl;
//     cout<<"5 is present or not : "<<s.count(5)<<endl;

//     set<int>::iterator itr = s.find(5);
//     for(auto it=itr; it != s.end(); it++){
//         cout<<it<<endl;                           //Throwing error.......................
//     }cout<<endl;
// }


// //Map
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string> m;
//     m[1] = "Dheeraj";
//     m[2] = "Yadav";
//     m[13] = "XYZ";
//     m.insert({5,"Kumar"});
//     cout<<"Before erase : "<<endl;
//     for(auto i:m){
//         cout<<i.first<<" : "<<i.second<<endl;
//     }
//     cout<<"Finding -13 : "<<m.count(-13)<<endl;

//     m.erase(13);
//     cout<<"After erase"<<endl;
//     for(auto i:m){
//         cout<<i.first<<" : "<<i.second<<endl;
//     }

//     auto it = m.find(5);
//     for(auto i=it; i!=m.end();i++){
//         cout<<(*i).first<<endl;
//     }
// }


// //STL Algorithms
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(6);
//     v.push_back(7);
//     cout<<"Finding 6 : "<<binary_search(v.begin(),v.end(),6)<<endl;
//     cout<<"Lower bound : "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
//     cout<<"Upper bound : "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

//     int a = 3;
//     int b = 5;
//     cout<<"Max : "<<max(a,b)<<endl;
//     cout<<"Min : "<<min(a,b)<<endl;

//     swap(a,b);
//     cout<<endl<<"a : "<<a<<endl;
//     cout<<endl<<"b : "<<b<<endl;

//     string abcd = "abcd";
//     reverse(abcd.begin(),abcd.end());
//     cout<<"String : "<<abcd<<endl;

//     rotate(v.begin(),v.begin()+1, v.end());
//     cout<<"After rotate"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     sort(v.begin(),v.end());
//     for(int i:v){
//         cout<<i<<" ";
//     }
// }