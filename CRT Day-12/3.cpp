#include <iostream>
using namespace std;

void Insertion_Sort(int nums[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = key;
    }
}

int main()
{
    int arr[7] = {7, 68, 32, 54, 41, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    Insertion_Sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}