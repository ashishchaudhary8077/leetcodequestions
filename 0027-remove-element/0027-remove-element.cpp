class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i=0, j=n-1;
        if(n==0) return 0 ;
       
        while(i<j)
        {
            if(nums[i]==val&&nums[j]!=val){
            swap(nums[i],nums[j]);
            i++;
            j--;
            
            }
            else if(nums[i]==val&&nums[j]==val){
            swap(nums[i],nums[j]);
            j--;
            
            }
             else if(nums[i]==val&&nums[j]==val){
            j--;
            }
            
            else{
                i++;
            }

        }
      if(i==j&&nums[i]!=val){
        return j+1;
      }
      else return i;

        
    }
};