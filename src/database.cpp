#include "include/database.h"

void Database::write(){

    ofstream db;
    //ofstream goes for output fstream
    db.open("db/lists.tdl"); //tdl stands for To-Do List

    if(db.is_open()) {
        db << "1\n2\n3\n4\n5\n";
    }
    else {
        cout << "Cannot open file for writing.";
    }

    db.close();
}

void Database::read(){

    ifstream db;
    //ifstream goes for input fstream

    db.open("db/lists.tdl");

    if(db.is_open()) {

    }
    else{
        cout << "Cannot open file for reading.";
    }
}