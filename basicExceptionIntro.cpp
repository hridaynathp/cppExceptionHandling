/*

Basic exception handling mechanism
To avoid program stop abruptly we use
exception handling so that we could have
control over the program.
------------------------------------------------------
Output:
In Might Go Wrong
something else goes wrong
program still running...
------------------------------------------------------

*/
#include <iostream>

using namespace std;

// Exceptions is thrown from this function
// and catched in main function
void mightBeWorng(){
    cout<<"In Might Go Wrong"<<endl;

    bool error1 = false;
    bool error2 = true;
    if(error1)
        throw "something goes wrong";
    if(error2)
        throw string("something else goes wrong");
}

// Try block with multiple catch
int main()
{
    // Multiple catch block to catch different type of exceptions
    try{
        mightBeWorng();
    }
    catch(int e){
        cout<<"catching exception: "<<e<<endl;
    }
    catch(const char * e){
        cout<<"catching exception: "<<e<<endl;
    }
    catch(string e){
        cout<<"catching exception: "<<e<<endl;
    }

    cout<<"program still running..."<<endl;

    return 0;
}
