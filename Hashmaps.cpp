// #include<iostream>
// #include<map>
// #include<unordered_map>
// using namespace std;
// int main(){
//     //creation
//     unordered_map<string, int> m;

//     //insertion

//     //1
//     pair<string, int> p = make_pair("Dheeraj", 3);
//     m.insert(p);

//     //2
//     pair<string, int> pair2("Harsh",2);
//     m.insert(pair2);

//     //3
//     m["My"] = 1;

//     //what will happen
//     m["Hello"] = 2;

//     //search
//     cout<<m["My"] <<endl;
//     cout<<m.at["Dheeraj"] <<endl;

//     cout<<m["UnknownKey"] <<endl;
//     cout<<m.at["UnknownKey"] <<endl;

//     //size
//     cout<<m.size()<<endl;

//     //to check presence
//     cout<<m.count("Bro") <<endl;
//     cout<<m.count("Harsh") <<endl;

//     //erase
//     m.erase("My");
//     cout<<m.size()<<endl;

//     // for(auto i:m){
//     //     cout<<i.first<<" "<<i.second<<endl;
//     // }

//     //iterator
//     unordered_map<string, int> :: iterator it = m.begin();

//     while (it != m.end())
//     {
//         cout<<it->first<<" "<<it->second<<endl;
//         it++;
//     }
    
//     return 0;
// }





// //Maximum Frequency Number
// int maximumFrequency(vector<int> &arr, int n){
//     unordered_map<int, int> count;
//     int maxFreq = 0;
//     int maxArea = 0;
//     for(int i=0; i<arr.size(); i++){
//         count[arr[i]]++;
//         maxFreq = max(maxFreq, count[arr[i]]);
//     }
//     for(int i=0; i<arr.size(); i++){
//         if(maxFreq == count[arr[i]]){
//             maxAns = arr[i];
//             break;
//         }
//     }
//     return maxAns;
// }