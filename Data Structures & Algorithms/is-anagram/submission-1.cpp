class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash_1[26] = {};
        int hash_2[36] = {};

        int n = s.length();
        int m = t.length();

        for(int i=0;i<n;i++) {
            hash_1[s[i] - 'a']++;
        }
        for(int i=0;i<m;i++) {
            hash_2[t[i] - 'a']++;
        }

        for(int i = 0; i < 26; i++) {
            if(hash_1[i] != hash_2[i]) {
                return false;
            }
        }
        return true;

        
    }
};
