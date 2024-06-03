#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter an alphabet: ";
    cin>>c;

    switch(c){
        case 'a':
        cout<<"it is an vowel"<<endl;
        break;

        case 'e':
        cout<<"it is an vowel"<<endl;
        break;

        case 'i':
        cout<<"it is an vowel"<<endl;
        break;

        case 'o':
        cout<<"it is an vowel"<<endl;
        break;

        case 'u':
        cout<<"it is an vowel"<<endl;
        break;

        default:
        cout<<"it is a consonant"<<endl;
        break;
    }
}