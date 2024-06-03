#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Enter button name ";
    cin>>button;

    switch(button){
        case 'a':
        cout<<"Hello"<<endl;
        break;

        case 'b':
        cout<<"Hola"<<endl;
        break;

        case 'c':
        cout<<"Ciao"<<endl;
        break;

        case 'd':
        cout<<"vanakkam"<<endl;
        break;

        case 'e':
        cout<<"Aadhab"<<endl;
        break;

        default:
        cout<<"I am still learning"<<endl;
        break;
    }
    return 0;
}