class Solution {
public:
    int maxArea(vector<int>& height) {
         int l =0;
        int r= height.size()-1;
        int max =-1;
        while(l<r)
        {
            int min1 = min(height[l], height[r]);
            int val =min1 * (r-l);
            if(val > max)
                max = val;
            
            if(height[l] <= height [r])
                l++;
            else 
                r--;
        }
        return max;  
}
    
        
    
};