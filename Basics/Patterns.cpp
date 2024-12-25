#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    // 1. square pattern
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }


    // 2.Right Triangle
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }


    // 1
    // 1 2
    // 1 2 3

    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout << j;
        }
        cout << endl;
    }


    // 1
    // 2 2
    // 3 3 3
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }


    // upside down right triangle
    // * * *
    // * *
    // *

    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout << "*";
        }
        cout << endl;
    }


    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout << j;
        }
        cout << endl;
    }








}