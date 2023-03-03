#include<iostream>
#include<vector>
using namespace std ;
int main(){
vector<int> arr ;
int n = 5 ; 
for(int i = 0 ; i<5 ; i++){
    arr[i] = i+1 ;
}
cout<<arr[3] ;
return 0 ;
}