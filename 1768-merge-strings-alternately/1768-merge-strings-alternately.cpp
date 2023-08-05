class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string ans;
        auto it1=word1.begin();
        auto it2=word2.begin();
        while(it1!=word1.end() || it2!=word2.end()){
            if(it1!=word1.end()){
                ans.push_back(*it1++);
            }
            if(it2!=word2.end()){
                ans.push_back(*it2++);
            }
        }
        return ans;
    }
};