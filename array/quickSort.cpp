#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int partion(int arr[],int l,int h)
{
int i=l-1;
int pivot=arr[h];
for(int j=l;j<=h-1;j++)
{
    if(arr[j]<pivot)
    {
        i++;
        swap(&arr[i],&arr[j]);
    }
   
   
}
 swap(&arr[i+1],&arr[h]);
 return i+1;
}
void quickSort(int arr[],int l,int r)
{
    if(l<r)
    {
    int pi=partion(arr,l,r);
    
    quickSort(arr,l,pi-1);
    quickSort(arr,pi+1,r);
    }

}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}
int main(){
    int arr[]={1,5,7,8,9,6 };
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    cout<<"sorted array is:=";
    display(arr,n);
    return 0;
}