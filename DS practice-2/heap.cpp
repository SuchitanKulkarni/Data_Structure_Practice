#include <iostream>
using namespace std;

class HeapSort {
public:
    void sort(int arr[], int n)
    {
        for (int i = n / 2 ; i >=1; i--)
            heapify(arr, n, i);

        for (int i = n ; i >= 1; i--) {
            int temp = arr[1];
            arr[1] = arr[i];
            arr[i] = temp;
            heapify(arr, i, 1);
        }
    }

    void heapify(int arr[], int n, int i)
    {
        int largest = i;
        int l = (2 * i);
        int r = (2 * i )+ 1;

        if (l <= n && arr[l] > arr[largest])
            largest = l;

        if (r <= n && arr[r] > arr[largest])
            largest = r;

        if (largest != i) {
            int swap = arr[i];
            arr[i] = arr[largest];
            arr[largest] = swap;
            heapify(arr, n, largest);
        }
    }

    void printArray(int arr[], int n)
    {
        for (int i = 0; i < n; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the total number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    HeapSort ob;
    ob.sort(arr, n);

    cout << "Sorted array is: ";
    ob.printArray(arr, n);

    return 0;
}

