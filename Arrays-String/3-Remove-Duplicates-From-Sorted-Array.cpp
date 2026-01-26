#include<iostream>
using namespace std;
#include<vector>

class solution{
public:
    int removeDuplicates(vector<int> &nums){
        int n = nums.size();
        if(n == 0) return 0;

        int left = 1;
        for(int right = 1;right<n;right++){
            if(nums[right-1] != nums[right]){
                nums[left] = nums[right];
                left++;
            }
        }

        return left;
    }
};


int main(){
    solution s1;
    vector<int> vec = {1,1,2};
    cout<<s1.removeDuplicates(vec)<<endl;
    vector<int> vec1 = {0,0,1,1,1,2,2,3,3,4};
    cout<<s1.removeDuplicates(vec1)<<endl;

    return 0;
}