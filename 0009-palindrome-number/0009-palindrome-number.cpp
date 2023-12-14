class Solution {
public:
    bool isPalindrome(int x) {
   string s = to_string(x);
        int len = s.length()-1;
        int i = 0;
        int j = len;
        int count = 1;
      
            while(i<j)
            {
                if(s[i]==s[j])
                {
                    count =1;
                
}
                else {
                  return false;
}
                i++;
                j--;
}
        if(count==1)
        {
            return true;
}
        return false;
        

    }   
        
};