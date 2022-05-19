#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << "enter the number" << endl;
   
    int r, sum = 0;
    while (x > 0)
    {
        int r = x % 10;
        sum = sum * 10 + r;
        x = x / 10;
     
    }
       x = sum;
    while (x > 0)
    {
        int a = x % 10;
        switch (a)
        {
        case 1:
            cout << "one"
                 << " ";
            break;

        case 2:
            cout << "one"
                 << " ";
            break;

        case 3:

            cout << "three"
                 << " ";

        case 4:
            cout << "four"
                 << " ";
            break;

        case 5:
            cout << "five"
                 << " ";
            break;

        case 6:
            cout << "six"
                 << " ";
            break;

        case 7:
            cout << "seven"
                 << " ";
            break;

        case 8:
            cout << "eight"
                 << " ";
            break;

        case 9:
            cout << "nine"
                 << " ";
            break;

        default:
            break;
        }
           x = x / 10;
    }
     
        return 0;
    }