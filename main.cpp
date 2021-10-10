#include <math.h>
#include <iostream>
using namespace std;

bool convert(string &number , double &decimal){
    int n = number.length() ;
    int power = 0 ;
    for (int i = n-1  ; i >= 0  ; i--) {
        if (number[i] > '1' || number[i]  < '0' ){
            cout << "Enter binary numbers !" << endl;
            return false ;
        }
        else{
            decimal = decimal +  (int)pow(2,power) *  ((int)number[i] - '0') ;
            power++ ;
        }
    }
    return true ;
}


int main() {

    string binary = ""  ;
    double decimal = 0;
    cout << " Enter your number in binary :  " ;
    cin >> binary ;
    if (convert(binary,decimal)){
        cout << "Your number in decimal : " << decimal << endl;
    }

    return 0;
}