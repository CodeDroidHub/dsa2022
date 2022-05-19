#include <iostream>
using namespace std;

void palindromeNumber(string &s, int n)
{
              int l = 0;
              int e = n - 1;
              int flag = 0;
              while (l < e)
              {
                            if (s[l] != s[e])
                            {
                                          flag = 1;
                                          break;
                            }
                            l++;
                            e--;
              }
              if (flag == 1)
              {
                            cout << "not" << endl;
              }
              else
                            cout << "yes";
}

int main()
{
              string s = "radar";
              int n = s.length();

              return 0;
}