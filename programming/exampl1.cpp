// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
// string name;
// cout << "Enter the input string:";
// // getline (std::cin, name);
// cin >> name;
// // cout << "String entered: " << name << "!\n";
// int size = name.size();
// cout<<"Size of string : "<<size<<endl;
//   }
// #include<iostream>
// using namespace std;
// int max(int x,int y){
//     if (y<x)
//     {
//         return x;
//     }
//     else
//         return y;
// }
// int main(){
//     int a = 20;
//     int b = 39;
//     max(a, b);
//     cout << max(a, b);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int max(int x, int y); // prototype function
// int main()
// {
//     int a = 20, b = 30;
//     max(a, b);
//     cout << max(a, b);

//     return 0;
// }
// int max(int x, int y)
// { // funcion defination
//     if (x > y)
//     {
//         return x;
//     }
//     else
//         return y;
// }
// #include <iostream>
// using namespace std;

// void swap(int a, int b)  {           //here a and b are formal parameters
//    b = a + b;
//    a = b - a;
//    b = b - a;
// cout<<"\nAfter swapping: ";
// cout<<"a = "<<a;
// cout<<"\tb = "<<b;
// }
// int main()
// {
// int a,b;
// cout<<"Enter the two numbers to be swapped: "; cin>>a>>b;

// cout<<"a = "<<a;
// cout<<"\tb = "<<b;
// swap(a,b);           //here a and b are actual parameters
// }
// #include<iostream>
// using namespace std;
// void swap(int a, int b);
// int main(){

//     int a, b;
//     cout << "enter two number  the swapping ";
//     cin >> a >> b;
//     cout << "a" << a;
//     cout << "b" <<b;
//     swap(a, b);

//     return 0;
// }
// void swap(int a,int b){
//     a = a - b;
//     b = a + b;
//     b = b - a;
//     cout << "after the swapping:";
//     cout << "a" << a;
//     cout << "b" <<b;

//}
// #include<iostream>
// using namespace std;
// void swap(int a, int b);
// int main(){
//     int a, b;
//     cout << "enter two number swapping "<<endl;
//     cin >> a >> b;
//     cout << "a" << a << endl;
//     cout << "b"<<b <<endl;
//     swap(a, b);
//     return 0;
// }
// void swap(int a,int b ){
//     a =  a+ b;
//     b =   b-a;
//     cout << "a" << a <<endl;
//     cout << "b" << b <<endl;
// }
// #include<iostream>
// using namespace std;
// void swap(int a, int b);
// int main(){
//     int a;
//     int b;
//     cout << "enter two number";
//     cin >> a >> b;
//     swap(a, b);
//     cout<<"swap(a, b)";

//     return 0;
// }
// void swap(int a, int b){
//     a = b;
//     b = a;
//     cout << a;
//     cout << b;
//  #include <bits/stdc++.h>
// #include<iostream>
// using namespace std;
// // void swap(int a, int b);
// int main(){
//     int a =90;
//     int b = 56;
//     cout << "berfore the value a:" << a << endl;
//     // cin >> a;
//     cout << "before the value b:" << b << endl;
//     // cin >> b;
//     swap(a, b);
//     cout << "update value a:" << a << endl;
//     cout << "update value b:" << b << endl;

//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string a = "jamil";
//     string b = "mughal";
//     cout << "before the value:" << a << endl;
//      cout << "before the value:" << b<< endl;
//      swap(a, b);
//      cout << ":now the value" <<a << endl;
//      cout << "now the value" << b << endl;
//      return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a[] = {1};
//     int b[] = {2};
//     cout << "before the value :" << a[0] << endl;
//     cout << "before the value :" << b [0]<< endl;
//     swap(a, b);
//     cout << "now the value :" << a[0] << endl;
//     cout << "now  the value :" << b[0] << endl;
//     return 0;
// } 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     cout << arr[4];
//     return 0;
// }
// #include<iostream>
// // #include<conio>
// #include<string>
//     class iteam
//  {
//     protected:
//         char name[20][20];
//         float price[20];
//         int sum,code[20];

