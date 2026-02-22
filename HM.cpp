#include <bits/stdc++.h>
using namespace std;

int firstUnique(vector<int>& arr) {
    unordered_map<int,int> freq;
    for(int x : arr) freq[x]++;
    
    for(int x : arr) {
        if(freq[x] == 1) return x;
    }
    return -1; // if no unique element
}

int main() {
    vector<int> arr = {4,2,1,2,1,5};
    cout << firstUnique(arr); // Output: 4
}


// Two sum 
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        int complement = target - nums[i];
        if(mp.count(complement)) return {mp[complement], i};
        mp[nums[i]] = i;
    }
    return {};
}


