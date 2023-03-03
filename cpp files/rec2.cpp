#include<iostream>
using namespace std ;
void  inc(int n){
    if(n==0)
    return ;
    cout<<n ;
 return inc(n-1) ;
    
}
int  dec(int n){

while(n>0)
   
        return(n-1) ;
   
}
int main(){
    int n ;
    cin>>n ;
    inc(n) ;
    cout<<dec(n) ;
return 0 ;
}