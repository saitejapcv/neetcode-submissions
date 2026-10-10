class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = produc(nums, -1);
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0){
                res.push_back(produc(nums, i));
            }
            else{
                res.push_back(prod / nums[i]);
            }
        }
        return res;
    }
    int produc(vector<int>&nums, int k){
        int prod = 1;
        for(int i = 0; i < nums.size(); i++){
            if(i != k){
                prod *= nums[i];
            }
        }
        return prod;
    }
};
