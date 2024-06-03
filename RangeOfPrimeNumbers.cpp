#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int num,j;
    for(num=a;num<=b;num++){
        for(j=2;j<num;j++){
            if(num%j == 0){
                break;
            }  
        }
         if(j==num){
            cout<<num<<endl;
        }
        
    }
    return 0;
}