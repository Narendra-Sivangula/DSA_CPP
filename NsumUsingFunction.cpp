#include<bits/stdc++.h>
using namespace std;

int Nsum(int n){
    return (n*(n+1))/2;
}

int main(){
    int n;
    cin>>n;
    cout<<Nsum(n)<<endl;
    return 0;
}