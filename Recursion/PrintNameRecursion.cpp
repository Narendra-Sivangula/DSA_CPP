#include<bits/stdc++.h>
using namespace std;

void printName(int N){
    if(N == 0) return;
    else{
        cout<<"C++_DSA"<<" ";
        N--;
        printName(N);
    }
}

int main(){
    int n;
    cin>>n;
    printName(n);
    return 0;
}