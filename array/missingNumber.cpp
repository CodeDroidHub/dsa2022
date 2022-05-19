// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
                    int MissingNumber(vector<int> &a, int n)
                    {
                                        // For xor of all the elements in array
                                        int x1 = a[0];

                                        // For xor of all the elements from 1 to n+1
                                        int x2 = 1;

                                        for (int i = 1; i < n; i++)
                                                            x1 = x1 ^ a[i];

                                        for (int i = 2; i <= n + 1; i++)
                                                            x2 = x2 ^ i;

                                        return (x1 ^ x2);
                    }
};

// { Driver Code Starts.

int main()
{
                    int n;
                    cout << "ENTER5 THE NBYUMBE" << endl;
                    cin >> n;
                    cout << "enter the array" << endl;
                    vector<int> array(n - 1);
                    for (int i = 0; i < n - 1; ++i)
                                        cin >> array[i];
                    Solution obj;
                    cout << obj.MissingNumber(array, n) << "\n";
                    return 0;
} // } Driver Code Ends