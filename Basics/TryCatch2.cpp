#include <iostream>
using namespace std;
/***
 * Write a C++ program that takes a number from the user and throws different exceptions 
based on the input: an int if the number is negative, a char if the number is zero, and a 
general exception for other invalid inputs. Use multiple catch blocks to handle each case 
and display suitable messages. 
****/
int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;

    try
    {
        if (!cin)
        {
            throw "Invalid Input";
        }
        if (num < 0)
        {
            throw num;
        }
        if (num == 0)
        {
            throw 'Z';
        }
        cout << "You entered a positive number" << num << endl;
    }
    catch (int x)
    {
        cout << "Exception caught: Negative number entered (" << x << ")." << endl;
    }
    catch (char ch)
    {
        cout << "Exception caught: Zero value entered." << endl;
    }
    catch (const char *msg)
    {
        cout << "Exception caught: " << msg << endl;
    }
    return 0;
}
