//O(n^3)
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

//using cummulative Sum O(n^2)
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
    int arr[1000],csum[1000];
    cin>>arr[0];
    csum[0]=arr[0];
    //cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        csum[i]=csum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //elements of current subarray (i,j)
            currSum=0;
            currSum=csum[j]-csum[i-1];
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

//Kadanes algo
#include <iostream>
using namespace std;
int main() {
    //cout<<"Hello World!";
    int n;
    int left=0,right=0;
    //cout<<"Enter the Size of array";
    cin>>n;
    int cs;
    int maxSum=0;
    int arr[1000];
    cin>>arr[0];
    //cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    }
    for(int i=0;i<n;i++){
        cs+=arr[i];
        if(cs<0)
            cs=0;
        maxSum=max(maxSum,cs);
        
    }
    cout<<maxSum<<endl;
     
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

