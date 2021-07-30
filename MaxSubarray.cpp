// O(n^2)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=-100001;
        int currSum=0;
        int n=nums.size();
        
        for(int i=1; i<n ;i++){
            nums[i]=nums[i-1]+nums[i];
        }
        
        if(nums.size()==1)
            return nums[0];
        
        for(int i=0;i<n;i++){
            currSum=0;
            maxSum=max(maxSum,nums[i]);
            for(int j=i+1;j<n;j++){
               currSum=nums[j]-nums[i];
                maxSum=max(maxSum,currSum);
            }
            
      }
      return maxSum;
    }
};

//Solutions at O(n)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int temp=nums[0],i,j,sum=nums[0];
    for(i=1;i<nums.size();i++){
        
        if(sum+nums[i]>=sum && sum+nums[i]>=nums[i]){
            sum+=nums[i];
        }
        
        else if(sum+nums[i]<=sum && sum+nums[i]>=nums[i]){
            
            if(temp<=sum){
                temp=sum;
            }
            sum+=nums[i];
        }
        else {
            if(temp<=sum){
                temp=sum;
            }
            sum=nums[i];
        }
    }
    
    return (temp>=sum)?temp:sum;
    
    }
};

#include <iostream>
using namespace std;
int main() {
    //cout<<"Hello World!";
    int n;
    int left=0,right=0;
    //cout<<"Enter the Size of array";
    cin>>n;
    int currSum;
    int maxSum=0;
    int arr[1000];
    //cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //elements of current subarray (i,j)
            currSum=0;
            for(int k=i;k<=j;k++){
               currSum+=arr[k];
            }
            if(maxSum<currSum){
                maxSum=currSum;
                left=i;
                right=j;
            }
        //cout<<endl;
        }
    }
    cout<<maxSum<<endl;
    for(int k=left;k<=right;k++)
        cout<<arr[k]<<" "; 
}













//After modifying The Above code (Kadanes Algorithm)..

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m1=nums[0],m2=nums[0];
        if(nums.size()==0)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            m2=max(m2+nums[i],nums[i]);
            m1=max(m1,m2);
        }
        return m1;
    }
};

