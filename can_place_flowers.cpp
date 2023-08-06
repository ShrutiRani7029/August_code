class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int m = flowerbed.size();

        for (int i = 0; i < m; i++) {
            // Check if the current position and its adjacent positions are empty (0)
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == m - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1; // Place a flower at the current position
                count++; // Increment the count of placed flowers
            }
        }

        return count >= n; // Return true if enough flowers are placed, otherwise return false
    }
};
