#include<iostream>
#include<fstream>
// #include "create_student.cpp"
#include "student.cpp"
using namespace std;

void showBanner3() {
    cout << "---------------------------------------------------" << endl;
    cout << "                  STUDENT LOGIN                    " << endl;
    cout << "---------------------------------------------------" << endl;
}

void userLogin()
{
    system("cls");
    showBanner3();

    fflush(stdin);
    string username,password,db_password;
    cout << "USERNAME : ";
    cin >> username;
    cout << "PASSWORD : ";
    cin >> password;

    string _filename = "database/" + username + ".db";
    // open the file
    ifstream file(_filename);

    if(file.is_open()) {
        string line;

        while(getline(file,line)) {
            db_password += line;
        }

        file.close();
    } else {
        cout << "FILE DOESN'T EXISTS." << endl;
    }

    char ch;

    if(db_password == password){
        system("cls");
        cout << "WELCOME USER , " + username << endl;
        student();
    }
    else {
        cout << "USER CREDENTIALS NOT EXITS ...." <<endl;
        cout << db_password;
    }
}