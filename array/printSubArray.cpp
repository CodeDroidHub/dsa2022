#include <iostream>
#include <limits.h>
using namespace std;
void subArray(int arr[],int n)
{
              for (int i = 0; i < n;i++) //starting point
              {
                            for (int j = i; j < n;j++)//ending point
                            {
                                          for (int k = i; k <= j;k++)
                                          {
                                                        cout << arr[k] << " ";
                                                    
                                          }
                                          cout << endl;
                            }
              }
}
int main()
{
              int arr[] = {1, 2, 3, -2, 5};
              int n = sizeof(arr) / sizeof(arr[0]);
              subArray(arr, n);
              return 0;
}