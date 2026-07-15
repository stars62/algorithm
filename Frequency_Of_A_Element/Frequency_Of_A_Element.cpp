#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int num, arr[50], number;
    int count = 0;

    cout << "Enter number of elements in your array: " << endl;
    cin >> num;

    cout << "Enter your array: ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number whose occurence is to be found: " << endl;
    cin >> number;

    for (int i = 0; i < num; i++)
    {
        if (arr[i] == number)
        {
            count = count + 1;
        }
    }

    cout << "Frequency = " << count << endl;

    return 0;
}