                            
#include <iostream>
#include<cmath> 
using namespace std;


bool isArmstrong(int num) {

    int n = num;
    int k = to_string(num).length();
    int sum = 0;
    int ld=0;
    while(n > 0){

        ld = n % 10;

        sum = sum + pow(ld, k); 

        n = n / 10;
    }

    return sum == num ? true : false;
}

int main() {
    int number;
    cin>>number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
                            
                        