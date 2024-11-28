#include<bits/stdc++.h>
using namespace std;

void PrintNTo1(int N){
    if(N == 0) return;
    else{
        cout<<N<<" ";
        PrintNTo1(N-1);
    }
}

int main(){
    int n;
    cin>>n;
    PrintNTo1(n);
    return 0;
}