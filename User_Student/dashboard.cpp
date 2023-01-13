// Instance for a Student

#include <bits/stdc++.h>
#include "create_student.cpp"
#include "auth.cpp"
using namespace std;


void showBanner1() {
    cout << "---------------------------------------------------" << endl;
    cout << "                  STUDENT LOGIN                    " << endl;
    cout << "---------------------------------------------------" << endl;
}

// driver code

void studentDashboard()
{
    int _choice;

    while(1) {
        system("cls");
        showBanner1();
        cout << "PRESS 1 FOR LOGIN USING USER CREDENTAILS" << endl;
        cout << "PRESS 2 FOR CREATE USER ID" << endl;
        cout << "PRESS 3 FOR EXIT" << endl;

        cout << "---------------------------------------------------" << endl;
        cout << "\nSelect a Choice : ";
        cin >> _choice;

        switch(_choice)
        {
            case 1:
                userLogin();
                
                break;
            case 2:
                createUser();
                break;
            case 3:
                cout << "APPLICATION HAS BEEN EXITED , SUCCESSFULLY" << endl;
                exit(0);
                break;
        }
    }
}