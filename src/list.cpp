#include "include/list.h"

void List::print_menu() {
    int choice;

    cout << "****************************\n";
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to list.\n";
    cout << " 3 - Delete from list.\n";
    cout << " 4 - Quit\n";
    cout << " Enter your choice and press return: ";

    cin >> choice;

    switch (choice) {
        case 1:
            print_list();
            break;
        case 2:
            add_item();
            break;
        case 3:
            delete_item();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << " Sorry, choice not implemented yet\n";
            break;
    }
} 

void List::add_item() {
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

    print_menu();
}

void List::delete_item() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "*** Delete Item ***\n";
    cout << "Select an item index number to delete\n ";
    if (list.size()) {
        for (int i=0; i < (int)list.size(); i++){
            cout << i << ": " << list[i] << "\n";
        }
    }
    else {
        cout << "No items to delete.\n";
    }

    print_menu();
}

void List::print_list() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "** Printing List **\n";
    for (int list_index=0; list_index < (int)list.size(); list_index++){
        cout << " * " << list[list_index] << "\n";
    }

    cout << "M - Menu \n";
    char choice;
    cin >> choice;

    if (choice == 'M' || choice == 'm') {
        print_menu();
    }
    else {
        cout << "Invalid choice... Quitting\n";
        exit(0);
    }
}