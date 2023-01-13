#include<bits/stdc++.h>
#include "search_books.cpp"
#include "reading_list.cpp"
using namespace std;

void showBanner4() {
    cout << "---------------------------------------------------" << endl;
    cout << "                  USER - STUDENT                   " << endl;
    cout << "---------------------------------------------------" << endl;
}

void student()
{
    int _choice;

    while(1) {
        // system("cls");
        showBanner4();
        cout << "PRESS 1 SEARCH A BOOK" << endl;
        cout << "PRESS 2 MY READING LIST" << endl;
        cout << "PRESS 3 FOR EXIT" << endl;

        cout << "---------------------------------------------------" << endl;
        cout << "\nSelect a Choice : ";
        cin >> _choice;

        switch(_choice)
        {
            case 1:
                searchBook();
                break;
            case 2:
                ReadBook(); 
                break;
            case 3:
                cout << "APPLICATION HAS BEEN EXITED , SUCCESSFULLY" << endl;
                exit(0);
                break;
        }
    }
}