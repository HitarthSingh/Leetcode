class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int temp = capacity;
        int n = plants.size();
        int TotalSteps = 1;
        capacity -= plants[0];
        for (int i = 1; i < n; i++) {
            if (plants[i] <= capacity) {
                TotalSteps++;
                capacity -= plants[i];
            } 
            else {
                TotalSteps += (i * 2) + 1;
                capacity = temp - plants[i];
            }
        }
        return TotalSteps;
    }
};