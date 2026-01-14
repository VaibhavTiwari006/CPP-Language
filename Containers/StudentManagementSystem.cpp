#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int choice;

    do
    {
        cout << "\n1. Insert marks";
        cout << "\n2. Delete marks";
        cout << "\n3. Display marks";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int n, marks;
            cout << "Enter number of students: ";
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                cout << "Enter marks of student " << i + 1 << ": ";
                cin >> marks;
                v.push_back(marks);
            }
            break;
        }
        case 2:
        {
            int pos;
            if (v.empty())
            {
                cout << "No records to delete.\n";
                break;
            }
            cout << "Enter position to delete (1-based index): ";
            cin >> pos;

            if (pos < 1 || pos > v.size())
            {
                cout << "Invalid position.\n";
            }
            else
            {
                v.erase(v.begin() + (pos - 1));
                cout << "Element deleted successfully.\n";
            }
            break;
        }

        case 3:
        {
            if (v.empty())
            {
                cout << "No marks to display.\n";
            }
            else
            {
                cout << "Marks are: ";
                for (int x : v)
                {
                    cout << x << " ";
                }
                cout << endl;
            }
            break;
        }

        case 4:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}