#include <iostream>
#include <vector>
using namespace std;

class List {
    private:
    protected:
    public:
    List(){
        //constructor
    }
    ~List(){
        //destructor
    }

    // Remembering that a vector is a class variable that allows us to dinamicaly store a collection of variables of the same type
    // vector<datatype> name;
    vector<string> list;
    string name;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
};