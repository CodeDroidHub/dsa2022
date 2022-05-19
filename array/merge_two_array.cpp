#include<iostream>
#include<vector>
using namespace std;
   

int main()
{
    int arr[]={1,6};
    int arr1[]={3,5,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr1)/sizeof(arr1[0]);
     int arr2[m+n];
  
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr[i]<arr1[j])
        {
         arr2[k++]=arr[i++];
        }
        else 
        arr2[k++]=arr1[j++];
    }
    while(i<n){
        arr2[k++]=arr[i++];

    }
    while(j<m)
    {
        arr2[k++]=arr1[j++];
    }
    for(int i=0;i<m+n;i++)
    {
        cout<<arr2[i]<<" ";
    }
return 0;
}