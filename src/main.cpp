#include "include/list.h"

int main(int arg_count, char *args[]) {
    if (arg_count > 1) {
        //creating a new object of the List class (present in list.h fiel)
        List ToDoList;
        ToDoList.name = string(args[1]);
        //args[1] takes the second command entered on the terminal
        ToDoList.print_menu();
    }
    else {
        cout << "Username not supplied... exiting the program\n";
    }

    return 0;
}

