// #include <iostream>

// using namespace std;

// int main() {
//     float totalMarks, obtainedMarks, percentage;

//     cout << "Enter total marks: ";
//     cin >> totalMarks;

//     cout << "Enter obtained marks: ";
//     cin >> obtainedMarks;

//     percentage = (obtainedMarks / totalMarks) * 100;

//     cout << "Percentage: " << percentage << "%" << endl;

//     int grade;

//     if (percentage >= 90)
//         grade = 1;
//     else if (percentage >= 80)
//         grade = 2;
//     else if (percentage >= 70)
//         grade = 3;
//     else if (percentage >= 60)
//         grade = 4;
//     else if (percentage >= 40)
//         grade = 5;
//     else
//         grade = 6;

//     switch (grade) {
//         case 1:
//             cout << "Grade: A" << endl;
//             break;
//         case 2:
//             cout << "Grade: B" << endl;
//             break;
//         case 3:
//             cout << "Grade: C" << endl;
//             break;
//         case 4:
//             cout << "Grade: D" << endl;
//             break;
//         case 5:
//             cout << "Grade: E" << endl;
//             break;
//         default:
//             cout << "Grade: F" << endl;
//             break;
//     }

//     return 0;}

#include<iostream>
using namespace std;
int main(){
    float totalMarks, obtainedMarks, percentage;
    cout << "  enter the totalMarks";
    cin >> totalMarks;
    cout << "enter the obtainedMarks";
    cin >> obtainedMarks;
    percentage = (obtainedMarks / totalMarks) * 100;
    cout << "percentage" << percentage << "%" << endl;
    int grade;
    if(percentage>=90){
        grade = 1;
    }
    else if ( percentage>=80)
    {
        grade = 2;
    }
     else if ( percentage>=70)
    {
        grade = 3;
    }
     else if ( percentage>=65)
    {
        grade = 4;
    }
     else if ( percentage>=60)
    {
        grade = 5;
    } 
     else if ( percentage>=50)
    {
        grade = 6;
    }
    else{
        grade = 7;}
        switch (grade)
        {
        case 1:
        cout << "grade A";
        break;
        
        case 2:
        cout << "grade B";
        break;
        case 3:
        cout << "grade C";
        break;
        case 4:
        cout << "grade D";
        break;
        case 5:
        cout << "grade  E";
        break;
        case 6:
        cout << "grade F";
        break;

        default:
        cout << "grade poor";
        break;
        }
}