#include<bits/stdc++.h>
using namespace std;

bool check(int arr[],int dum,int n){
    int maxNo = INT_MIN;
    for(int i=0;i<n;i++)
        maxNo = max(maxNo,arr[i]);
    if(dum >= maxNo)
    return true;
    else
    return false;
}


int main(){
    int n,extracandies;
    cin>>n>>extracandies;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int dum = 0;
    bool val;
    bool resarr[n];
    for(int i=0;i<n;i++){
        dum = arr[i]+extracandies;
        val = check(arr,dum,n);
        resarr[i] = val;
    }

    for(int i=0;i<n;i++)
    cout<<resarr[i]<<" ";
    return 0;
}