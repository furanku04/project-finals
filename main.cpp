#include <iostream>
using namespace std;

string getcourse(char course) {
    string coursename;
    switch (course) {

        case 'a':
            coursename = "BSCS";
            break;
        case 'b':
            coursename = "BSIT";
            break;
        case 'c':
            coursename = "BS Psych";
            break;
        case 'd':
            coursename = "AB Masscomm";
            break;
        case 'e':
            coursename = "BS Crim";
            break;
        case 'f':
            coursename = "BEED";
            break;
        case 'g':
            coursename = "BSED";
            break;
        case 'h':
            coursename = "BAPOL";
            break;

        default:
            cout << "invalid";
            break;

    }
    return coursename;
}

int main (){

    int midtermscore,finalexamscore;
    double average,grade;
    string name,surname,age,block;
    char course;
    int total = midtermscore + finalexamscore;

    cout << "Enter your name: ";
    cin >> name >> surname;


    cout << "Choose your course & block bellow" << endl;
    cout << "CITCS:" << endl;
    cout << "a. BSCS" << endl;
    cout << "b. BSIT" << endl;
    cout << " " << endl;

    cout << "CAS" << endl;
    cout << "c. BS Psych" << endl;
    cout << "d. AB Masscomm" << endl;
    cout << " " << endl;

    cout << "CCJ" <<endl;
    cout << "e. BS Crim" << endl;
    cout << " " << endl;

    cout << "CTE" << endl;
    cout << "f. BEED" << endl;
    cout << "g. BSED" << endl;
    cout << " " << endl;

    cout << "IPPG" << endl;
    cout << "h. BAPOL";
    cout << " " << endl;

    ///INFO///

    cout << "Enter course: " << endl;
    cin >> course;
    cout << "Enter Year(1-4) & Block(A-Z): " << endl;
    cin >> block;

    ///COMPUTATION///

    cout << "Enter midterm score(1-50): " << endl;
    cin >> midtermscore;
    cout << "Enter final exam score(1-50): " << endl;
    cin >> finalexamscore;

    average = (midtermscore + finalexamscore) / 2;

    /// OUTPUT INFO ///
    cout << "" << endl;
    cout << "RESULT:" << endl;
    cout << "" << endl;
    cout << "Good Day " << name << " " << surname << " " << "from ";
    cout << getcourse(course) << " " << block << endl;
    cout << "This is the result of your grading computation." << endl;
    cout << ""<<endl;
    cout << "Average: " << average << endl;

        if (average == 50){
            grade = 100;
        }
        else if (average >= 50);

        else if (average <= 45){
            grade = 95;
        }
        else if (average <= 40){
            grade = 90;
        }
        else if (average <= 35){
            grade = 85;
        }
        else if (average <= 30){
            grade = 80;
        }
        else if (average <= 25){
            grade = 75;
            cout << "you failed";
        }

        cout << "Grade: " << grade << " ";

        if (grade == 100){
            cout << "sheeeeeeeesh!!";
        }
        else if (grade >= 100){
            cout << "you passed<33";
        }else if (grade <=75){
            cout << "you failed:<";
        }

        cout << "Group Members: Frank Pegar & Arwin Aguas BSIT 1T";

    return 0;
}


