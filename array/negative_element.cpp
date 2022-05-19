#include<iostream>
using namespace std;
//naive approch
void swap(int *x, int *y)
{
              int t = *x;
              *x = *y;
              *y = t;
}
void moveElement(int arr[],int n)
{
              int m = 0;
              for (int i = 0; i < n;i++)
              {
                            if(arr[i]<0)
                            {
                                          swap(&arr[i], &arr[m]);
                                          m++;
                            }
              }
}
void display(int arr[],int n)
{
              for (int i = 0; i < n;i++)
              {
                            cout << arr[i] << " ";
                            
              }
}
int main()
{
              int arr[] = {-1, 4, 54, 24, -13, 344, -133};
              int n = sizeof(arr) / sizeof(arr[0]);
              moveElement(arr, n);
              display(arr, n);

              return 0;
}