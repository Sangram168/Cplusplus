#include<iostream>
using namespace std;

int main(){

    // Q-1
    // int n;
    // cin >> n;
    // int i = 1;

    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout << "*";
    //         j = j+1;
    //     }
    //     cout <<endl;
    //     i = i+1;
    // }
    
    // Q-2
    // int n;
    // cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
        
    //     i++;
    // }

    // Q-3
    // int n;
    // cin >> n;

    // int i = 1;

    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    
    // Q-4
    // int n;
    // cin >> n;

    // int i = 1;
    // int count = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout << count;
    //         j++;
    //         count++;
    //     }
    //     cout<< endl;
    //     i++;
    // }

    // Q-5
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         cout << "*";
    //         col++;
    //     }
    //     cout<< endl;
    //     row++;
    // }   

    // Q-6
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         cout << row;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // Q-7
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int value = row;
    //     while (col <= row)
    //     {
    //         cout<< value;
    //         col++;
    //         value++;
    //     }

    //     cout<< endl;
    //     row++;
        
    // }

   // Q-8
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << row-col+1;
    //         col++;
    //     }
    //     cout<< endl;
    //     row++;
    // }

    // Q-9
    int n;
    cin >> n;

    int row = 1;
    while (row<=n)
    {
        int col = 1;
        char ch = 'A'+row-1;
        while (col<=n)
        {
            cout << ch;
            col++;
        }
        cout<< endl;
        row++;
        
    }
}