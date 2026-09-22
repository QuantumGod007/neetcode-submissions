// finally generational jinx has been broken see roar like a lion

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(const auto &s: strs) {
            string sorted_s = s;
            sort(sorted_s.begin(),sorted_s.end());
            res[sorted_s].push_back(s);
        }

        vector<vector<string>> result;
        for(auto &pair : res) {
            result.push_back(pair.second);
        }

        return result;
        
    }
};
