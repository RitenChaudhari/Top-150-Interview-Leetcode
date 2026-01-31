#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;

        int newCandies = extraCandies;
        int n = candies.size();

        int maxCandies = 0;
        for(int i=0;i<n;i++){
            maxCandies = max(maxCandies,candies[i]);
        }

        for(int i=0;i<n;i++){
            if(candies[i]+newCandies >= maxCandies){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }

        return ans;
    }
};

int main(){
    Solution s1;
    s1.kidsWithCandies({2,3,4,1,2},3);

    return 0;
}