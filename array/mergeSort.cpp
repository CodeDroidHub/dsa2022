#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid,int r)
{
    int i=l;
    int j=mid+1;
    int k=l;
    int b[r];
    while ((i<=mid && j<=r))
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];i++;
        
        }
        else{
        b[k]=arr[j];
        j++;}
        k++;
    

        /* code */
    }
    while(i<=mid)
    {
        b[k]=arr[i];
        k++;i++;
    }
    while(j<=r)
    {
        b[k]=arr[j];
        k++;j++;
    }
    for(int k=l;k<=r;k++)
    {
        arr[k]=b[k];

    }
    
}
void mergesort(int arr[],int l,int r)
{
    if(l<r){
    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
    }

}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}
int main()
{
   
    int arr[]={1,23,4,56,2,78};
    int n=sizeof(arr)/sizeof(arr[0]);

    mergesort(arr,0,n-1);
  
     display(arr,n);
     return 0;
}