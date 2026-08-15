#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

  
        for (int x : nums) {
            if (x == 0) {
                count0++;
            }
            else if (x == 1) {
                count1++;
            }
            else {
                count2++;
            }
        }

    
        int i = 0;

        while (count0--) {
            nums[i++] = 0;
        }

       
        while (count1--) {
            nums[i++] = 1;
        }

      
        while (count2--) {
            nums[i++] = 2;
        }
    }
};

int main() {

    vector<int> nums = {2, 0, 2, 1, 1, 0};

    Solution obj;

    obj.sortColors(nums);

    cout << "Sorted array: ";

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}