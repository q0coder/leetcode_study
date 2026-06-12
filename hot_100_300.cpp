class Solution{
public:
	int lengthOfLIS(vector<int>& nums)
    { 
        int n=nums.size();
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            int len=ans.size();
            if(nums[i]>ans[len-1]) ans.push_back(nums[i]);
            else{
                int l=0,r=len-1,L;
                while(l<=r){
                    int mid=(l+r)/2;
                    if(ans[mid]>=nums[i]){
                        r=mid-1;
                        L=r;
                    }
                    else l=mid+1;
                }
                ans[L+1]=nums[i];
            }
        }
        return ans.size();
    }
};