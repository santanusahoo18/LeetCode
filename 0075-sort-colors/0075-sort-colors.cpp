class Solution {
public:
    void sortColors(vector<int>& nums) {
         int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        // Count 0, 1 and 2
        for (int x : nums) {

            if (x == 0)
                count0++;

            else if (x == 1)
                count1++;

            else
                count2++;
        }

        // Fill 0
        int i = 0;

        while (count0--) {
            nums[i++] = 0;
        }

        // Fill 1
        while (count1--) {
            nums[i++] = 1;
        }

        // Fill 2
        while (count2--) {
            nums[i++] = 2;
        }
    
        
    }
};