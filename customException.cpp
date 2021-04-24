/*
Create Custom Exception Class:
We can throw object of any class as an exception,
Here we are deriving our custom exception class
from exception class (from which all
other exception classes are derived)
--------------------------------------------------
Caught an exception: MyException
Program still running ...
--------------------------------------------------
*/

#include <iostream>
#include <exception>

using namespace std;

// Custom Exception class extended from exception class
class MyException:public exception{
public:
    // defining virtual method - what()
    virtual const char* what(){
        return "MyException";
    }
};

class myClass{
public:
    void goWrong(){
        // Throw an object of exception class
        throw MyException();
    }
};

int main()
{
    try{
        myClass obj;
        obj.goWrong();
    }
    catch(MyException e){
        cout<<"Caught an exception: "<<e.what()<<endl;
    }

    cout<<"Program still running ...";
    return 0;
}
