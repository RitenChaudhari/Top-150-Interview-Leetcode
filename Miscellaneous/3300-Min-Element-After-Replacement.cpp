#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();

        int minVal = INT_MAX;
        int numSum = 0;

        for(int i=0;i<n;i++){
            while(nums[i] > 0){
                int lastDig = nums[i]%10;
                numSum += lastDig;
                nums[i] /= 10;
            }

            minVal = min(minVal,numSum);
            numSum = 0;
        }

        return minVal;
    }
};