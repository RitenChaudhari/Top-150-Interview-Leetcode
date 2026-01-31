#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    //Brute Force Approach
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        for(int i=0;i<n;i++){
            if(letters[i] >= target){
                return letters[i];
            }
        }

        return letters[0];
    }

    //2-Pointer Approach (as it is Sorted Array)
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int start = 0;
        int end = n-1;

        while(start<=end){
            int mid = start+(end-start)/2;

            if(letters[mid] <= target){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }

        return letters[start%n];
    }
};

int main(){
    Solution s1;
    vector<char> vec1 = {'c','f','j'};
    cout<<s1.nextGreatestLetter(vec1,'a')<<endl;
}