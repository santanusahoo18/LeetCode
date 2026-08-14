#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int altitude = 0;
        int highest = 0;

        for (int i = 0; i < gain.size(); i++) {

           
            altitude += gain[i];

         
            highest = max(highest, altitude);
        }

        return highest;
    }
};

int main() {

    Solution s;

    vector<int> gain = {-5, 1, 5, 0, -7};

    int result = s.largestAltitude(gain);

    cout << result << endl;

    return 0;
}