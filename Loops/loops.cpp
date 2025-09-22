#include<iostream>
using namespace std;

int main(){

    // int n;
    // cin >> n;

    // int i = 1;

    // while (i<=n)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // Question - Sum of n 
    
    // int n;
    // cin >> n;

    // int i = 1;
    // int sum = 0;

    // while (i<=n)
    // {
    //     cout << i << endl;
    //     sum = sum + i;
    //     i++;
    // }

    // cout << sum << endl;

    // Question - Find sum of even numbers
    // int n;
    // cin >> n;

    //  int i = 1;
    //  int sum = 0;

    //  while (i <= n){

    //     if (i%2==0)
    //     {
    //         sum = sum + i;
    //     }
    //     i++;
        
    //  }

    //  cout << sum << endl;
     

    // Question - Check number prime or not

    int n;
    cin >> n;

    int i = 2;
     while (i < n)
     {
        if(n%i==0){
            cout << "not prime for "<< i << endl;
        }

        else {
            cout << "prime for "<< i << endl;
        }

        i++;
     }

}