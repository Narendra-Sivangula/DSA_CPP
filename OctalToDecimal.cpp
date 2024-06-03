#include<bits/stdc++.h>
using namespace std;

int OtoD(int num){
    int ans=0;
    int base = 1;
    while(num>0){
        int digit = num%10;
        ans += digit*base;
        base *= 8;
        num /= 10;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    cout<<OtoD(n)<<endl;
    return 0;
}