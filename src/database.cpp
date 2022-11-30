#include "include/database.h"

void Database::write(vector<string> list){

    ofstream db;
    //ofstream goes for output fstream
    db.open("db/lists.tdl"); //tdl stands for To-Do List

    if(db.is_open()) {
        for (int list_index=0; list_index < (int)list.size(); list_index++){
            db << list[list_index] << "\n";
        }
    }
    else {
        cout << "Cannot open file for writing.";
    }

    db.close();
}

void Database::read(){
    string line;
    ifstream db;
    //ifstream goes for input fstream

    db.open("db/lists.tdl");

    if(db.is_open()) {
        while (getline(db,line,'\n'))
        // What this function will do is: while db is open, go through db and look through the stream of characters and pass them ino line every time we see a new line "/n" 
            cout << line << "\n";
    }
    else{
        cout << "Cannot open file for reading.";
    }

    db.close();
}