// #include<iostream>
// using namespace std ;
// ****************call by value**************
// int add(int x , int y ){
//     return x+y ; 
// }
// int main(){
// int a = 50 ;
// int b= 90 ; 
// cout<<add(a,b) ; 
// ************************call by adress***********************
// int add(int* x , int* y){
    
//     return *x + *y ;

// }
// int main(){

// int a , b ;
// cin>>a>>b ; 
// cout<<add(&a , &b) ; 


// *************************refrence varriable**************************

// int main(){

// int a= 100 ; 
// int &ref= a ; 
// cout<<ref<<endl ; 
// cout<<&ref ; 


// *******************************************************************

// inline void mul(){
//     cout<<"siddhartha verma is good boy" ; 
// }

// int  main(){

//   mul()  ;




// ******************************************************************



//  const  int x=  10 ;
// x = x+50 ;
// cout<<x ; 


// class student{
// public:
// int roll ; 
// char name[10] ;

// };
// int main(){

// student s1 :
// s1.roll = 100 ; 
 


// return 0  ;
// }

// *************************************************************************************************8



// #include<iostream>
// using namespace std ;
// class student{
//  public:
//  char name[3] ; 
//  int roll ; 
//  int age ; 
 

//  int totalMarks(int p , int c , int m ){
     
//      return (p+c+m)  ;

//  }
//  void candidateCharacter(int marks) ; 
// //  {
// // if(marks>50){
// //         cout<<"candidate's character is good" ; 
// //     }
// // else{
// //         cout<<"candidate's character is bad" ; 
// //     }
// //  }
// };

// // void student :: candidateCharacter(int marks){
//      void student :: candidateCharacter(int marks){
// if(marks>50){
//         cout<< age<<" age  character is good" ; 
//     }
// else{
//         cout << age<<" age character is bad" ; 
//     }
//  }
    
// // }

// int main(){

// student ram ; 
// student rahul ; 
// ram.age = 20 ; 
// rahul.age = 90 ; 
// cout<<ram.age <<endl; 
// cout<<rahul.age<<endl  ; 
//  cout<<ram.totalMarks(100,90,90)<<endl ;
//   ram.candidateCharacter(60)  ;
//   cout<<endl ; 

//   rahul.candidateCharacter(50)  ;


// return 0 ;
// }



// ****************8*************************************************************************************************




// #include<iostream>
// using namespace std ;
// class employee{
//     public:
//         //   char  name ; 
//            int  rank ; 
//     static int  salary ; 
//     static void promo(int n) ; 
      
        
        
    

// } ; 
// int employee :: salary ; 
// void employee::promo(int n){
//       if(n>50){
//             cout<<"employee is promoted" ; 
//         }
//             else{
//                 cout<< "employee is not promoted"  ;
//             }
// }
// int main(){

// employee a,b , c ,d, e;
// a.rank =  2 ;
// a.salary = 1000  ;
// b.rank = 3 ; 
// b.salary = 4000 ; 
// // cout<<a.salary<<endl ; 
// // cout<<b.salary<<endl ; 
// // cout<<c.salary<<endl ; 
// // cout<<d.salary<<endl ; 
// // cout<<e.salary<<endl ; 
// // cout<<a.rank<<endl ; 
// // cout<<b.rank<<endl ; 
// // cout<<c.rank<<endl ; 
// // cout<<d.rank<<endl ; 
// // cout<<e.rank<<endl ; 
// a.promo(50) ; 
// cout<<endl ; 
// b.promo(60) ; 



// return 0 ;
// }