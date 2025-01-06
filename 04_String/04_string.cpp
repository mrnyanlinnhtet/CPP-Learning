#include <iostream>
#include <string>
using namespace std;

int main() {
    string userName;

    cout<< "Please Enter Your Name : ";
    getline(cin, userName);
    cout<< "Your Name is "<<userName<<endl;

    return 0;
}