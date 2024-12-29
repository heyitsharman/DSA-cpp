#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


// Count number of elements of array
// input 

//  5 (size of array)
//  1 3 2 1 3  (elements of array)
// 5   (no. of queries)
// 1  (query 1)
// 2  (query 2)
// 12
// 3
// 4  (query 5)


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // precompute
    int hash[13]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;

        // fetching
        cout << hash[num] << endl; 
    }




// count frequencies of all characters in array
// assuming string to contain only lowercase characters



    string s;
    cin >> s;
    int q;
    cin >> q;

    int hash[26]={0} ;
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }
    while(q--){
        char ch;
        cin >> ch;

        //fetching
        cout << hash[ch - 'a']<< endl;
    }

    // if u assume string to contain all sorts of charcters 
    int hash[256]={0} ;
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }
    while(q--){
        char ch;
        cin >> ch;

        //fetching
        cout << hash[ch]<< endl;
    }


    // Mapping    Time complexity of map in all cases is O(log(n));
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int q;
    cin >> q;

    map <int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    while(q--){
        int num;
        cin >> num;
        cout << mpp[num] << endl;

    }

    // unordered map  
    // unordered map Time complexity of unordered map in avg, best case is O(1) and in worst case is O(n) which is why unordered map is given more preference;


    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int q;
    cin >> q;

    unordered_map <int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    while(q--){
        int num;
        cin >> num;
        cout << mpp[num] << endl;

    }


    // find highest and lowest frequency element 

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

     unordered_map <int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    int max_freq = 0, max_ele = 0;
    int min_freq=n, min_ele = 0;

    for(auto it : mpp){
        int count = it.second;
        int element = it.first;

        if(count > max_freq){
            max_freq = count;
            max_ele = element;
        }
        if(count < min_freq){
            min_freq = count;
            min_ele = element;
        }
    }

    cout << "Max Element with max freq = " << max_ele << endl;
    cout << "Min Element with min freq = " << min_ele << endl;


    return 0;
}

