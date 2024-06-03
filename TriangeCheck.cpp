#include<iostream>
using namespace std;

int main(){
    int sidea,sideb,sidec;
    cin>>sidea>>sideb>>sidec;

    if(sidea == sideb && sideb == sidec){
        cout<<"Triangle is Equilateral"<<endl;
    }
    else if(sidea == sideb || sideb == sidec || sidea == sidec){
        cout<<"Triangle is Isosceles"<<endl;
    }
    else{
        cout<<"Triangle is Scalane"<<endl;
    }
    return 0;
}