#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n==1)
    cout<<"0\n";

    else if(n==2)
    cout<<"0 1\n";

    else{
        int c_fib,a=0,b=1,i=3;
        cout<<a<<" "<<b<<" ";
        while(i<=n){
            c_fib = a + b;
            cout<<c_fib<<" ";
            a = b;
            b = c_fib;
            i++;
        }
    }
    return 0;
}