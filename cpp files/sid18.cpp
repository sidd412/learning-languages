#include<iostream>
#include<math.h>
using namespace std ;
int main(){
int n ;
 int flag = 0 ;
cout<<"enter the number" ;
cin>>n ;
for (int  i = 2; i <=sqrt(n); i++)
{
if (n%i == 0)
{
flag = 1 ;
break ;
}
}

if (flag==1)
{
cout<<"number is prime" ;
}
else{
    cout<<"number is not prime" ;
}




return 0 ;
}