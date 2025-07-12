class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        s += ' ';
        for (char c : s) {
            if (c == ' ') {
                if (!word.empty()) {
                    words.push_back(word);
                    word.clear();
                }
            } else {
                word += c;
            }
        }
        if (pattern.size() != words.size()) return false;
        unordered_map<char, string> char_to_word;
        unordered_map<string, char> word_to_char;
        for (int i = 0; i < pattern.size(); ++i) {
            char c = pattern[i];
            string w = words[i];
            if (char_to_word.count(c)) {
                if (char_to_word[c] != w) return false;
            } else {
                if (word_to_char.count(w)) return false;
                char_to_word[c] = w;
                word_to_char[w] = c;
            }
        }
        return true;
    }
};