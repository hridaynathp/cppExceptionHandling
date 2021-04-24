/*
Exception Handling: calling sequence

The sequence of catch block is important
Always put child exception class before parent exception class
Because if you place parent first the due to the inheritance
properties parent will catch the exception thrown by child class

-----------------------------------------------------------------
Output:
exception caught: std::bad_alloc()
-----------------------------------------------------------------
*/


#include <iostream>

using namespace std;

void goWrong(){
    bool error1 = true;
    bool error2 = false;

    if(error1)
        throw bad_alloc();
    if(error2)
        throw exception();
}

int main()
{
    try{
        goWrong();
    }
    // Wrong catch sequence
    // above goWrong() function throwing exception of
    // type bad_alloc, which can be catch by its parent
    // class "exception"
    catch(exception &e){
        cout<<"exception caught: "<<e.what()<<endl;
    }
    catch(bad_alloc &e){
        cout<<"bad_alloc caught: "<<e.what()<<endl;
    }
    return 0;
}
