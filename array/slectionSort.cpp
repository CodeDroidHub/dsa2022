// The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
// 1) The subarray which is already sorted.
// 2) Remaining subarray which is unsorted.
#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
              int temp = *x;
              *x = *y;
              *y = temp;
}
void slectionSort(int arr[], int n)
{
              int i, j, min_idx;
              for (i = 0; i < n; i++)
              {
                            min_idx = i; // we intilize min_idx and compare with rest of
                            // element if we find min elemnt the min_idx i will store that value in
                            // min_idx
                            for (j = i; j < n; j++)
                            {
                                          if (arr[j] < arr[min_idx])
                                          {
                                                        min_idx = j;
                                          }
                            }
                            swap(&arr[min_idx], &arr[i]);
              }
}
void display(int arr[], int n)
{
              for (int i = 0; i < n; i++)
              {
                            cout << arr[i] << " ";
              }
}
int main()
{
              int arr[] = {12, 32, 5, 89, 14, 54, 99, 22};
              int n = sizeof(arr) / sizeof(arr[0]);
              slectionSort(arr, n);
              display(arr, n);
              return 0;
}
// time complexity=o(n2)