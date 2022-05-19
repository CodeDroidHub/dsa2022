#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[]={7,6,4,3,29};
    int n=sizeof(arr)/sizeof(arr[0]);
  int buy=INT_MAX,sell=INT_MIN,profit;
  int j;
  for(int i=0;i<n;i++)
  {
     if(arr[i]<buy)
     {
       buy=arr[i];
           j=i;
            }
        
  }
  
  for(int k=j+1;k<n;k++)
  {
      if(arr[k]>sell)
      {
          sell=arr[k];
      }
  }
if(sell>buy)
{
    profit=sell-buy;
}
else
profit=0;
cout<<profit<<endl;

 return 0;
}
  