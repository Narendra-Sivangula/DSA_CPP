#include<bits/stdc++.h>
using namespace std;

int isGcd(int a,int b){
    while(a>0 && b>0){
        if(a>b)
            a = a%b;
        else
            b = b%a;
    }
    if(a==0)
    return b;
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    int res = isGcd(a,b);
    cout<<"GCD of "<<a<<" and "<<b<<" : "<<res<<endl;
    return 0;
}