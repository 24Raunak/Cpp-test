class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        int minLen = strs[0].size();
        for(int i = 0; i < strs.size(); i++) {
            minLen = min(minLen, (int)strs[i].size());
        }

        string answer = "";
        for(int i = 0; i < minLen; i++) {
            char c = strs[0][i];
            for(int j = 1; j < strs.size(); j++) {
                if(strs[j][i] != c) return answer;
            }
            answer.push_back(c);
        }
        return answer;
    }
};