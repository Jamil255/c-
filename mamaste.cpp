#include<iostream>
using namespace std;
void namaste();
void bonjour();
int main(){
    cout<<"enter i for indian or f for french:";
    char ch;
    cin>>ch;
  namaste();
}
void namaste(){
    cout<<"namaste"<<endl;
bonjour();
}
void bonjour(){
    cout<<"bonjour"<<endl;
// }
// // #include<iostream>
// // using namespace std;
// // void salam();
// // void namaste();//prototype ,deceraltion
// // void bonjour();
// // int main(){
// //     cout<<"enter for p pakistani and i for indian and f for french:";
// //     char ch ;
// //     cin>>ch;
// //     if(ch=='p'){
// //         salam();
// //     }
// //     else if(ch=='i'){
// //         namaste();
// //     }
// //     else{
// //         bonjour();
// //     }

// //     return 0;
// // }
// // void salam(){
// //     cout<<"salam"<<endl;
// // }
// // void bonjour(){
// //     cout<<"bonjour"<<endl;
// // }
// // void namaste(){
// //     cout<<"namaste"<<endl;
// // }