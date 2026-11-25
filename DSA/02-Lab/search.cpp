
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, search;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter element to search: ";
    cin >> search;

    // Linear Search
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            cout << "Element found at position: " << i + 1;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found.";
    }

    return 0;
}

