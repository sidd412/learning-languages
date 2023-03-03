#include<bits/stdc++.h>
using namespace std ;

class Employee {

public:

       string name ; 

       int year_of_joining ;

       string address ;

       void  print_details (String name , int year_of_joining , String adress){

               cout<<name<<"  " ;

               cout<<year_of_joining<<"  "  ;

              cout<<adress<<"  "<<endl ;

   }
}




int  main(){

     Employee E1 , E2 , E3 ;

     E1.print_details("Robert" , 1994 , "64C- WallsStreat" ) ;

     E2.print_details("sam" , 2000 , "64D- WallsStreat") ;

     E3.print_details("John" , 1999 , "26B- WallsStreat ") ;

     return 0 ;

}