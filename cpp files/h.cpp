//  void boundry(Node*root , vector<int>&v){
    
//     if(root==NULL)
//     return ;
//     queue<Node*>q ;
//     q.push(root) ;
//     while(!q.empty()){
//         int n = q.size() ;
//         for(int i = 0 ; i<n ; i++){
//               Node*curr = q.front() ;
//               q.pop() ;
//               if(root->left!=NULL)
//               q.push(root->left) ;
//               if(root->right!=NULL)
//               q.push(root->right) ;
//               if(i==0){
//                   v.push_back(curr->data) ;
//               }
              
//         }
//     }
    
//       queue<Node*>p ;
//     p.push(root) ;
//     stack<int>st ;
//     while(!p.empty()){
//         int n = p.size() ;
//         for(int i = 0 ; i<n ; i++){
//               Node*curr = p.front() ;
//               p.pop() ;
//               if(root->right!=NULL)
//               p.push(root->right) ;
//               if(root->left!=NULL)
//               p.push(root->left) ;
//               if(i==(n-1)){
//                 st.push(curr->data) ;
//               }
              
//         }
//     }
    
//     int x = st.size() ;
//     for(int i = 0 ; i<(x-1) ;i++){
//         v.push_back(st.top()) ;
//         st.pop() ;
//     }
    
    
// // }

// // class Solution {
// // public:
// //     vector <int> boundary(Node *root)
// //     {
// //      vector<int>v ;
// //      boundry(root , v) ;
// //        return v ;
// //     }
// // };
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std ;
class Node{
    public:
    int data ;
    Node*left ;
    Node*right ;
    node(int x ){
        this->data = x; 
        this->left = NULL ;
        this->right = NULL ;
    }
};

void boundry(Node*root , vector<int>&v){
  if(root==NULL)
    return ;

    queue<Node*>q ;
    q.push(root) ;
    while(!q.empty()){
        int n = q.size() ;
        for(int i = 0 ; i<n ; i++){
              Node*curr = q.front() ;
              q.pop() ;
              if(root->left!=NULL)
              q.push(root->left) ;
              if(root->right!=NULL)
              q.push(root->right) ;
              if(i==0){
                  v.push_back(curr->data) ;
              }      
        }
    }
  queue<Node*>p ;
    p.push(root) ;
    stack<int>st ;
    while(!p.empty()){
        int n = p.size() ;
        for(int i = 0 ; i<n ; i++){
              Node*curr = p.front() ;
              p.pop() ;
              if(root->right!=NULL)
              p.push(root->right) ;
              if(root->left!=NULL)
              p.push(root->left) ;
              if(i==(n-1)){
                st.push(curr->data) ;
              }     
        }
    }
   
 int x = st.size() ;
    for(int i = 0 ; i<(x-1) ;i++){
        v.push_back(st.top()) ;
        st.pop() ;
    }
}

int  main(){
        Node*root = new Node(10) ;
        root->left = new Node(20) ;
        root->right = new Node(30) ;
        root->left->left = new Node(40) ;
        root->right->right = new Node(50) ;

        vector<int> v  ;
        boundry(root, v) ;
        int a = v.size() ;
        for(int i = 0 ;i<a ; i++){
            cout<<v[i] ;
        }
        return 0 ;
         

}