#include <bits/stdc++.h>

// import files
#include "User_Student/dashboard.cpp"

using namespace std;


void showMessage() {
    cout << "---------------------------------------------------" << endl;
    cout << "           LIBARY MANAGEMENT SYSTEM                " << endl;
    cout << "---------------------------------------------------" << endl;
}

// driver code

int main()
{
    int _choice;

    while(1) {
        system("cls");
        showMessage();
        cout << "PRESS 1 FOR STUDENT LOGIN" << endl;
        cout << "PRESS 2 FOR LIBARIAN LOGIN" << endl;
        cout << "PRESS 3 FOR ADMIN LOGIN" << endl;
        cout << "PRESS 4 FOR EXIT" << endl;

        cout << "---------------------------------------------------" << endl;
        cout << "\nSELECT A CHOICE : ";
        cin >> _choice;

        switch(_choice)
        {

            case 1:
                studentDashboard();
                break;
            case 4:
                cout << "APPLICATION HAS BEEN EXITED , SUCCESSFULLY" << endl;
                exit(0);
                break;
        }
    }
}