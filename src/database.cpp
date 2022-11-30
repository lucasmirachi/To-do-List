#include "include/database.h"

void Database::write(vector<vector<string>> mainList){

    ofstream db;
    //ofstream goes for output fstream
    db.open("db/lists.tdl"); //tdl stands for To-Do List

    if(db.is_open()) {
        for (int user_index = 0; user_index < (int)mainList.size(); user_index++ ){
            for(int list_index = 0; list_index < (int)mainList[user_index].size(); list_index++){
                if (list_index == 0){
                    db << "#" << mainList[user_index][list_index] << "\n";
                }
                else{
                db << mainList[user_index][list_index] << "\n";
                }
            }
            db << "%" << "\n";
        }
    }
    else {
        cout << "Cannot open file for writing.";
    }

    db.close();
}

vector<vector<string>> Database::read(){
    string line;
    ifstream db;
    //ifstream goes for input fstream

    vector<string> userList;

    db.open("db/lists.tdl");

    if(db.is_open()) {
        while (getline(db,line,'\n'))
        // What this function will do is: while db is open, go through db and look through the stream of characters and pass them ino line every time we see a new line "/n" 
        // Also, we will follow the syntax that an item that starts with a # means the username and a % means the end of that user's list
        if (line.front() == '#'){
            cout << "Found a Hastag: " << line << "\n";
            line.erase(line.begin());
            userList.push_back(line);
        }
        else if (line.front() == '%'){
            cout << "Found a Percentage Sign: " << line << "\n";
            mainList.push_back(userList);
            userList.clear();
        }
        else{
            cout << "Found an Item: " << line << "\n";
            userList.push_back(line);
        }
    }
    else{
        cout << "Cannot open file for reading.";
    }

    db.close();

    return mainList;
}