//     public:
//         iteam()
//         {
//          sum=0;
//          temp=0;
//         }
//         char catagory[20];
//         int temp;
//         void insert();
//         void add();
//         void display();
//         void search();
//         void remove();
//         void total_amount();
//         void catago_amount();
//         void error1();
//         void initial_task();
//         int function1();
//  };
//      void iteam::insert()
//    {
//     int i,n,k;
//     cout<<"enter catagory name=";
//     cin>>i;
//     cout<<"how many item do u want to insert =";
//     cin>>n;
//     for(i=temp;i<n;i++)
//     {
//       cout<<"enter name of the iteam=";
//       cin>>name[temp];
//       cout<<"enter code=";
//       cin>>code[temp];
//       cout<<"enter price=";
//       cin>>price[temp];
//       temp++;
//       sum=sum+price[i];
//     }
//    }
//      void iteam::add()
//    {
//     int i,n;
//     cout<<"enter catagory name=";
//     cin>>catagory;
//     cout<<"how many item do u want to add =";
//     cin>>n;
//     for(i=temp;i<n;i++)
//     {
//       cout<<"enter name of the iteam=";
//       cin>>name[temp];
//       cout<<"enter code=";
//       cin>>code[temp];
//       cout<<"enter price=";
//       cin>>price[temp];
//       temp++;
//       sum=sum+price[i];
//     }
//    }
//      void iteam::display()
//   {
//     int i;
//     cout<<"under the "<<catagory<<" catagory the items are:"<<'\n'<<'\n';
//     cout<<"item name"<<'\t';
//     cout<<"code"<<'\t';
//     cout<<"price"<<'\t'<<'\n';
//     for(i=0;i<temp;i++)
//     {

