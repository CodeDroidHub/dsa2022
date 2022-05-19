#include <iostream>
using namespace std;

void reverseString(string &s, int n)
{
              int l = 0;
              int e = n - 1;
              while (l < e)
              {
                            int temp = s[l];
                            s[l] = s[e];
                            s[e] = temp;
                            l++;
                            e--;
              }
}
void display(string s, int n)
{
              for (int i = 0; i < n; i++)
              {
                            cout << s[i];
              }
}
int main()
{
              string s = {"hello"};
              int n = s.length();
              reverseString(s, n);
              display(s, n);
              return 0;
}