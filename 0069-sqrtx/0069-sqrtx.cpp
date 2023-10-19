class Solution {
public:
    int mySqrt(int x) {
        int s = 1;
        int e = x;
        int mid=s+(e-s)/2;
       int ans = sqrt(x);
        while(s<=e)
        {
            if(ans ==mid)
            {
                return ans;
}else if(ans >mid)
            {
                s = mid+1;
                
}else
            {
                e= mid-1;
}
     mid = s+(e-s)/2;      
        
}

 return e;
        
    }
};