#include<bits/stdc++.h>
using namespace std;

int Print1ToNSum(int N){
    if(N == 0) return 0;
    else
    return N + Print1ToNSum(N-1);
}

int main(){
    int n;
    cin>>n;
    int res = Print1ToNSum(n);
    cout<<res<<endl;
    return 0;
}