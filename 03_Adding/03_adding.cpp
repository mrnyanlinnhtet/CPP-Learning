#include <iostream>
using namespace std;

int main() {
    int firstNumber;
    int secondNumber;
    int totalNumber;

    cout<< "Please Enter First Number: ";
    cin>> firstNumber;
    cout<<  "Please Enter Second Number: ";
    cin>> secondNumber;

    totalNumber = firstNumber + secondNumber;
    cout<<"First Number + Second Number = "<<totalNumber;

    return 0;
}