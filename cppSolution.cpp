#include<iostream>
using namespace std;
int matchingPair(int color[],int n,int freq[]){
    for(int i=0;i<n;i++){
        int count =1;
        for(int j=i+1;j<n;j++){
            if(color[i]==color[j]){
                count++;
                freq[j]=0;
            }
            if(freq[i]!=0){
                freq[i]=count;
            }
        }
    }
    int total=0;

    for(int i=0;i<n;i++){
        total+=freq[i]/2;
    }
    return total;
}
int main(){
    // Declare n as the size of the color array
    int n;
    int * color;                //Declare color array
    int *freq;                  //Declare frequency array
    cin>>n;
    color = new int[n];         // assinging memory dynamically of size n
    freq= new int[n];           // assinging memory dynamically of size n
    for(int i=0;i<n;i++){
        cin>>color[i];
        freq[i]=-1;             //Initially assinging freq of each color as -1
    }
    cout<<matchingPair(color,n,freq);  //Calling and printing the value of total pairs returned by function ->matchingPair
    return 0;
}
