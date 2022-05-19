// naive approch
#include <iostream>
using namespace std;

int lenZero(int arr[], int n)
{
              int curr = 0;
              for (int i = 0; i < n; i++)
              {
                            for (int j = i; j < n; j++)
                            {
                                          curr = curr + arr[j];
                                          if (curr == 0)
                                          {
                                                        cout << "yes";
                                          }
                            }
              }
              return 0;
}

int main()
{
              int arr[] = {1, 4, -2, -2, 5, -4, 3};
              int n = sizeof(arr) / sizeof(arr[0]);

              if (lenZero(arr, n))

                            cout << "yes";

              else
                            cout << "no";
              return 0;
}