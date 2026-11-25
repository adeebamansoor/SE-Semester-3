
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, value, position;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter element to insert: ";
    cin >> value;

    cout << "Enter position: ";
    cin >> position;

    if (position < 1 || position > n + 1 || n >= 100)
    {
        cout << "Invalid position or array size.";
        return 0;
    }

    // Shift elements to the right
    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = value;
    n++;

    // Display updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

