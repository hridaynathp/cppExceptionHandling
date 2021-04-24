/*
Standard Exception handling,
Here we are trying to allocate memory
If the program can not allocate memory,
then it will throw an exception of class
bad_alloc which is child class of Exeption class
--------------------------------------------------
Output:
Exception Caught: std::bad_alloc
Program still running...
--------------------------------------------------
*/

#include <iostream>

using namespace std;

class canGoWrong{

public:
    canGoWrong(){
        // Exception of class bad_alloc is thrown from here
        // compiler cant allocate big chunk of memroy like below
        char *pMemory = new char[999999999999999];
        delete[] pMemory;
    }
};

int main()
{
    try{
    canGoWrong obj;
    }
    catch(bad_alloc e){
        cout<<"Exception Caught: "<<e.what()<<endl;
    }

    cout<<"Program still running...";

    return 0;
}
