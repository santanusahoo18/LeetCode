#include <iostream>
#include <vector>
using namespace std;

class NumArray {
private:
    vector<int> prefix;

public:
    NumArray(vector<int>& nums) {
        int n = nums.size();

        prefix.resize(n);

        prefix[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        if (left == 0) {
            return prefix[right];
        }

        return prefix[right] - prefix[left - 1];
    }
};

int main() {

    vector<int> nums = {1, 2, 3, 4, 5};

    NumArray obj(nums);

    cout << obj.sumRange(0, 2) << endl;
    cout << obj.sumRange(1, 3) << endl;
    cout << obj.sumRange(2, 4) << endl;

    return 0;
}