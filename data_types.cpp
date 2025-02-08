#include<iostream>
using namespace std;

int glo = 6;

void sum(int a){
    cout << "\nSum from another function: " << glo+a;
}

int main(){
    int a = 5;
    float b = 5.5;
    char c = 'A';
    bool d = true;

    cout << "Hello, World! \n";
    cout << "Integer: " << a << " Float: " << b << " Char: " << c << " Boolean: " << d << "\n";
    cout << "Values Printed!";

    int glo = 7;
    cout << "\nSum from main function: " << glo+a;
    sum(a);
    
    return 0;
}