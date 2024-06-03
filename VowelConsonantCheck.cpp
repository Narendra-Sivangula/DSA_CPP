#include<iostream>
using namespace std;

int main(){
    char c;
    int isLowerCase,isUpperCase;
    cout<<"Enter the alphabet ";
    cin>>c;

    isLowerCase = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    isUpperCase = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if(isLowerCase || isUpperCase){
        cout<<c<<" is Vowel"<<endl;
    }else{
        cout<<c<<" is Consonant"<<endl;
    }
    return 0;
}