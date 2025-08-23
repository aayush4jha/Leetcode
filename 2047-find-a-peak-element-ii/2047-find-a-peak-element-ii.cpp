class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int left = 0, right = m - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            int maxRow = 0;
            for (int i = 0; i < n; i++) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            bool leftBig = (mid - 1 >= 0 && mat[maxRow][mid - 1] > mat[maxRow][mid]);
            bool rightBig = (mid + 1 < m && mat[maxRow][mid + 1] > mat[maxRow][mid]);

            if (!leftBig && !rightBig) {
                return {maxRow, mid};
            } else if (leftBig) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return {-1, -1}; 
    }
};
