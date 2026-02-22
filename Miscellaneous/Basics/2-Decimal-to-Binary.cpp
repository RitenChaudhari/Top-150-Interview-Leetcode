#include<iostream>
#include<vector>
using namespace std;

void decToBin(int n){
    if(n==0) cout<<"0";

    vector<int> binaryNum;
    while(n>0){
        binaryNum.push_back(n%2);
        n /= 2;
    }

    for(int i=binaryNum.size()-1;i>=0;i--){
        cout<<binaryNum[i];
    }
}


int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    decToBin(n);
    return 0;
}