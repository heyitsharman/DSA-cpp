#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


// The rate at which the time, required to run a code, changes with respect to the input size, is considered the time complexity. Basically, the time complexity of a particular code depends on the given input size, not on the machine used to run the code.

int main(){
    for(int i=0; i<=5; i++){   //here time complexity is O(n) 
        cout << "hey";
    }



    int marks;
    char grade;
    if(marks<25){
        grade = 'D';
    }
    else if (marks <45){
        grade= 'C';
    }

    else if(marks < 70){
        grade = 'B';
    }
    else{
        grade = 'A';
    }


    // Best Case: This term refers to the case where the code takes the least amount of time to get executed. For example, if the mark is 10(i.e. < 25), only the first line will be executed and the rest of the lines will be skipped. So, the least amount of steps i.e. only 2 steps are required in this case. This is an example of the best case.


    // Worst Case: This term refers to the case where the code takes the maximum amount of time to get executed. For example, if the mark is 70(i.e. > 65), the last line will be executed after checking all the above conditions. So, the maximum amount of steps i.e. 4 steps are required in this case. This is an example of the worst case.

    // Average Case: This term is pretty self-explanatory. This is basically the case between the best and the worst.


    int n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "hello";
        }
    }

    // Time complexity = O(N^2);



}


