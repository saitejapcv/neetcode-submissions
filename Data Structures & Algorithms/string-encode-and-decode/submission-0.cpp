class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        vector<int> sizes;
        string encoded;

        for(const string& str : strs){
            sizes.push_back(str.size());
        }
        
        for(int s : sizes){
            encoded.append(to_string(s));
            encoded.push_back(',');
        }
        encoded.push_back('#');

        for(const string& str : strs){
            encoded.append(str);
        }
        return encoded;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        vector<int> sizes;
        vector<string> strings;

        int i = 0, j;
        while(s[i] != '#'){
            j = i;
            while(s[j] != ','){
                j++;
            }
            sizes.push_back(stoi(s.substr(i, j-i)));
            i = j + 1;
        }
        i++;
        for(int sz : sizes){
            strings.push_back(s.substr(i, sz));
            i += sz;
        }
        return strings;
    }
};
