// #include<iostream>
// using namespace std ;
// int main(){
// int n ;
// cin>>n ;
// int marks[n] ;
// for (int i = 0; i <n; i++)
// {
// cin>>marks[i] ;
// }
//                       int maximum = INT8_MIN ;
//                       int minimum = INT8_MAX ;
//                       for (int i = 0; i <n; i++)
//                       {
//                      maximum=max(maximum,marks[i]) ;
                   
//                      minimum=min(minimum,marks[i]); 
//                         }
//       cout<<"miximum number is :"<<maximum<<"                   "<<minimum   ;     // cout<<sizeof(marks[n]) ;

// return 0 ;
// }
#include<iostream>
#include<climits>
using namespace std ;
int main(){
int n ;
cin>>n ;
int sid[n] ;
for (int i = 0; i <n; i++)
{
   cin>>sid[i] ;/* code */
}
  int maximum = INT_MAX ;
  int minimum = INT_MIN ;
 for (int i = 0; i <n; i++)
 {
      maximum = max(maximum,sid[i]) ;  
      minimum = min(minimum,sid[i]) ;  
                 /* code */
 }
 cout<<"maximum number is : "<<maximum<<endl ;
 cout<<"minimum number is :"<<minimum ;
 
 
return 0 ;
}