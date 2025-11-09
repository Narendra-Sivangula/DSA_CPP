#include<iostream>
using namespace std;
// Reversing a Number
int main(){
    int n;
    cin>>n;
    int num = n;
    int re_num = 0,digit;
    while(n>0){
        digit = n%10;
        re_num = re_num*10 + digit;
        n /= 10;
    }
    cout<<"Reverse of "<<num<<" = "<<re_num<<endl;
    return 0;
}