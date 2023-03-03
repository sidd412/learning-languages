#include<iostream>
using namespace std ;
int main(){
int n ,m ;
cout<<"enter the size of row and colum" ;
cin>>n>>m ;
int sid[n][m] ;

// storing the array 

cout<<"enter the element you wants to store :    " ;
for (int  i = 0; i < n ; i++)
{
  for (int j = 0; j <m; j++)
  {
   
    cin>>sid[i][j] ;

  }
}

// printing the array 

  for (int  i = 0; i <n; i++)
{
  for (int j = 0; j < m; j++)
  {
  cout<<sid[i][j]<<" " ;
  }
  cout<<endl ;
  
}

// making transpose of array matrix 

for (int  i = 0; i <n; i++)
{
  for (int j = i; j < m ; j++)
  {
  int temp = sid[i][j] ;
  sid[i][j] = sid[j][i] ;
  sid[j][i] = temp ;
  }
  
}

// printing transpose of a matrix 

for (int i = 0; i < n; i++)
{
  for (int j = 0; j < m; j++)
  {
    cout<<sid[i][j]<<" " ;
  }
  cout<<endl ;
  
}





return 0 ;
}
