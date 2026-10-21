class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        int res = 0;

        for(int num : nums){
            if(numSet.find(num-1) == numSet.end()){
                longest = 1;
                while(numSet.find(num+longest) != numSet.end()){
                    longest++;
                }
                res=max(res, longest);
            }
        }
        return res;
    }
};
