#include<iostream>
using namespace std ;

 int binarysearch(int arr[], int n, int key){
     int s = 0 ;
     int e = n ;
     int mid = (s+e)/2 ;
     while (s<=e)
     {
  if (arr[mid]==key)
  {
return mid ;
  }
  else if (arr[mid]>key)
  {
  e=mid-1 ;
  }
  else{
      s=mid+1 ;
  }
  
     }
    return -1 ; 

 }





int main(){
int n ;
cout<<"enter the size of arraay :" ;
cin>>n ;
int arr[n] ;
for (int i = 0; i <n; i++)
{
       cin>>arr[i] ;
}
int key ;
cout<<"enter the key , you wants to search "; 
cin>>key ;
cout<<binarysearch(arr,n,key) ;



return 0 ;
}