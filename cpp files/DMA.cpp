
#include<iostream>

using namespace std ;
class student{
    public:
    int roll ; 
    int rank ; 
    float marks ; 
    char name ; 

};
int main(){
            
        //    student ram ;      //    static object creation or static memory allocation for object of the class   
       student* ram = new student() ;  //  dynamic object creation or dynamic memory allocation for object of class
            cout<<&ram <<endl ;      
            cout<<sizeof(ram)<<endl ; 
        //  ********************   // accessing normal or statically created objects ussing " ." operator ******************************
        //   ram.roll = 62 ;
        //   ram.rank = 21 ;
        //   cout<<ram.roll<<endl<<ram.rank ;

        // ***********************************************************************

// ************************accessing dynamically created object ussing -> operator *********************************

ram -> roll  = 62 ;
ram -> rank = 21 ;
cout<<ram -> roll <<endl <<ram -> rank <<endl;  
    // ****  OR   ****
cout<<(*ram).roll<<endl<<(*ram).rank ;
return 0 ;
}