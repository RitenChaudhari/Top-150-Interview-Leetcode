#include<iostream>
using namespace std;
#include<vector>

class solution{
public:
    int removeElement(vector<int> &nums,int val){
        int n = nums.size();
        int k = 0;

        for(int i=0;i<n;i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

int main(){
    vector<int> arr1 = {3,2,2,3};
    int val = 3;

    solution s1;
    cout<<s1.removeElement(arr1,val)<<endl;

    vector<int> arr2 = {0,1,2,2,3,0,4,2};
    int val1 = 2;
    cout<<s1.removeElement(arr2,val1)<<endl;
    return 0;
}