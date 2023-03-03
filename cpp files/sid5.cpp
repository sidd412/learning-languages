# include<iostream>
using namespace std ;
int main(){
    int row ,colum ;
    cout<<"enter the no of rows and colums" ;
    cin>>row>>colum ;
    for (int i = 1; i <= row; i++)
    {
      for (int j= 1; j <=colum; j++)
    {
        cout<<"*" ;
    }
    cout<<endl ;
    }
    
return 0 ;
}
