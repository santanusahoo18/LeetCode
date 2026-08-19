#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();

    if (n == 0)
        return 0;

    int leftmax = 0;
    int rightmax = 0;
    int maxheight = height[0];
    int index = 0;
    int water = 0;

    for (int i = 0; i < n; i++) {
        if (height[i] > maxheight) {
            maxheight = height[i];
            index = i;
        }
    }

    for (int i = 0; i < index; i++) {
        if (height[i] < leftmax)
            water += leftmax - height[i];
        else
            leftmax = height[i];
    }

    for (int i = n - 1; i > index; i--) {
        if (height[i] < rightmax)
            water += rightmax - height[i];
        else
            rightmax = height[i];
    }

    return water;
}

int main() {
    vector<int> height = {4, 2, 0, 3, 2, 5};

    cout << trap(height);

    return 0;
}