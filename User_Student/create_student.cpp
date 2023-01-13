// create student id
#include <bits/stdc++.h>
using namespace std;

void showBanner2() {
    cout << "---------------------------------------------------" << endl;
    cout << "                  CREATE STUDENT                   " << endl;
    cout << "---------------------------------------------------" << endl;
}

void createUser()
{
    showBanner2();
    fflush(stdin);
    string username,password;
    cout << "ENTER YOUR NAME : ";
    cin >> username;
    cout << "ENTER YOUR PASSWORD : ";
    cin >> password;

    // creating a file

    string _filename = "database/" + username + ".db";
    
    ofstream fileId(_filename);

    fileId << password;
    fileId.close();

}