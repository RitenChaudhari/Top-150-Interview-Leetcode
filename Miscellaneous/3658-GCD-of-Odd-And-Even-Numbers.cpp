#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution{
public:

    //Brute Force Approach: 
    int gcdOfOddEvenSum(int n){
        int sumEven = 0;
        int sumOdd = 0;

        for(int i=0;i<=2*n;i++){
            if(i%2 == 0){
                sumEven += i;
            }else{
                sumOdd += i;
            }
        }

        int gcd = 1;
        for(int i=1;i<sumEven;i++){
            if(sumEven%i == 0 && sumOdd%i == 0){
                gcd = i;
            }
        }

        return gcd;
    }

    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }

    int optimizedGCD(int n){
        int oddSum = n*n;
        int evenSum = n*(n+1);

        return gcd(oddSum,evenSum);
    }
};

int main(){
    Solution s1;
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"GCD of the Numbers are: "<<s1.gcdOfOddEvenSum(n)<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"GCD of the Numbers are: "<<s1.optimizedGCD(n)<<endl;
    return 0;
}