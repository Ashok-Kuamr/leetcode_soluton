#include <iostream>
#include <algorithm> // For min and max functions
using namespace std;

int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]); // Get the number of elements in the array
    int left = 0;
    int right = n - 1;
    int max_area = 0;

    while (left < right) {
        // Calculate current area
        int current_area = min(height[left], height[right]) * (right - left);
        max_area = max(max_area, current_area);

        // Move the pointer for the smaller height
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    cout << max_area << endl;

    return 0;
}
