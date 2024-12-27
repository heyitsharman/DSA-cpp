#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// understanding recursion by printing name n times

void print(int i, int n){
   
    if(i>n){
        return ;
    }
    cout << "Harman" << endl;

    print(i+1,n);

}
int main(){
    int n=5;
    print(1,n);

    return 0;
}


// Print 1 to n using recursion
void printNum(int n){
    if(n==0){
        return;
    }
    printNum(n-1);
    cout << n << " ";
}
// print N to 1
void printNto1(int n){
    if(n<1){
        return;
    }
    cout << n << endl;
    n--;
    printNto1(n);
    
}

// sum of n natural numbers using recursion
int printSum(int N){
    if(N==0) return 0;
    
    return N + printSum(N-1);
    

}


// factorial of n number
int fact(int n){
    int f = 1;
    if(n==0){
        return f;
    }
    return f*n*fact(n-1);
}
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    int last = fibonacci(n-1);
    int sec_last = fibonacci(n-2);
    return last + sec_last;
}
int main(){

    int n = 10;
    // printNto1(n);

    //  cout << printSum(3);
    cout << fact(4);
    cout << fibonacci(10);
    return 0;
}