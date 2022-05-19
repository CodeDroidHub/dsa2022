#include <bits/stdc++.h>
using namespace std;
    int index(vector<int> nums,int target,int l,int n)
    {
      int mid=l+(n-l)/2;
        while(l<=n){
        if(nums[mid]==target){
            return mid;}
            if(target>nums[mid])
                return index(nums,target,mid+1,n);
                else
                    return index(nums,target,l,mid-1);
                        }
      return -1;
        }
    
    
    
int main()
{
     vector<int> n = { 2, 3, 4, 10, 40};
    int a=n.size()-1;
    
    cout<<"position of key is"<<index(n,10,0,a)<<endl;
     return 0;
}
