#include<iostream>
using namespace std ;
int main(){
    string num  = "";
    cin>>num ;
    int x = stoi(num) ;
    cout<<x-2 <<endl ;
    if((x%7)==0){
      cout<<1<<endl ;
    }
    else{
    cout<< 0 ;
    }


}