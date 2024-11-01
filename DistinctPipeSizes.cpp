#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int len = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<len;i++)
    cin>>arr[i];
    
    int uArr[len]; 
    int count = 0; 

    for (int i = 0; i < len; i++) {
        bool isUnique = true;
        
        for (int j = 0; j < count; j++) {
            if (arr[i] == uArr[j]) {
                isUnique = false;
                break;
            }
        }
        

        if (isUnique) {
            uArr[count] = arr[i];
            count++;
        }
    }

    cout<<count;
    for (int i = 0; i < count; i++) {
    cout << uArr[i] << " ";
    }
    cout << endl;

    return 0;
}
