#include <iostream>

using namespace std;

class Users
{
    string username;
    string password;
    void Registration(string u, string p);
    void Login();
};
class Administrators : Users
{

};
void Print_Options();
void Choose_Who();
void Choose_Option();
int main()
{
    Print_Options();
    Choose_Who();
}
void Print_Options()
{
    cout << "Choose your type of account or exit: \n";
    cout << "1. Admin \n";
    cout << "2. Student \n";
    cout << "3. Exit \n";
}
void Choose_Who()
{
    int choice;
    do{
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
        {
        case 1:
            cout << "Choose if you\n";
            break;
        case 2:
            cout << "Logged as user\n";
            break;
        case 3:
            cout << "Exiting now\n";
            break;
        default:
            cout << "Please use a number to choose";
            break;
        }
    }
    while (choice != 3);
};
void Choose_Option()
{
    
}
void Users::Registration(string u, string p)
{
    string rp;
    cout << "Username: ";
    cin >> u;
    cout << "Password: ";
    cin >> p;
    cout << "Repeat password:";
    do{
    cin >> rp;
    if(rp!=p)
    {
        cout << "Inserted wrong password";
    }
    else
    {
        cout << "Created account";
    }
    }while(rp!=p);
    username = u;
    password = p;
}
void Users::Login()
{

}
