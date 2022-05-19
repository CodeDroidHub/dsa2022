#include<iostream>
#include<climits>
using namespace std;
// void triplet(int arr[],int n)
// {
    
// }
int main()
{
    int arr[]={-1,0,1,2,-1,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    // triplet(arr,n);
    int sum=0;
   for(int i=0;i<n-2;i++)
   {
       for(int j=i+1;j<n-1;j++)
       {
           for(int k=j+1;k<n;k++)
           {
             if((arr[i]+arr[j]+arr[k])==0)
             cout<<"{"<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"}"<<" ";
           }
       }
   }



    return 0;
}