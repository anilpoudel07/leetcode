class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        for(int i = 0;i<n;i++)
        {
         
           v1[m]=v2[i];
            m++;
            
        }
        int i= 1;

        while(i<m)

        {
            int temp = v1[i];
            int j= i-1;
            while(j>=0 )
            {
            if(v1[j]>temp)
            {
            v1[j+1]=v1[j];

            }else{
                break;
            }
            j--;
            }
            v1[j+1]=temp;
            i++;
        }
    }
};