#include <iostream>

using namespace std;
class Users{
    string student;
};
void Print_Options()
{
    cout << "Login As: \n";
    cout << "1. Admin \n";
    cout << "2. Student \n";
    cout << "3. Exit \n";

}
void Choose_Who_to_login()
{
    int choice;
    switch (choice)
    {
    case 1:
        cout << "Logged as admin";
        break;
    case 2:
        cout << "Logged as user";
        break;
    default:
    cout << "Please use a number to choose";
        break;
    }
};

int main()
{
    
}