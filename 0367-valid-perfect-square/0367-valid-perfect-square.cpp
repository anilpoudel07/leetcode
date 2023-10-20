class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int start  = 1;
        long long int end = num;
        
      long long  int  mid = start +(end -start)/2;
        while(start<=end)
        {
          
                      
       if(mid*mid == num)
            {
           
               return true;




}
      
     
            if(mid*mid>num)
            {
end = mid-1;
            }else {

start = mid+1;
}


mid = start +(end-start)/2;
}
        return false;
    }
};