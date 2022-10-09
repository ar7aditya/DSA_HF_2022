class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        if (nums.empty())
            return 0;
        
        vector<vector<pair<int, int>>> dyn(nums.size() + 1);
        int max_so_far = 0;
        for (int i = 0; i < nums.size(); ++i) {
            // bsearch insertion point
            int l = 0, r = max_so_far;
            while (l < r) {
                int mid = l + (r - l) / 2;
                if (dyn[mid].back().first < nums[i]) {
                    l = mid + 1;
                } else {
                    r = mid;
                }
            }
            
            // bsearch number of options
            int options = 1;
            int row = l - 1;
            if (row >= 0) {
                int l1 = 0, r1 = dyn[row].size();
                while (l1 < r1) {
                    int mid = l1 + (r1 - l1) / 2;
                    if (dyn[row][mid].first < nums[i]) {
                        r1 = mid;
                    } else {
                        l1 = mid + 1;
                    }
                }
                
                options = dyn[row].back().second;
                options -= (l1 == 0) ? 0 : dyn[row][l1 - 1].second;
            }
            
            
            dyn[l].push_back({nums[i], (dyn[l].empty() ? options : dyn[l].back().second + options)});
            if (l == max_so_far) {
                max_so_far++;
            }
        }
        
        return dyn[max_so_far-1].back().second;
        
    }
};
