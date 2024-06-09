/*Given an array arr [] of size N . The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Input :
7
1 5 3 4 3 5 6
Output :
2
Explanation :
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int* maxptr = max_element(arr,arr+n);   // "max_element" return int pointer
                                            // maximum element in an array 

    const int N = *maxptr;
    int idx[N];
    for(int i=0;i<N;i++)
    idx[i] = -1;

    int mindx = INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]] != -1)
        mindx = min(idx[arr[i]],mindx);
        else
        idx[arr[i]] = i;
    }
    cout<<"Index = "<<mindx+1<<endl;
    return 0;
}