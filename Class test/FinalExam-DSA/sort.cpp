#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int start, int mid, int end)
{
    vector<int> temp;

    int i = start;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(a[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(a[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(a[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++)
    {
        a[start + k] = temp[k];
    }
}

void mergeSort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

int binarySearch(const vector<int> &a, int start, int end, int target)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target < a[mid])
            return binarySearch(a, start, mid - 1, target);
        else if (target > a[mid])
            return binarySearch(a, mid + 1, end, target);
        else
            return mid;
    }
    return -1;
}

int main()
{
    int n, element;

    cout << "Enter number of elements :";
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "] :";
        cin >> a[i];
    }

    cout << "Original Array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    mergeSort(a, 0, n - 1);

    cout << endl
         << "Sorted Array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl
         << "Enter value to search :" << endl;
    cin >> element;

    int result = binarySearch(a, 0, n - 1, element);

    if (result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index " << result << endl;

    return 0;
}