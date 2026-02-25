#include<iostream>
using namespace std;

//using mathematical logic of:
// LCM * HCF = Num1 * Num2

//So here, LCM = Num1*Num2/HCF

int hcf(int a,int b){
    if(b == 0) return a;

    return hcf(b,a%b);
}

int LcmofNums(int a,int b){
    return (a*b)/hcf(a,b);
}

int main(){
    cout<<"GCD of Numbers are: "<<hcf(15,20)<<endl;
    cout<<"LCM of 2 Numbers are: "<<LcmofNums(15,20)<<endl;
    return 0;
}