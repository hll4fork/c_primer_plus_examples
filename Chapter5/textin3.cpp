// textin3.cpp -- reading chars to end of file
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);        // attempt to read a char

    /*
    When cin detects the EOF, it sets two bits (the eofbit and the failbit) to 1.
    the fail() member function returns true if either the eofbit or the failbit has been set to
    1 and false otherwise
    */
    while (cin.fail() == false)  // test for EOF
    {
        cout << ch;     // echo character
        ++count;
        cin.get(ch);    // attempt to read another char
    }
    cout << endl << count << " characters read\n";
    return 0; 
}
