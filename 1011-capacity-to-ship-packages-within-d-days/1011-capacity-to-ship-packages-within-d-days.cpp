class Solution {
public:
     int daysNeeded(vector<int>& weights, int capacity) {
        
        int days = 1;

        
        int currentLoad = 0;

        
        for (int w : weights) {
            
            if (currentLoad + w > capacity) {
                
                days++;

                
                currentLoad = w;
            } else {
                
                currentLoad += w;
            }
        }

      
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
         int left = *max_element(weights.begin(), weights.end());

        // Calculate the sum of all package weights as maximum capacity (ship all at once)
        int right = accumulate(weights.begin(), weights.end(), 0);

        // Binary search loop to find optimal capacity between left and right
        while (left < right) {
            // Calculate mid value as potential capacity to test
            int mid = left + (right - left) / 2;

            // Calculate how many days needed if ship capacity is mid
            int needed = daysNeeded(weights, mid);

            // If days needed is less or equal to allowed days,
            // try to reduce capacity by moving right boundary
            if (needed <= days) {
                right = mid;
            } else {
                // If days needed is more than allowed, increase capacity by moving left boundary
                left = mid + 1;
            }
        }

        // Left is now the minimum capacity that can ship packages within d days
        return left;
    


    }
};