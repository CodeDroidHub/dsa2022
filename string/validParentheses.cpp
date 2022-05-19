#include <iostream>
#include <stack>
using namespace std;

bool check(string s, int n)
{
                    stack<char> s1;
                    for (int i = 0; i < n; i++)

                    {
                                        if (s1.empty())
                                        {
                                                            s1.push(s[i]);
                                        }
                                      else  if ((s1.top() == '(' && s[i] == ')') || (s1.top() == '[' && s[i] == ']') || (s1.top() == '{' && s[i] == '}'))
                                        {
                                                            s1.pop();
                                        }
                                        else
                                                            s1.push(s[i]);
                    }
                    if (s1.empty())
                    {
                                        return true;
                    }
                    else
                                        return false;
}
int main()
{
                    string s = "{()}[]";
                    int n = s.length();
                    if (check(s, n) == true)
                    {
                                        cout << "balanced";
                    }
                    else
                                        cout << "unbalanced";
                    return 0;
}