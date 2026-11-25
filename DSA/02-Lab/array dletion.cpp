
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, position;

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

    cout << "\nEnter position to delete: ";
    cin >> position;

    if (position < 1 || position > n)
    {
        cout << "Invalid position.";
        return 0;
    }

    // Shift elements to the left
    for (int i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    // Display updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

