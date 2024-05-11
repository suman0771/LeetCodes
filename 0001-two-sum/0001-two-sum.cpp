class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int r1,r2;
    vector<int> v;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(target==(nums[i]+nums[j])){
                r1=i;
                r2=j;
            }
        }
    }
    v.push_back(r1);
    v.push_back(r2);
    return v;
    }
};