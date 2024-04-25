#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int  total =0;

void enter(){

}


void show(){

}
void search(){

}
void update(){

}
void deleterecord(){

}

int main(){
    int value;
        while(true){
        cout<<"enter press 1 enter data"<<endl;
        cout<<"enter press 2  show data"<<endl;
        cout<<"enter press 3 search data"<<endl;
        cout<<"enter press 4 update data"<<endl;
        cout<<"enter press 5 deleterecord data"<<endl;
         cout<<"enter press 6 exit data"<<endl;
         cin>>value;}
         switch (value)
         {
         case 1 :
         enter();
         break;

         case 2:
         show();
            break;

            case 3:
            search();
            break;

            case 4:
            update();
            break;

            case 5:
            deleterecord();
            break;

            case 6:
            exit(0);
            break;

         default:
         cout<<"invalid input"<<endl;
            break;
         }

}