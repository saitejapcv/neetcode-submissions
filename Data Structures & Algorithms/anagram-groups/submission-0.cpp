class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 1){
            return {strs};
        }

        unordered_map<string, vector<string>> result;

        for(string s : strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            result[sorted].push_back(s);
        }
        vector<vector<string>> final;
        for(auto& group : result){
            final.push_back(group.second);
        }

        return final;
    }
};
