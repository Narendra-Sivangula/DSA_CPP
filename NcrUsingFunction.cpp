#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    int res = 1;
    for(int i=2;i<=num;i++){
        res *= i;
    }
    return res;
}


int main(){
    int n,r;
    cin>>n>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}