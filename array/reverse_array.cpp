// for (int i = n-1;i>=0;i++)
// {
//               cout << arr[i] << endl;
// }

// for (int i = 0; i < n / 2;i++)
// {
//               int temp = arr[i];
//               arr[i] = arr[n - 1];
//               arr[n - 1] = temp;
// }
#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
  while (start < end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
}
int main()
{
  int arr[] = {1, 2, 4, 63, 67};
  int n = sizeof(arr) / sizeof(arr[0]);
  reverse(arr, 0, n - 1);
  print(arr, n);
  return 0;
}