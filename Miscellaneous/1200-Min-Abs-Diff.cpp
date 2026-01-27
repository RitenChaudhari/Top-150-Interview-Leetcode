#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:

    void printVec(vector<vector<int>> vec){
        int flen = vec[0].size();
        int llen = vec[1].size();

        for(int i=0;i<flen;i++){
            for(int j=0;j<llen;j++){
                cout<<vec[i][j]<<" ";
            }
        }
    }

    void minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> vec;

        int n = arr.size();

        int minSpace = 54654;
        for(int i=1;i<n;i++){
            int currSpace = abs(arr[i]-arr[i-1]);
            minSpace = min(minSpace,currSpace);
        }

        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1] == minSpace){
                vec.push_back({arr[i-1],arr[i]});
            }
        }

        printVec(vec);
    }
};

int main(){

    Solution s1;
    vector<int> arr1 = {1,3,6,10,15};
    vector<int> arr = {3,8,-10,23,19,-4,-14,27};
    s1.minimumAbsDifference(arr);
    return 0;
}