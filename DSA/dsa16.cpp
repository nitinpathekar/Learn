#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     n=n/2;

//     for(int i=n;i>=1;i--){
//         for(int j=i;j>=1;j--){
//             cout<<"  ";
//         }
//         for(int j=1; j<=2*n-2*i+1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//      for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"  ";
//         }
//         for(int j=2*n-2*i+1; j>=1;j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int main(){

//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=i-1;j>=1;j--){
//             cout<<"  ";

//         }
//         for(int j=1;j<=2*n-2*i+1;j+=1){
//             cout<<"* ";
//         }
//         cout<<endl;


//     }

// }

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }


        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;

    } 
    


    return 0;
}