class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        int n = nums.size();

        priority_queue<int, vector<int>, greater<int>>p;

        for(auto x:nums){
            p.push(x);
            if(p.size()>k){
                p.pop();
            }
        }
       return p.top();


    }

    //     sort(nums.begin(), nums.end());


    //     for(int i=0;i<n;i++){
    //         if(nums[i]==k){
    //             return nums[i];
    //         }
    //     }
    //     return -1;
    // }
};
