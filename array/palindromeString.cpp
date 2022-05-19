#include <iostream>
using namespace std;
bool palindrome(string arr, int start, int end)
{
              // int flag = 0;
              //               while (start < end && end != 0)
              //               {
              //                             if (arr[start] != arr[end])
              //                             {
              //                                           flag = 1;
              //                                           break;
              //                             }
              //                             else
              //                             {
              //                                           start++;
              //                                           end--;
              //                             }
              //               }
              //               if (flag == 1)
              //               {
              //                             cout << "not" << endl;
              //               }
              //               else
              //                             cout << "yes" << endl;

              //               return 0;
              // }
              // recurison
              if (start = end)
                            return true;
              if (arr[start] != arr[end])
                            return false;
              if (start < end + 1)
                            return palindrome(arr, start + 1, end - 1);
              return true;
              // }
}
int main()
{
              string arr = {"abcdcba"};
              int n = arr.length();
              palindrome(arr, 0, n - 1);

              return 0;
}