#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num = n;
    int sum=0;
    while(n>0){
        int digit = n%10;
        sum = sum*10+digit;
        n /= 10;
    }
    if(sum == num)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not Palindrome"<<endl;
    return 0;
}