class Solution {
public:
    vector<vector<int>> sortedMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<int> v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v.push_back(mat[i][j]);
            }
        }
        sort(v.begin(), v.end());
        int k = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = v[k];
                k++;
            }
        }
        return mat;
    }
};