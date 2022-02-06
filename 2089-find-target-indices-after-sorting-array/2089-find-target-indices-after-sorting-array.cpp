class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
    vector<int> answer;
    int i, key, j;
    for (i = 1; i < nums.size(); i++)
    {
        key = nums[i];
        j = i - 1;
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = key;
    }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                answer.push_back(i);
            }
        }
      return answer;  
    }
};