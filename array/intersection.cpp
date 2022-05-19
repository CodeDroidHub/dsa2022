#include <bits/stdc++.h>

using namespace std;
int main()
{
              int arr1[] = {4,9,5};
              int arr2[] = {4,4,8,9,10};
              int n = sizeof(arr1) / sizeof(arr1[0]);
              int m = sizeof(arr2) / sizeof(arr2[0]);
              int i = 0, j = 0;
              vector<int> s;
              while (i < n && j < m)
              {
                            if (arr1[i] < arr2[j])
                            {
                                          //here i understand why we are using this 
                                          //reason if arr[i]<arr[j] then arr[j] mil skta arr[i] ke age kyu
                                          // arrray sorted it's sorting benifit
                                          i++;
                            }
                            else if (arr2[j] < arr1[i])
                            {
                                        
                                          j++;
                            }
                            else
                            {
                                          cout << arr2[j]<<" ";
                                          j++;
                                          i++;

                            }
              }
             
              return 0;
}