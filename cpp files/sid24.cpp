// #include<iostream>
// using namespace std ;
// int main(){
// int n ;
// cin>>n ;
// sid[n] ;
// for (int i = 0; i <n; i++)
// {
//  cin>>sid[i] ;
// }
// for (int i = 0; i < n; i++)
// {

// }


// return 0 ;
// }
// #include<iostream>
// using namespace std ;
// int main(){
// int n  ;
// cin>>n ;
// int sid[n] ;
// for (int i = 0; i <n; i++)
// {
//     /* code */
//     cin>>n ;
// }
// for (int i = 0; i <n; i++)
// {
// for (int j = i+1; j<=n; j++)
// {
// if (sid[j]<sid[i])
// {
// int temp = sid[j] ;
// sid[j] = sid[i] ;
// sid[i] = temp ;
// }

// }

// }
// for (int i = 0; i <n; i++)
// {
//     /* code */
//     cout<<sid[i] ;
// }


// return 0 ;
// }










#include<iostream>
using namespace std ;
int main(){
int n ;
cin>>n ;
int sid[n] ;
for (int i = 0; i <n; i++)
{
 cin>>sid[i] ;
}

for (int i = 0; i <n; i++)
{
for (int j=i+1; j <=n; j++)
{
if (sid[j] < sid[i]) 
{
    int temp = sid[j] ;
sid[j] = sid[i] ;
sid[i] = temp ;
}


}

}
for (int i = 0; i <n; i++)
{
  cout<<sid[i]<<"  " ;
}



return 0 ;
}