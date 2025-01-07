#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int SIZE;
    cout << "Enter the size of an array: ";
    cin >> SIZE;

    int nums[SIZE];
    int frequency[10] = {0};
    srand(time(0));

    for (int i = 0; i < SIZE; i++)
    {
        nums[i] = rand() % 10 + 1;
    }

    cout << "Numbers in the array are: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        frequency[nums[i] - 1]++;
    }
    cout << "Frequency of each number:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << (i + 1) << " : " << frequency[i] << endl;
    }

    int maxFrequency = frequency[0];
    int mostFrequentNumber = 1;

    for (int i = 1; i < 10; i++)
    {
        if (frequency[i] > maxFrequency)
        {
            maxFrequency = frequency[i];
            mostFrequentNumber = i + 1;
        }
    }

    cout << "Number with highest frequency: " << mostFrequentNumber
         << " occurred " << maxFrequency << " times" << endl;

    return 0;
}
