class Solution {
public:
    vector<int> twoSum(vector<int>& number, int target) {
        int start = 0;
        int end = number.size()-1;
        while(start<end)
        {
if((number[start]+number[end])==target)

return {start+1,end+1};

        
        if((number[start]+number[end])>target)
        {
            end--;
}else{
            start++;
        }
        }
        return {-1,-1};
    }
};