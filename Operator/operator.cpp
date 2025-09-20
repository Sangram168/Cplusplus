#include<iostream>
using namespace std;

int main() {
    
    // Arithmetic Operator
    
    // int a = 2;
    // int b = 5;
    // cout << a+b << endl;
    // cout << a-b << endl;
    // cout << a*b << endl;
    // cout << a/b << endl;

    // Relational Operator
   
    int a = 2;
    int b = 3;
    bool first = (a==b);
    cout << first << endl;

    bool second = (a>b);
    cout << second << endl;

    bool third = (a<b);
    cout << third << endl;

    bool fourth = (a<=b);
    cout << fourth << endl;

    bool fifth = (a>=b);
    cout << fifth << endl;

    bool sixth = (a!=b);
    cout << sixth << endl;

    // Assignment Operator
    int x = 5;
    cout << x << endl;
    cout << (x += 5) << endl;
    cout << (x -= 5) << endl;
    cout << (x *= 5) << endl;
    cout << (x /= 5) << endl;
    cout << (x %= 5) << endl;

    // Logical Operator

    int age = 23;
    int weight = 72;
    cout << ((age > 12) && (weight == 72))<<endl;
    cout << ((age > 34) || (weight == 72))<<endl;
    cout << !(age == 23) <<endl; 

}