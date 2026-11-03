#include <vector>
#include <climits> // For INT_MIN

using namespace std;

class Solution {
public:
     int max_ele(vector<int> &vec){
            int max_val = INT_MIN;
            for(int i = 0; i < vec.size(); i++){
                if(vec[i] > max_val){
                    max_val = vec[i];
                }
            }
            return max_val;
    }

    int minMoves(vector<int>& nums) {
        int moves = 0;
        int max_val = max_ele(nums);

        for(int i = 0; i < nums.size(); i++){
            moves += max_val - nums[i];
        }
        return moves;
    }
};