// Fruit Into Baskets - Brute force
class Solution {
    public:
        int totalFruit(vector<int>& fruits) {
            int n = fruits.size();
            int max_fruits = 0;
            for (int i = 0; i < n; ++i) {
                int first = fruits[i];
                int second = -1;
                int current = 0;
                for (int j = i; j < n; ++j) {
                    if (fruits[j] == first || fruits[j] == second) {
                        ++current;
                    } else {
                        if (second == -1) {
                            second = fruits[j];
                            ++current;
                        } else {
                            break;
                        }
                    }
                    max_fruits = max(max_fruits, current);
                }
            }
            return max_fruits;
        }
    };