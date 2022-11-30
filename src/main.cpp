#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[]) {

    //creating a new object of the List class (present in list.h fiel)
    List ToDoList;
        
    Database data;
    
    if (arg_count > 1) {
        ToDoList.name = string(args[1]);
        //args[1] takes the second command entered on the terminal
        ToDoList.print_menu();
        data.write(ToDoList.list);
        data.read();
    }
    else {
        cout << "Username not supplied... exiting the program\n";
    }

    return 0;
}

