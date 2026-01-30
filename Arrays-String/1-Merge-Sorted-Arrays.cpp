#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void printVec(vector<int> vec){
        for(int i: vec){
            cout<<i<<" ";
        }
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        //Brute Force Approach

        int l = m+n;
        vector<int> nums3(l);

        for(int i=0;i<m;i++){
            nums3[i]=nums1[i];
        }

        for(int j=0;j<n;j++){
            nums3[m+j] = nums2[j];
        }

        sort(nums3.begin(),nums3.end());

        cout<<"Array of Nums3: ";
        printVec(nums3);
        cout<<endl;

        for(int i=0;i<l;i++){
            nums1[i] = nums3[i];
        }

        cout<<"Array of Nums3: ";
        printVec(nums3);
        cout<<"\nArray of Nums1: ";
        printVec(nums1);
    }

    
};

int main(){
    Solution s1;
    vector<int> nums1 = {1,2,3,0,0,0};  
    vector<int> nums2 = {2,5,6};
    s1.merge(nums1,3,nums2,3);
    return 0;
}