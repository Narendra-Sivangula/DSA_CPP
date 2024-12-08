#include<bits/stdc++.h>
using namespace std;

void print(int arry[],int len){
    for(int i=0;i<len;i++)
    cout<<arry[i]<<" ";
    cout<<endl;
}

void reverse(int arr[],int st,int end){
    if(st>=end) return;
    else{
        int tmp = arr[st];
        arr[st] = arr[end];
        arr[end] = tmp;
        reverse(arr,st+1,end-1);
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,len-1);
    print(arr,len);
    return 0;
}