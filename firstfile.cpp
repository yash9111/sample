class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int s=0;
        int e=nums.size();

        int mid=(s+e)/2;

        while(s<=e)
        {
            if(nums[mid]==target)
            {
                return mid;
            }


            if(nums[s]<=nums[mid])
            {
                if(nums[s]<=target && nums[mid]>= target)
                {
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(target >= nums[mid]  && target <= nums[e])
                {
                    s=mid+1;                }

                else{
                    e=mid-1;
                }

            }

            mid=(s+e)/2;
        }

        return -1;

    }
};