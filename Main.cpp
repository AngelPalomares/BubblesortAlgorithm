
#include <iostream>
#include <string>
using namespace std;

void BubbleSort(int array[], int size);


int main()
{
    int size = 5;

    int Howdy[size];

    for(int i = 0; i < size; i++)
    {
        cin >> Howdy[i];
    }

    BubbleSort(Howdy, size);

    cout << "Sorting the numbers from least to greatest " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << Howdy[i] << endl;
    }

    return 0;
}

void BubbleSort(int array[], int size)
{
    for(int i = size - 1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}
