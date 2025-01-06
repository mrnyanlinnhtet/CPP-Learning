#include<iostream>
using namespace std;

int main() {
  int firstNumber;
  int secondNumber;

  cout<<"Please Enter First Number: ";
  cin>>firstNumber;
  cout<<"Please Enter Second Number: ";
  cin>>secondNumber;

   if (firstNumber == secondNumber) {
    cout<<"First number and second number are same."<<endl;
   } else if (firstNumber > secondNumber) {
    cout<<"First number is greater than second number"<<endl;
   } else if (firstNumber < secondNumber) {
    cout<<"First number is less than seconde number"<<endl;
   } else {
    cout<<"They are not same."<<endl;
   }

  return 0;
}