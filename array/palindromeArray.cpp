#include <iostream>
using namespace std;
void palindrome(int arr[], int start, int end)
{
              int flag = 0;
              while (start < end && end != 0)
              {
                            if (arr[start] != arr[end])
                            {
                                          flag = 1;
                                          break;
                            }
                            else
                            {
                                          start++;
                                          end--;
                            }
              }
              if (flag == 1)
              {
                            cout << "not" << endl;
              }
              else
                            cout << "yes" << endl;
}

int main()
{
              int arr[] = {1, 2, 3, 2, 1};
              int n = sizeof(arr) / sizeof(arr[0]);
              palindrome(arr, 0, n - 1);

              return 0;
}