class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> vec2;
        for (int num : nums) {
            vector<int> vec1;
            while (num > 0) {
                int temp = num % 10;
                vec1.push_back(temp);
                num = num / 10;
            }
            for (int i = vec1.size() - 1; i >= 0; i--) {
                vec2.push_back(vec1[i]);
            }
        }
        return vec2;
    }
};