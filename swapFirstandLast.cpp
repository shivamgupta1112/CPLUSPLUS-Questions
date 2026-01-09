#include <iostream>
using namespace std;


int countDigits(int num){
    int count = 0;
    
    while(num != 0){
        num = num / 10;
        count++;
    }

    return count;
}

int calculatePower(int num, int exp){
    int pow = 1;
    for(int i=0; i<exp; i++){
        pow = pow * num;
    }
    
    return pow;
}

int main(){
    int number = 12345;
    int digits = countDigits(number);

    int lastDigit = number % 10;
    int middleDigits = (number % calculatePower(10, (digits - 1))) / 10;
    int firstDigit = number / calculatePower(10, (digits - 1));

    int newFirstNumber = firstDigit;
    int newMiddleNumber = middleDigits * calculatePower(10, (digits - (digits - 1)));
    int newLastNumber = lastDigit * calculatePower(10, (digits - 1));

    cout << "The Number before swapping: " << number << endl;
    cout << "The Number after swapping: " <<  newLastNumber + newMiddleNumber + newFirstNumber;

    return 0;
}