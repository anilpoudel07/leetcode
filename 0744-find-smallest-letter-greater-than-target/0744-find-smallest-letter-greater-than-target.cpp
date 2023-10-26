class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0;
        int end= letters.size()-1;
        int mid = start+(end -start)/2;
    while(start<=end)
    {
        
   if(letters[mid]<=target)
   {

start = mid+1;
}else 
   {

end = mid-1;
   }
        
        if(start>=letters.size())
        {

return letters[0];
        }
        mid = start+(end-start)/2;
        
    }
        return letters[start];
    }
};