#include<iostream>
#include<cmath>
using namespace std;

int BinToDec(int n){
    if(n == 0) return 0;
    
    int ans = 0;
    int pow2 = 0;
    while(n>0){
        int lastDig = n%10;
        ans += lastDig * pow(2,pow2);
        pow2++;
        n/= 10;
    }

    return ans;
}

int main(){
    cout<<"Enter the Binary Number: ";
    int n;
    cin>>n;

    cout<<"The Decimal Number is: "<<BinToDec(n)<<endl;
    return 0;
}

//101