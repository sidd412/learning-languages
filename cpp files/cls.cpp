#include<iostream>
using namespace std ;
class student{
    private:
    string name  ; 
    int age ;
    bool gender ; 
    student(){
        cout<<"default constructer is called"  ;
    } ; 
};

int main(){
student a;
a.name = 'siddhar' ;


return 0 ;
}