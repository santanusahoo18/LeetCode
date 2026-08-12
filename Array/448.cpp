#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> ans;

      
        for (int i = 0; i < nums.size(); i++) {

            int index = abs(nums[i]) - 1;

            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};

int main() {

    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    Solution s;

    vector<int> result = s.findDisappearedNumbers(nums);

    cout << "Missing numbers: ";

    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}