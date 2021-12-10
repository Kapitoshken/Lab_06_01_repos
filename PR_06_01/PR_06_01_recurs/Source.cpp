#include <iostream>

void initArray(int*& array, int size, int index);
void printArray(int* array, int size, int index);
void solve(int*& array, int size, int index, int& counter, int& sum);
void printResult(int* array, int counter, int sum);

int main()
{
    int* array = new int[23];
    initArray(array, 23, 0);
    int counter = 0, sum = 0;
    printArray(array, 23, 0);
    solve(array, 23, 0, counter, sum);
    printResult(array, counter, sum);
}

void initArray(int*& array, int size, int index)
{
    if (index < size)
    {
        array[index] = rand() % 13 + 4;
        if (index + 1 >= size)
        {
            return;
        }
        else {
            initArray(array, size, index + 1);
        }
    }
}

void printArray(int* array, int size, int index)
{
    if (index < size)
    {
        std::cout << array[index] << " ";
        if (index + 1 >= size)
        {
            return;
        }
        else {
            printArray(array, size, index + 1);
        }
    }
    else
    {
        return;
    }
}

void solve(int*& array, int size, int index, int& counter, int& sum)
{

    if (index < size)
    {
        if ((array[index] % 2 == 1) && (index % 3 == 0))
        {

        }
        else
        {
            counter++;
            sum += array[index];
            array[index] = 0;
        }
        if (index + 1 >= size)
        {
            return;
        }
        else
        {
            solve(array, size, index + 1, counter, sum);
        }
    }
}

void printResult(int* array, int counter, int sum)
{
    std::cout << "\n\nCounter: " << counter << ", sum: " << sum << "\nArray: ";
    printArray(array, 23, 0);
}