//       cout<<name[i]<<'\t'<<'\t';
//       cout<<code[i]<<'\t';
//       cout<<price[i]<<'\n'<<'\n';
//      }
//      cout<<'\n'<<'\n';
//    }
//     void iteam::search()
//   {
//       int i,m;
//       cout<<"enter code:";
//       cin>>m;
//       for(i=0;i<temp;i++)
//       {
//     if(code[i]==m)
//     {
//     cout<<"item name is ="  <<name[i]<<'\n';
//     cout<<"price is="<<price[i]<<'\n'<<'\n';
//     }
//     else
//     cout<<"u have entered wrong code"<<'\n'<<'\n';
//       }
//       cout<<'\n'<<'\n';
//   }
//      void iteam::remove()
//   {
//       int i,m;
//       cout<<"enter code:";
//       cin>>m;
//       for(i=0;i<temp;i++)
//       {
//     if(code[i]==m)
//     {
//       price[i]=0;
//     }
//     else
//     cout<<"u have entered wrong code"<<'\n'<<'\n';
//       }
//       cout<<'\n'<<'\n';
//   }
//     void iteam::total_amount()
//     {
//      cout<<"the total price of all the items of all catagories is="<<sum<<'\n'<<'\n';
//     }
//     void iteam :: catago_amount()
//     {
//     cout<<"under the "<<catagory<<" catagory the total price of the items are="<<sum<<'\n'<<'\n';
//     }
//     void iteam::error1()
//     {
//       cout<<"FIRST U NEED TO INSERT ITEAM";
//       cout<<'\n'<<'\n';
//     }
//     void iteam::initial_task()
//     {
//   cout<<"What do u want to do ?"<<'\n';
//   cout<<"1.if u want to insert press 1"<<'\n';
//   cout<<"2.if u want to add press 2"<<'\n';
//   cout<<"3.if u want to display press 3"<<'\n';
//   cout<<"4.if u want to search press 4"<<'\n';
//   cout<<"5.if u want to remove press 5"<<'\n';
//   cout<<"6.if u want to see the total price press 6"<<'\n';
//   cout<<"7.if u want to exit press 0"<<'\n';
//     }
//     int iteam::function1()
//     {
//     int a1;
//     cout<<"choose a option to enter from the following sites"<<'\n';
//     cout<<"1.press 1 for cloths."<<'\n'<<"2.press 2 for daily using thing."<<'\n'
//     <<"3.press 3 for raw materials."<<'\n'<<"4.press 0 for exit."<<'\n';
//     cin>>a1;
//     return a1;
//     }
//     class cloth:public iteam
//     {
//     private:
//         char clt[15],cr[15];
//     public:
//        cloth operator+(cloth);
//        void insert_cl();
//        void display_cl();
//     };
//    cloth  cloth::operator+(cloth c)
//    {
//      cloth ob1;
//      ob1.sum=sum+c.sum;
//      return (ob1);
//    }
//    void cloth::insert_cl()
//    {
//    cout<<"what type of cloth is this ?(cotton,polyester,......)"<<'\n';
//    cin>>clt;
//    cout<<"what's the color of the cloth ?"<<'\n';
//    cin>>cr;
//    cout<<'\n'<<'\n'<<'\n';
//    }
//    void cloth::display_cl()
//    {
//    cout<<"type :"<<clt<<'\n';
//    cout<<"color :"<<cr<<'\n'<<'\n'<<'\n';
//    }
//     class dusing:public iteam
//     {
//       private:
//           char dus[15];
//       public:
//        dusing operator+(dusing);
//        void insert_du();
//        void display_du();
//     };
//    dusing dusing::operator+(dusing c)
//    {
//      dusing ob2;
//      ob2.sum=sum+c.sum;
//      return (ob2);
//    }
//    void dusing::insert_du()
//    {
//     cout<<"what type of daily using thing is this ?(food,cosmatics,.......)"<<'\n';
//     cin>>dus;
//     cout<<'\n'<<'\n'<<'\n';
//    }
//    void dusing::display_du()
//    {
//     cout<<"type :" <<dus<<'\n'<<'\n'<<'\n';
//    }
//     class material:public iteam
//     {
//     private:
//         int sp;
//         char mat[14],qu[15];
//     public:
//       material operator+(material c);
//        void insert_ma();
//        void display_ma();
//     };
//     material material::operator+(material c)
//     {
//      material ob3;
//      ob3.sum=sum+c.sum;
//      return (ob3);
//     }
//     void material::insert_ma()
//     {
//     cout<<"what type of raw material is this ?(vegetable,fish,fruits,.......)"<<'\n';
//     cin>>mat;
//     cout<<"what kind of quality do it carry ?"<<'\n';
//     cin>>qu;
//     cout<<"nomally after how many days it will be spoiled ?"<<'\n';
//     cin>>sp;
//     cout<<'\n'<<'\n'<<'\n';
//     }
//     void material::display_ma()
//     {
//     cout<<"type :" <<mat<<'\n';
//     cout<<"quality :" <<qu<<'\n';
//     cout<<"the time after it will spoil:" <<sp<<'\n'<<'\n'<<'\n';
//     }
//   int main()
//  {
//     cloth t[20],f1,ob;
//     dusing du[20],f2,ob1;
//     material ma[20],f3,ob2;
//     int i,x=0,n,a,j,k,l,s,m,b,c,q,g=0,a1,y=0,z=0;
//     char inp[20];
//     clrscr();
//     for(i=0;;i++)
//     {
//     a1=ob.function1();
//     switch(a1)
//     {
//     case 1:
//     for(i=0;;i++)
//      {
//        ob.initial_task();
//        cin>>a;
//        switch(a)
//        {
//      case 1:
//         if(x>0)
//          {
//            cout<<"YOU CAN NOT INSERT ITEAM MORE THAN ONE TIMES"<<'\n'<<'\n';
//            break;
//           }
//          else
//          {
//            cout<<"how many catagory do u want to insert=";
//            cin>>n;
//            for(i=0;i<n;i++)
//             {
//               t[x].insert();
//               t[x].insert_cl();
//                x++;
//              }
//           }
//          break;
//       case 2:
//         if(x<=0)
//         {ob.error1();
//         break;}
//          else
//          {
//            cout<<"how many catagory do u want to add=";
//            cin>>n;
//            for(j=0;j<n;j++)
//             {
//              t[x].add();
//              t[x].insert_cl();
//               x++;
//              }
//           break;
//           }
//        case 3:
//         if(x<=0)
//         {ob.error1();
//         break;}
//          else
//          {
//           for(s=0;s<x;s++)
//            {
//              t[s].display();
//              t[s].display_cl();
//            }
//            break;
//          }
//        case 4:
//         if(x<=0)
//         {ob.error1();
//         break;}
//         if(x>0)
//         {
//          cout<<"enter ur desired catagory=";
//          cin>>inp;
//          for(c=0;c<x;c++)
//          {
//            b=strcmp(inp,t[c].catagory);
//            if(b==0)
//            break;
//           }
//           if(b==0)
//             {t[c].search();
//             t[c].display_cl();}
//            break;
//           }
//         case 5:
//         if(x<=0)
//         {ob.error1();
//           break;}
//         else
//         {
//          cout<<"enter ur desired catagory=";
//          cin>>inp;
//          for(c=0;c<x;c++)
//          {
//            b=strcmp(t[c].catagory,inp);
//            if(b==0)
//            break;
//           }
//           if(b==0)
//             t[c].remove();
//            break;
//           }
//          case 6:
//         if(x<=0)
//          {ob.error1();
//           break;}
//         else
//         {
//           for(z=g;z<x;z++)
//           {
//             f1=f1+t[z];
//             g++;
//           }
//         for(i=0;i<x;i++)
//         t[i].catago_amount();
//         f1.total_amount();
//         break;
//         }
//      }
//      if(a==0)
//      break;
//        }
//        break;
//        case 2:
//     for(i=0;;i++)
//      {
//        ob1.initial_task();
//        cin>>a;
//        switch(a)
//        {
//      case 1:
//         if(y>0)
//          {
//            cout<<"YOU CAN NOT INSERT ITEAM MORE THAN ONE TIMES"<<'\n'<<'\n';
//            break;
//           }
//          else
//          {
//            cout<<"how many catagory do u want to insert=";
//            cin>>n;
//            for(i=0;i<n;i++)
//             {
//               du[y].insert();
//               du[y].insert_du();
//                y++;
//              }
//           }
//          break;
//       case 2:
//         if(y<=0)
//         {ob1.error1();
//         break;}
//          else
//          {
//            cout<<"how many catagory do u want to add=";
//            cin>>n;
//            for(j=0;j<n;j++)
//             {
//              du[y].add();
//              du[y].insert_du();
//               y++;
//              }
//           break;
//           }
//        case 3:
//         if(y<=0)
//         {ob1.error1();
//         break;}
//          else
//          {
//           for(s=0;s<y;s++)
//            {
//              du[s].display();
//              du[s].display_du();
//            }
//            break;
//          }
//        case 4:
//         if(y<=0)
//         {ob.error1();
//         break;}
//         if(y>0)
//         {
//          cout<<"enter ur desired catagory=";
//          cin>>inp;
//          for(c=0;c<y;c++)
//          {
//            b=strcmp(inp,du[c].catagory);
//            if(b==0)
//            break;
//           }
//           if(b==0)
//            { du[c].search();
//             du[c].display_du();}
//            break;
//           }
//         case 5:
//         if(y<=0)
//         {ob1.error1();
//           break;}
//         else
//         {
//          cout<<"enter ur desired catagory=";
//          cin>>inp;
//          for(c=0;c<y;c++)
//          {
//            b=strcmp(du[c].catagory,inp);
//            if(b==0)
//            break;
//           }
//           if(b==0)
//             du[c].remove();
//            break;
//           }
//          case 6:
//         if(y<=0)
//          {ob.error1();
//           break;}
//         else
//         {
//           for(z=g;z<x;z++)
//           {
//             f2=f2+du[z];
//             g++;
//           }
//         for(i=0;i<y;i++)
//         du[i].catago_amount();
//         f2.total_amount();
//         break;
//         }
//      }
//      if(a==0)
//      break;
//        }
//        break;
//        case 3:
//     for(i=0;;i++)
//      {
//        ob2.initial_task();
//        cin>>a;
//        switch(a)
//        {
//      case 1:
//         if(z>0)
//          {
//            cout<<"YOU CAN NOT INSERT ITEAM MORE THAN ONE TIMES"<<'\n'<<'\n';
//            break;
//           }
//          else
//          {
//            cout<<"how many catagory do u want to insert=";
//            cin>>n;
//            for(i=0;i<n;i++)
//             {
//               ma[z].insert();
//               ma[z].insert_ma();
//                z++;
//              }
//           }
//          break;
//       case 2:
//         if(z<=0)
//         {ob2.error1();
//         break;}
//          else
//          {
//            cout<<"how many catagory do u want to add=";
//            cin>>n;
//            for(j=0;j<n;j++)
//             {
//              ma[z].add();
//              ma[z].insert_ma();
//               z++;
//              }
//           break;
//           }
//        case 3:
//         if(z<=0)
//         {ob2.error1();
//         break;}
//          else
//          {
//           for(s=0;s<z;s++)
//            {
//              ma[s].display();
//              ma[s].display_ma();
//            }
//            break;
//          }
//        case 4:
//         if(z<=0)
//         {ob2.error1();
//         break;}
//         if(z>0)
//         {
//          cout<<"enter ur desired catagory=";
//          cin>>inp;
//          for(c=0;c<z;c++)
//          {
//            b=strcmp(inp,ma[c].catagory);
//            if(b==0)
//            break;
//           }
//           if(b==0)
//             {ma[c].search();
//             ma[s].display_ma();}
//            break;
//           }
//         case 5:
//         if(z<=0)
//         {ob2.error1();
//           break;}
//         else
//         {
//          cout<<"enter ur desired catagory=";
//          cin>>inp;
//          for(c=0;c<z;c++)
//          {
//            b=strcmp(ma[c].catagory,inp);
//            if(b==0)
//            break;
//           }
//           if(b==0)
//             ma[c].remove();
//            break;
//           }
//          case 6:
//         if(z<=0)
//          {ob2.error1();
//           break;}
//         else
//         {
//           for(q=g;q<z;q++)
//           {
//             f3=f3+ma[q];
//             g++;
//           }
//         for(i=0;i<z;i++)
//         ma[i].catago_amount();
//         f3.total_amount();
//         break;
//         }
//      }
//      if(a==0)
//      break;
//        }
//        break;
//       }
//       if(a1==0)
//       break;
//       }
//        return 0;
//      }

