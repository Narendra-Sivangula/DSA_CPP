#include<bits/stdc++.h>
using namespace std;

int BtoD(int num){
    int ans = 0;
    int base = 1;
    while(num>0){
        int digit = num%10;
        ans += digit*base;
        base *= 2;
        num /= 10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<BtoD(n)<<endl;
    return 0;
}