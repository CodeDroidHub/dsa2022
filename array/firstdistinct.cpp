#include <iostream>
using namespace std;

int main()
{

                    string s = "geeksforgeek";
                    int n = s.length();

                    int i, j;
                    for (int i = 0; i < n; i++)
                    {

                                        int count = 0;
                                        for (int j = i + 1; j < n; j++)
                                        {
                                                            if (s[j] == s[i])
                                                            {
                                                                                count++;
                                                                                break;
                                                            }
                                        }
                                        if (count == 0)
                                        {
                                                            cout << s[i];
                                                            break;
                                        }
                    }

                    return 0;
}