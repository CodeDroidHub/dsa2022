#include <iostream>
#include <limits.h>
using namespace std;

int maximumSubarray(int arr[], int n)
{
              // int max=INT_MIN;
              // for (int i = 0; i < n;i++)
              // {

              //               int result = 0;
              //               for (int j = i; j < n;j++)
              //               {
              //                             result = result + arr[j];
              //                             if(result>max)
              //                             {
              //                                           max = result;
              //                             }

              //               }
              // }
              // return max;
              // kadane's algorithm
              int max = INT_MIN;
              int curr = 0;
              int k = 0;
              for (int i = 0; i < n; i++)
              {

                            curr = curr + arr[i];
                            if (curr > max)
                            {
                                          k++;
                                          max = curr;
                            }
                            if (curr < 0)
                            {
                                          curr = 0;
                            }
              }
              cout << k << endl;

              return max;
}
int main()
{
              int arr[] = {1, 2, 3, -2, 5};
              int n = sizeof(arr) / sizeof(arr[0]);
              cout << maximumSubarray(arr, n) << endl;
              return 0;
}