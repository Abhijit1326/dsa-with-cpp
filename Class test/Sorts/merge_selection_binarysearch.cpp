#include <iostream>
#include <vector>
using namespace std;

class Menu
{
public:
    void selection_sort(vector<int> &a)
    {
        int n = a.size();
        for (int i = 0; i < n - 1; i++)
        {
            int index = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[index])
                    index = j;
            }
            swap(a[i], a[index]);
        }
    }

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

    for (int i = 0; i < temp.size(); i++)
    {
        a[i + start] = temp[i];
    }
}

void merge_sort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;

        merge_sort(a, start, mid);
        merge_sort(a, mid + 1, end);

        merge(a, start, mid, end);
    }
}


    int binary_search(vector<int> &a, int n, int target)
    {
        int start = 0;
        int end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (target < a[mid])
            {
                end = mid - 1;
            }
            else if (target > a[mid])
            {
                start = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }

    void display(vector<int> &a)
    {
        for (int num : a)
            cout << num << " ";
        cout << endl;
    }
};

int main()
{
    Menu obj;
    int choice, n;

    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> a[i];
    }

    do
    {
        cout << "-------Menu-------" << endl;
        cout << "1. Selection Sort" << endl;
        cout << "2. Merge Sort" << endl;
        cout << "3. Binary Search" << endl;
        cout << "4. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.selection_sort(a);
            cout << "Selection Sort complete" << endl;
            break;

        case 2:
            obj.merge_sort(a, 0, n - 1);
            cout << "Merge Sort complete" << endl;
            break;

        case 3:
        {
            int target;
            cout << "Enter element to search: ";
            cin >> target;
            int index = obj.binary_search(a, n, target);
            if (index != -1)
                cout << "Element found at index: " << index << endl;
            else
                cout << "Element not found." << endl;
            break;
        }

        case 4:
            cout << "Array: ";
            obj.display(a);
            break;

        case 0:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
            break;
        }

    } while (choice != 0);

    return 0;
}
