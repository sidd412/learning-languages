#include<iostream>
using namespace std ;
int main(){
int n ;

cout<<"enter the vlaue of n" ;
cin>>n ;
for (int i = 1; i <=n; i++)
{
 for (int j =1; j <=n; j++)
 {
if ((i+j)%2 == 0 && j<=i)
{
cout<<" 1" ;
}
else if ((i+j)%2 != 0 && j<=i)
{
 cout<<" 0" ;
}

else{
    cout<<" " ;
}
 }
 cout<<endl ;
}


    return 0 ;
}