#include<bits/stdc++.h>
using namespace std;

void fib(int num){
    int a=0,b=1,c_fib;
    if(num==1)
    cout<<"0 ";
    else if(num==2)
    cout<<"0 1 ";
    else{
        cout<<"0 1 ";
        for(int i=3;i<=num;i++){
            c_fib = a + b;
            cout<<c_fib<<" ";
            a = b;
            b = c_fib;
        }
    }
}


int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}