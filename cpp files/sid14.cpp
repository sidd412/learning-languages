#include<iostream>
using namespace std ;
int main(){
int n ;
int sum= 1 ;
cout<<"enter the vlaue of n" ;
cin>>n ;
for (int i = 1; i <=n; i++)
{
 for (int j =1; j <=n; j++)
 {
if (j<=i)
{
cout<<sum ;
sum = sum + 1;
}
else{
    cout<<" " ;
}
 }
 cout<<endl ;
}


    return 0 ;
}