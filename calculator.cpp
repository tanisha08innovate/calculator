#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int a,b;
    char op;

    cout<<"enter a" << endl;
    cin>> a;
    cout << "enter b" <<endl;
    cin >> b;
    cout << "enter operator" <<endl;
    cin>> op;

    //calculator
    if(op == '+') {
        cout << "a+b = " << (a+b) << endl;
    } else if(op == '-') {
        cout << "a-b = " << (a-b) << endl;
    } else if(op == '*') {
        cout << "a*b = " << (a*b) << endl;
    } else if(op == '/') {
        cout << "a/b = " << (a/b) << endl;
    }
    else if(op == '%') {
        cout << "a%b = " << (a%b) << endl;
    }
    else if(op == '^') {
        cout << "a^b = " << (pow(a,b)) << endl;
    } else {
        cout << "invalid operator" << endl;
    }
    return 0;
}