#include<iostream>
#include<string>
using namespace std;

int main() {
  char userOperator;
  int firstNumber;
  int secondNumber;

  cout<<"Plese enter your first number: ";
  cin>> firstNumber;
  cout<<"Plese enter your second number: ";
  cin>> secondNumber;
  cout<<"Plese enter your operation (+, -, *, /):  ";
  cin>>userOperator;

  switch(userOperator) {
    case '+':
    cout<<"First Number + Second Number: "<<firstNumber + secondNumber;
    break;
    case '-':
    cout<<"First Number - Second Number: "<<firstNumber - secondNumber;
    break;
    case '*':
    cout<<"First Number * Second Number: "<<firstNumber * secondNumber;
    break;
    case '/':
    cout<<"First Number / Second Number: "<<firstNumber / secondNumber;
    break;
    default:
    cout<<"I don't know what i do !";
    break;
  }



  return 0;
}