class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        for (const string& op : operations) {
            if (op == "C") {
                if (!scores.empty()) {
                    scores.pop_back();
                }
            } else if (op == "D") {
                if (!scores.empty()) {
                    scores.push_back(2 * scores.back());
                }
            } else if (op == "+") {
                if (scores.size() >= 2) {
                    scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]);
                }
            } else {
                scores.push_back(stoi(op));
            }
        }
        return accumulate(scores.begin(), scores.end(), 0);
    }
};