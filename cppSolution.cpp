#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int matchingPair(vector<int> color,int n){
        int pair =0;                    // pair variable initialized with zero
        sort(color.begin(),color.end()); // sort color array
        for(int i=0;i<n;i++){           // loop through 0 to n-1 in color array
            if(color[i]==color[i+1]){   // if color[i] is equal to color[i+1] then skip one step by i++
                i++;            
                pair++;                  // increment pair by one as two element found same   
            }
        }
    return pair;                          // return the total number of pair to main function 
}
int main(){
    int n;
    vector<int> color;
    int temp;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>temp;
        color.push_back(temp);
    }
    cout<<matchingPair(color,n);
    return 0;
}
