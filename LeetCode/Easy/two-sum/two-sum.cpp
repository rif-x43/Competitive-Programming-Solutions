class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> newnums;
        int idx = 0;
        for (auto num : nums) {
            newnums.push_back({num, idx});
            idx++;
        }

        sort(newnums.begin(), newnums.end());

        int i = 0, j = nums.size() - 1;
        while (i < j) {
        }
    }
            if(newnums[i].first + newnums[j].first == target) {
            else if (newnums[i].first + newnums[j].first > target) j--;
            else i++;
        return sum;
                break;
            }
                sum = {newnums[i].second,newnums[j].second};

        vector <int> sum;
};
