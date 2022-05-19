#include <bits/stdc++.h>

using namespace std;
int main()
{
              int arr1[] = {1, 4, 54, 1,11,24, 13, 344, 133};
              int arr2[] = {1, 4, 6};
              int n = sizeof(arr1) / sizeof(arr1[0]);
              int m = sizeof(arr2) / sizeof(arr2[0]);
              //approch using unorder map 
              //un order basically count number of  occurences of an element in array
              // int i=0, j=0;
              // while(i<n && j<m)
              // {
              //   if(arr1[i]<arr2[j])
              //   {
              //                 cout << arr1[i] << " ";
              //                 i++;
              //   }
              //   else if (arr2[j]<arr1[i])
              //   {
              //                 cout << arr2[j] << " ";
              //                 j++;
              //   }
              //   else
              //   {
              //                 cout << arr2[j] << " ";
              //   j++;
              //   i++;
              //   }
              // }
              // while(i<n)
              // {
              //               cout << arr1[i] << " ";
              //               i++;
              // }
              // while(j<m)
              // {
              //               cout << arr2[j] << " ";
              //               j++;
              // }
                
                // optimized approch ------------
                // -----------------------------------
                 //USING SET(METH0D 2)TIME COMPLEXITY(O(NLOGN)+O(MLOGN))
                // --------------------------
              //   // ----------------------
              // set<int> s;//just like array declaration but it store only distinct elements
              // for (int i = 0; i < n; i++)
              // {
              //   s.insert(arr1[i]);//with help of insert functon we can add value
              // }
              // for (int i = 0; i < m; i++)
              // {
              //   s.insert(arr2[i]); // with help of insert functon we can add value
              // }
              // cout << "Number of elements after union operation: " << s.size() << endl;
              // cout << "The union set of both arrays is :" << endl;
              // for (auto itr = s.begin(); itr != s.end(); itr++)
              //   cout << *itr
              //        << " "; // s will contain only distinct
              //                // elements from array a and b

 
              // (Using map data structure)
             unordered_map <int, int> mp;
              for (int i = 0; i < n;i++)
                mp.insert({arr1[i], i});
              for (int i = 0; i < m;i++)
                mp.insert({arr2[i], i});
              cout << "the union set of both arrays is  :" << mp.size() << endl;
              for (auto itr = mp.begin(); itr != mp.end();itr++){
                cout << itr->first << " ";
              }
                           return 0;
}
                            
