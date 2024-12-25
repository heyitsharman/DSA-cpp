#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){

    //1. count digits

    // brute force
    int n;
    cin >> n;
    int cnt = 0;
    while(n>0){
        n = n / 10;
        cnt ++;
    }

    // cout << cnt;
    //optimal approach
    int cnt = (int)log10(n) + 1;
    cout << cnt ;


    // 2. reverse a number
    int n;
    cin >> n;
    // optimal  time = O(log10 n+1) space O(1)
    int r = 0;
    while(n>0){
        r= r*10 + n%10;
        n/=10;
    }
    cout << r;


    //3. palindrome number
    // optimal approach
    int n;
    cin >> n;
    int dup = n;
    int r=0;
    while(n>0){
        r=r*10 + n%10;
        n/=10;
    }
    if(r==dup){
        cout << "True";
    }
    else{
        cout << "false";
    }


    // 4. Gcd of two numbers
      int n1, n2;
    cin >> n1 >> n2;

    // brute force
    int min,gcd;
    if(n1<n2){
        min = n1;
    }
    else{
        min = n2;
    }
    for(int i=1; i<= min; i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    cout << gcd;


    // optimal approach 
    int gcd;
    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        gcd=n2;
    }
    else{
        gcd=n1;
    }
    cout << gcd;




    //5. Amstrong Numbers
    int num;
    cin >> num;
    int sum = 0;
    int k = 0;
    int n = num;
    while (n > 0) {
        k++;
        n /= 10;
    }

    n = num;
    while (n > 0) {
        int r = n % 10;
        sum += pow(r, k); 
        n /= 10;
    }

   
    if (num == sum) {
        cout << "Armstrong number" << endl;
    } else {
        cout <<  "not Armstrong number." << endl;
    }

    return 0;


    // 6. Print all the divisors of a number
    int num;
    cin >> num;
    vector <int> divisors;
    
    for(int i=1; i<=num; i++){
        if(num%i==0){
            divisors.push_back(i);
        }
    }
    

    // 7. Sum of all divisors
    int sum = 0;
    for(int i=1; i<=num; i++){
        sum+= (num/i)*i;
    }
    cout << sum;

    // 8. Prime Number
    // Brute force
    int num;
    cin >> num;
    int count = 0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        cout << "Prime";
    }
    else{
        cout << "Not Prime";
    }



}