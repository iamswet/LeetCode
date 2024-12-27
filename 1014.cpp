class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int max_i_plus_i = values[0]; 
        int max_score = 0;
        for (int j = 1; j < values.size(); ++j) {
            max_score = max(max_score, values[j] - j + max_i_plus_i);
            max_i_plus_i = max(max_i_plus_i, values[j] + j); 
        }
        return max_score;
    }
};
