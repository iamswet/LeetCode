class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        // Sort the spaces vector in ascending order
        sort(spaces.begin(), spaces.end());

        int spaceIndex = 0;
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            if (spaceIndex < spaces.size() && i == spaces[spaceIndex]) {
                result += " ";
                spaceIndex++;
            }
            result += s[i];
        }

        return result;
    }
};
