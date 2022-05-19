#include<iostream>
using namespace std;

void subString(string s,int n)
{
 for(int i=0;i<n;i++)
 {
                     for (int j = 0;j<=i;j++)
                     {
                                         cout<<s[j]<<" ";

                     }
                     cout << endl;
 }
}

int main()
{
                    string s="abdbfhchrfff";
                    int n=s.length();
                    subString(s,n);
                    return 0;
}