#include<iostream>
using namespace std ;
int main()
{
       int row,colum ;
       cout<<"enter the vlaue of a and b" ;
       cin>>row>>colum ;
       for (int i = 1; i <= row; i++) {
       for (int j = 1; j <=colum; j++){
           if (i==1 || i==row || j==1 || j==colum)
           {
     cout<<"*" ;
           }
           else{
               cout<<" " ;
           }
          
       }
     
            cout<<endl ;
              }
              return 0 ;
}
