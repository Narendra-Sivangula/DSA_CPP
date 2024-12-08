#include<bits/stdc++.h>
using namespace std;

int fibonacii(int n){
    if(n <= 1) return n;
    return fibonacii(n-1) + fibonacii(n-2);
}

void fib(int n,int st=0){
    if(st>n) return;
    cout<<fibonacii(st)<<" ";
    fib(n,st+1);
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}