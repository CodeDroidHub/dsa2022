
#include<iostream>
using namespace std;
class soloution{

public:
void swap(int *x, int *y)
{
              int t = *x;
              *x = *y;
              *y = t;
}

int partition(int X[],int l, int r)
{
              int pivot = X[r];
              int i = l - 1;
              for (int j = l; j < r; j = j + 1)
              {
                            if (X[j] <= pivot)
                            {
                                          i = i + 1;
                                          swap(&X[i], &X[j]);
                            }
              }
              swap(&X[i + 1], &X[r]);
              return i + 1;
}
int KthSmallest(int X[], int l, int r, int k)
{
            
              int pos = partition(X, l, r);
              int i = pos - l + 1;

              if (i == k)
                            return X[pos];
              else if (i > k)
                            return KthSmallest(X, l, pos - 1, k);
              else
                            return KthSmallest(X, pos + 1, r, k - i);
}
}
;
int main()
{
              int arr[]= {7 ,10 ,4 ,3 ,20 ,15};
              int n = sizeof(arr) / sizeof(arr[0]);
              int K = 3;
              soloution obj1;
              cout <<K<<"TH MAXIMUM ELEMENT IS="<< obj1.KthSmallest(arr, 0, n - 1, K) << endl;
              ;
              return 0;
}