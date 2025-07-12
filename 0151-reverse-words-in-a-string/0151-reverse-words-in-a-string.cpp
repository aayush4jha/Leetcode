class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "";
        
        for (char c : s) {
            if (c != ' ') {
                word += c;
            } else if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }
        
        string result = "";
        for (int i = words.size() - 1; i >= 0; i--) {
            if (i == words.size() - 1) {
                result += words[i];
            } else {
                result += " " + words[i];
            }
        }
        
        return result;
    }
};