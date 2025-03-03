// //GCD
// #include<iostream>
// using namespace std;
// int gcd(int a, int b){
//     if(a==0){
//         return b;
//     }
//     if(b==0){
//         return a;
//     }
//     while(a != b){
//         if(a>b){
//             a = a-b;
//         }
//         else{
//             b = b-a;
//         }
//     }
//     return a;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b is "<<endl;
//     cin >> a >> b;
//     int ans = gcd(a,b);
//     cout<<"The GCD of "<< a <<" & "<<b<<" is : "<<ans<<endl;
//     return 0;
// }




//Modular Exponentiaton
int modularExponentiation(int x, int n, int m){
    int res = 1;

    while(m>0){
        if(n&1){
            //odd
            res = (1LL * (res) * (x)%m)%m;
        }
        x = (1LL * (x)%m * (x)%m)%m;
        n = n>>1;
    }
    return res;
}