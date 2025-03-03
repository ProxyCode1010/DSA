#include<iostream>
using namespace std;
void a(int& i){   //Reference is passing here not a copy known as reference variable
    char ch = 'a';
    cout<<i<<endl;
}
void b(int& i){
    cout<<i<<endl;
}
int main(){
    int i = 5;
    a(i);
    { 
        int i = 2;
        cout<<i<<endl;
    }
    cout<<i<<endl;
    return 0;
}