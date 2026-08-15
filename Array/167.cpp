#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int start = 0;
        int end = numbers.size() - 1;

        while (start < end) {

            int sum = numbers[start] + numbers[end];

            if (sum == target) {
                return {start + 1, end + 1};
            }

            else if (sum < target) {
                start++;
            }

            else {
                end--;
            }
        }

        return {};
    }
};

int main() {

    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    Solution obj;

    vector<int> result = obj.twoSum(numbers, target);

    cout << "Answer: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}