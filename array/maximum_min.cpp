#include<iostream>
using namespace std;
int main()
{
                   //naive approch
              int min = 1111111, max = -111111;
              int arr[] = {45, 5, 66, 3, 55};
              int n = sizeof(arr) / sizeof(arr[0]);
              for (int i = 0; i < n;i++)
              {
                            if(arr[i]>max)
                            {
                                          max = arr[i];
                            }
              }
              cout << max << endl;
              for (int i = 0; i < n; i++)
              {
                            if (arr[i] < min)
                            {
                                          min = arr[i];
                            }
              }
              cout << min << endl;
              return 0;

}
