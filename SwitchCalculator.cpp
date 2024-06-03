#include<iostream>
using namespace std;

int main(){
    float n1,n2;
    cout<<"Enter n1 and n2: ";
    cin>>n1>>n2;

    char op;
    cout<<"Enter Operator: ";
    cin>>op;

    switch(op){
        case '+':
        cout<<n1+n2<<endl;
        break;

        case '-':
        cout<<n1-n2<<endl;
        break;

        case '*':
        cout<<n1*n2<<endl;
        break;

        case '/':
        cout<<n1/n2<<endl;
        break;

        default:
        cout<<"Enter another Operator!!"<<endl;
        break;
    }
    return 0;
}