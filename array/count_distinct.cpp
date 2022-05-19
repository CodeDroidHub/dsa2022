// time complexity 0(n2)
//     space complexity 0(n);
//  ---------------------NAIVE APPROCH-------------------------------
#include <bits/stdc++.h>
using namespace std;
void countfreq(int arr[], int n)
{
                    //               int visited[n];
                    //               // // it works for marking visited element in the array if you got an element
                    //               // //  duplicate then there will be no change when you go at that position

                    //               for (int i = 0; i < n; i++)
                    //               {
                    //                             if (visited[i] != 1)
                    //                             // checking condtion for marked
                    //                             {

                    //                                           for (int j = i + 1; j < n; j++)
                    //                                           {
                    //                                                         if (arr[j] == arr[i]) // condition for duplicate element
                    //                                                         {
                    //                                                                       visited[j] = 1; // marked
                    //                                                         }
                    //                                           }
                    //                                           cout << arr[i] << " ";
                    //                             }
                    //               }
//         o(n) &o(n)                    unordered_map<int, int> mp; // in unordered set there is no duplicate value

                    for (int i = 0; i < n; i++)
                    {
                                        mp[arr[i]]++;
                    }
                    for (auto x : mp) // auto recognize itself datatype
                                        cout << x.first << endl;
}

int main()
{
                    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
                    int n = sizeof(arr) / sizeof(arr[0]);
                    countfreq(arr, n);
                    return 0;
}