#include <iostream>
#include <vector>

class FloodManager {
private:
    int numRows;
    int numCols;
    std::vector<std::vector<int>> elevationMap;
    std::vector<std::vector<bool>> visited;

public:
    FloodManager(int rows, int cols) : numRows(rows), numCols(cols) {
        elevationMap.resize(numRows, std::vector<int>(numCols, 0));
        visited.resize(numRows, std::vector<bool>(numCols, false));
    }

    void setElevation(int row, int col, int elevation) {
        elevationMap[row][col] = elevation;
    }

    void floodFill(int row, int col, int prevElevation, int newElevation) {
        // Base cases
        if (row < 0 || row >= numRows || col < 0 || col >= numCols) {
            return;
        }
        if (visited[row][col] || elevationMap[row][col] != prevElevation) {
            return;
        }

        // Mark the cell as visited and update the elevation
        visited[row][col] = true;
        elevationMap[row][col] = newElevation;

        // Perform flood fill on adjacent cells
        floodFill(row - 1, col, prevElevation, newElevation); // Up
        floodFill(row + 1, col, prevElevation, newElevation); // Down
        floodFill(row, col - 1, prevElevation, newElevation); // Left
        floodFill(row, col + 1, prevElevation, newElevation); // Right
    }

    void printElevationMap() {
        for (int row = 0; row < numRows; row++) {
            for (int col = 0; col < numCols; col++) {
                std::cout << elevationMap[row][col] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    FloodManager floodManager(rows, cols);

    std::cout << "Enter the elevation map:\n";
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            int elevation;
            std::cin >> elevation;
            floodManager.setElevation(row, col, elevation);
        }
    }

    int startRow, startCol;
    std::cout << "Enter the starting cell for flood fill (row col): ";
    std::cin >> startRow >> startCol;

    int newElevation;
    std::cout << "Enter the new elevation: ";
    std::cin >> newElevation;

    int prevElevation = floodManager.elevationMap[startRow][startCol];
    floodManager.floodFill(startRow, startCol, prevElevation, newElevation);

    std::cout << "Updated elevation map:\n";
    floodManager.printElevationMap();

    return 0;}