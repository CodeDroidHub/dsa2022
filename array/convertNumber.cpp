#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << "enter the number" << endl;
   int count=0;
    int r, sum = 0;
    while (x > 0)
    {
        int r = x % 10;
        sum = sum * 10 + r;
        x = x / 10;
        count++;
     
    }
       x = sum;
    while (x > 0)
    {
        int a = x % 10;
       
        switch (a)
        {
        case 1:
            cout << "one";
                 if(count==3)
                    cout<<"hundred";
                    else if(count==4)
                    cout<<" thousand";
                      else
                      cout<<" ";
            break;

        case 2:
            cout << "one";
                if(count==3)
                    cout<<"hundred";
                    else if(count==4)
                    cout<<" thousand";
                      else
                      cout<<" ";
            break;

        case 3:

            cout << "three";
                     if(count==3)
                    cout<<"hundred";
                    else if(count==4)
                    cout<<" thousand";
                      else
                      cout<<" ";

        case 4:
            cout << "four";
                   if(count==3)
                    cout<<"hundred";
                    else if(count==4)
                    cout<<" thousand";
                      else
                      cout<<" ";
            break;

        case 5:
            cout << "five";
               if(count==3)
                    cout<<"hundred";
                    else if(count==4)
                    cout<<" thousand";
                      else
                      cout<<" ";
            break;

        case 6:
            cout << "six";
                 if(count==3)
                    cout<<"hundred";
                    else if(count==4)
                    cout<<" thousand";
                      else
                      cout<<" ";
            break;

        case 7:
            cout << "seven";
                   if(count==3)
                    cout<<"hundred";
                    else if(count==4)
                    cout<<" thousand";
                      else
                      cout<<" ";
            break;

        case 8:
            cout << "eight";
                 if(count==3)
                    cout<<"hundred";
                    else if(count==4)
                    cout<<" thousand";
                      else
                      cout<<" ";
            break;

        case 9:
            cout << "nine";
                    if(count==3)
                    cout<<"hundred";
                    else if(count==4)
                    cout<<" thousand";
                      else
                      cout<<" ";
            break;

        default:
            break;
        }
           x = x / 10;
           count--;
    }
     
        return 0;
    }