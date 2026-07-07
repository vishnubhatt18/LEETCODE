class Solution {
public:
    bool isAnagram(string a, string b) {

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }

    vector<string> removeAnagrams(vector<string>& words) {

        vector<string> ans;

        ans.push_back(words[0]);

        for(int i = 1; i < words.size(); i++) {

            if(!isAnagram(ans.back(), words[i])) {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};