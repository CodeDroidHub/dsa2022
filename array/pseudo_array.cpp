#include <iostream>

using namespace std;


int main() {

 // your code goes here

 int c;

 cin>>c;

 while(c>0){   int n;

     cin>>n;

     int a[n];

     int count=0;

     for(int i=0;i<n;i++){

         cin>>a[i];

         if(a[i-1]>a[i]&&i>=1){

           

           

                          swap(a[i-1],a[i]);

                            if(a[i-2]>a[i-1]&&i>=2)
                    {

                            count+=2;

                             }

                         else if(a[i-2]<a[i-1]&&i>=2){

                         count+=1;
                                  
                                }

                            else if(i==1){

                         count+=1;

                          }

                     else{

                                         count += 1;
                                }    
           
           
             }

         

         

     }

    

   

   if(count<2){

       cout<<"YES"<<endl;

   } 

   else{

       cout<<"NO"<<endl;

   }

     

     c--;

     

 }

 return 0;

}