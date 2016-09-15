// textin2.cpp -- using cin.get(char)
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit:\n";
    /*
    Fortunately, there is help in the form of a variation of get(). The call cin.get() (with
    no arguments) reads the single next character, even if it is a newline, so you can use it to
    dispose of the newline character and prepare for the next line of input

    the member function cin.get(ch) reads the next character, even if it is a space, from the input and
    assigns it to the variable ch
    */
    cin.get(ch);        // use the cin.get(ch) function
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);    // use it again
    }
    cout << endl << count << " characters read\n";
// get rid of rest of line
    // while (cin.get() != '\n')
    //    ;
    //cin.get();
    return 0; 
}
