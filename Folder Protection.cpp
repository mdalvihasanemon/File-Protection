
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    ofstream p("a.bat");
    char s[100], v[50];
    const char u[] = ".{21EC2020-3AEA-1069-A2DD-08002B30309D} ";
    char r[200] = "REN ";
    int choice;

    if (!p.is_open()) {
        cout << "Error in opening the file a.c" << endl;
        return 1;
    }

    cout << "This software can convert your File/Folder to Control Panel and can Restore again." << endl;
    cout << "Enter the path of the file: ";
    cin.getline(s, 100);

    for (int i = 0; i < 25; i++)
        p << "\nThis software is not responsible for any loss in data";

    cout << "Enter choice :" << endl;
    cout << "1.Protect Folder/File" << endl;
    cout << "2.Unprotect folder/File" << endl;
    cout << "3.Exit" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            strcat(r, s);
            cout << "Enter new name of your folder/file: ";
            cin.ignore();
            cin.getline(v, 50);
            strcat(r, " ");
            strcat(r, v);
            strcat(r, u);
            break;
        case 2:
            strcat(r, s);
            strcat(r, u);
            cout << "Enter new name of your folder/file: ";
            cin.ignore();
            cin.getline(v, 50);
            strcat(r, v);
            break;
        default:
            p.close();
            remove("a.bat");
            return 0;
    }
    p << r;
    for (int i = 0; i < 25; i++)
        p << "\nThis software is not responsible for any loss in data";
    p << "exit";

    p.close();

    system("a.bat");

    remove("a.bat");

    return 0;
}
