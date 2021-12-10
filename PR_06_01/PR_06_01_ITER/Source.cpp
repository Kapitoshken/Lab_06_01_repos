#include <iostream>

int* initArray();
void printArray(int* array);
void solve(int*& array, int& counter, int& sum);
void printResult(int* array, int counter, int sum);

int main()
{
    int* array = initArray();
    int counter = 0, sum = 0;
    printArray(array);
    solve(array, counter, sum);
    printResult(array, counter, sum);
}

int* initArray()
{
    int* array = new int[23];
    for (int i = 0; i < 23; i++) {
        array[i] = rand() % 13 + 4;
    }
    return array;
}

void printArray(int* array)
{
    for (int i = 0; i < 23; i++)
    {
        std::cout << array[i] << ' ';
    }
}

void solve(int*& array, int& counter, int& sum)
{
    counter = 0;
    sum = 0;
    for (int i = 0; i < 23; i++)
    {
        if ((array[i] % 2 == 1) && (i % 3 == 0)) {
            continue;
        }
        else {
            counter++;
            sum += array[i];
            array[i] = 0;
        }
    }
}

void printResult(int* array, int counter, int sum)
{
    std::cout << "\n\nCounter: " << counter << ", sum: " << sum << "\nArray: ";
    printArray(array);
}
