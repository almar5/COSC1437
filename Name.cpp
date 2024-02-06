#include <iostream>

using namespace std;

int main()
{
    //declare variables
    string nombre;
    string apellido;

//get names from user
    cout << "What is your first name?\n";
    cin >> nombre;
    cout << "What is your last name?\n";
    cin >> apellido;
    
    //display initials
    cout << nombre.substr(0,1) << apellido.substr(0,1)<< " are your initials\n";

    //new names
    string firstName = nombre.substr(0, nombre.length() / 2) + apellido.substr(apellido.length() / 2);
    string lastName = apellido.substr(0, apellido.length() / 2) + nombre.substr(nombre.length() / 2);

    //display new names
    cout << "Your new first name is " << firstName << endl;
    cout << "Your new last name is " << lastName << endl;
    return 0;
}