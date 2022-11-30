#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database {
    private:
    protected:
    public:
    Database(){
        //constructor
    }
    ~Database(){
        //destructor
    }

    // Remembering that a vector is a class variable that allows us to dinamicaly store a collection of variables of the same type
    // vector<datatype> name;
    vector<vector<string>> mainList;
    string name;

    void write(vector<vector<string>> mainList);
    vector<vector<string>> read();
};