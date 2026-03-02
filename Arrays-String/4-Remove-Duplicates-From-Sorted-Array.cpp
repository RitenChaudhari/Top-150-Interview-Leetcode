#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0,right=0;
        int n = nums.size();

        while(right<n){
            int count = 1;
            while(right+1 < nums.size() && nums[right] == nums[right+1]){
                right++;
                count++;
            }
            int cnum = min(count,2);
            for(int i=0;i<cnum;i++){
                nums[left] = nums[right];
                left++;
            }
            right++;
        }
        return left;
    }
};