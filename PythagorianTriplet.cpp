#include<bits/stdc++.h>
using namespace std;

bool Pythog(int a,int b,int c){
    int x = max(a,max(b,c));
    int y,z;
    if(x == a){
        y = b;
        z = c;
    }
    else if(x == b){
        y = a;
        z = c;
    }
    else{
        y = b;
        z = a;
    }
    return x*x == y*y+z*z? true:false;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(Pythog(a,b,c))
    cout<<"Pythogorian Triplet"<<endl;
    else
    cout<<"Not Pythogorian Triplet"<<endl;
    return 0;
}