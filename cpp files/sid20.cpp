#include<iostream>
using namespace std ;
int main(){
int n ;
int sum= 0 ;
 int org_num = n;

cout<<"enter the value of n" ;
cin>>n ;
while (n>0)
{

 int x= n%10 ;

sum = sum + x*x*x ;
n=n/10 ;

}
if (org_num==sum)
{
cout<<"number is armstron\n" ;
}
else{
    cout<<"number is not armstron\n" ;
}


return 0 ;
}