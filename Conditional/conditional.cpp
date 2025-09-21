#include<iostream>
using namespace std;

int main(){

    // int a,b;
    // cout << "Enter the value of a "<<endl;
    // cin>>a;
    // cout << "Enter the value of b "<<endl;
    // cin>>b;
    
    // if(a>b){
    //     cout << "A is greater "<<endl;
    // }
    // if(b>a){
    //     cout << "B is greater"<<endl;
    // }

    int s;
    cout << "enter the value of s "<<endl;
    cin>>s;

    if(s>0){
        cout << "S is positive";
    }
    else{
        if(s<0){
            cout << "S is negative";
        }
        else{
            cout << "S is 0";
        }
    }

    int a = 24;

    if(a>20){
        cout << "a is greater";
    }

    else if(a==24){
        cout << "a is equal";
    }

    else {
        cout << "a is smaller";
    }

    // Question - Check input is lowercase character,uppercase character or number.

    char ch;
    cin >> ch;

    if(ch >='A' && ch <= 'Z'){
        cout << ch  <<" "<< "Uppercase Character" <<endl;
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch <<" "<< "Lowercase Character" <<endl;
    }

    else{
        cout << ch <<" "<< "Number" <<endl;
    }
    
    
}