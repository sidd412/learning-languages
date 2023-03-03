#include<iostream>
using namespace std ;
int main(){
int n ,m ;
cout<<"enter the size of row and colum" ;
cin>>n>>m ;
int sid[n][m] ;
cout<<"enter the element you wants to store :    " ;
for (int  i = 0; i <= n ; i++)
{
  for (int j = 0; j <=m; j++)
  {
   
    cin>>sid[i][j] ;

  }
  
}
for (int  i = 0; i <= n; i++)
{
  for (int j = 0; j <= m; j++)
  {
  cout<<sid[i][j]<<" " ;
  }
  cout<<endl ;
  
}


return 0 ;
}