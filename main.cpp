#include <iostream>
#include <vector>
using namespace std;

void print_menu(string name);
void print_list();
void add_item();
void delete_item();

// Remembering that a vector is a class variable that allows us to dinamicaly store a collection of variables of the same type
// vector<datatype> name;
vector<string> list;
string name;

int main(int arg_count, char *args[]) {
    if (arg_count > 1) {
        name = string(args[1]);
        //args[1] takes the second command entered on the terminal
        print_menu(name);
    }
    else {
        cout << "Username not supplied... exiting the program\n";
    }

    return 0;
}

void print_menu(string name) {
    int choice;

    cout << "****************************\n";
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to list.\n";
    cout << " 3 - Delete from list.\n";
    cout << " 4 - Quit\n";
    cout << " Enter your choice and press return: ";

    cin >> choice;

    if(choice == 4){
        exit(0);
    }
    else if(choice == 2){
        add_item();
    }
    else {
        cout << " Sorry, choice not implemented yet\n";
    }
} 

void add_item() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;

    //The push_back function, as the name suggests, will push back the item string into the vector list
    list.push_back(item);

    cout << "Successfully added an item to the list \n\n\n\n\n\n";

    //cin.clear() will clear any provided input that we've already taken from the console
    cin.clear();

    print_menu(name);
}

void delete_item() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "*** Delete Item ***\n";
    cout << "Select an item index number to delete\n ";
    if (list.size()) {
        for (int i=0; i < list.size(); i++){
            cout << i << ": " << list[i] << "\n";
        }
    }
    else {
        cout << "No items to delete.\n";
    }

    print_menu(name);
}