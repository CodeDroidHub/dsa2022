// using stack reverse word in string
#include <iostream>
#include <stack>
using namespace std;
void reverseString(string s)
{
              stack<string> st;
              for (int i = 0; i < s.length(); i++)
              {
                            string word = " ";
                            while (s[i] != ' ' && i < s.length())
                            {
                                          word += s[i];
                                          i++;
                            }
                            st.push(word);
              }
              while (!st.empty())
              {
                            cout << st.top() << " ";
                            st.pop();
              }
}
int main()
{
              string s = {"hello ? how are you bro"};
              reverseString(s);
              return 0;
}
