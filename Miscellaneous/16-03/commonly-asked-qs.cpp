// Arrays: 

// Two Sum problem
// Maximum Subarray (Kadane’s Algorithm)
// Move all zeros to end
// Find missing number in array
// Find duplicates in array
// Merge two sorted arrays
// Rotate array by k steps
// Best time to buy and sell stock

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Two Sum Problem: 
void pairSum(vector<int> arr,int target){
    int n = arr.size();

    unordered_map<int,int> um;

    for(int i=0;i<n;i++){
        int need = target-arr[i];

        if(um.find(need) != um.end()){
            cout<<"{"<<um[need]<<","<<i<<"}";
            break;
        }
        um[arr[i]]=i;
    }
}

//Kadane's Algorithm:

void maximumSubarray(vector<int> arr){

}

// move zeros to the end

void moveZeros(vector<int> vec){
    int temp = vec[0];
    int n = vec.size();

    for(int i=0;i<n;i++){
        
    }
}

//find missing number in array

int main(){
    // vector<int> nums = {2,7,8,1,2,6,2};
    // pairSum(nums,9);

    vector<int> vec = {0,1,2,3,2,0,0,1,2,0};
    return 0;
}