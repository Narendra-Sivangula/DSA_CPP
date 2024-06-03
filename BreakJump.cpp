#include<iostream>
using namespace std;

int main(){

    int pocketMoney = 3000;
    for(int i=1;i<=30;i++){
        if(pocketMoney == 0){
            break;
        }
        if(i%2 == 0){
            continue;
        }
        cout<<"Go out today"<<endl;
        pocketMoney -= 500;
    }
    return 0;
}