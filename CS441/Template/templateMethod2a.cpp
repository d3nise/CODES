#include <iostream>
using namespace std;

//FUNCTIONS 
class SortUp
{
  public:
    void sort(int arr[], int n)
    {
        for (int i = 0; i < n-1; i++)
        {
            int min = i;
            for (int j = i+1; j < n; j++)
              if (arr[j] < arr[min])
                min = j;
            swap(&arr[min], &arr[i]);
        }
    }
  private:
    void swap(int *a, int *b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }
};

class SortDown
{
  public:
    void sort(int arr[], int n)
    {
        for (int i = 0; i < n-1; i++)
        {
            int max = i;
            for (int j = i+1; j < n; j++)
              if (arr[j] > arr[max])
                max = j;
            swap(&arr[max], &arr[i]);
        }
    }
  private:
    void swap(int *a, int *b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }
};

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
        cout << array[i] << ' ';
    cout << '\n';
}

//CLIENT
int main()
{
  int array[10] = {3,8,2,9,1,7,4,10,6,5};
  printArray(array, 10);

  //Creates two objects to sort the array. 
  SortUp obj1;
  obj1.sort(array, 10);
  printArray(array, 10);

  SortDown Obj2;
  Obj2.sort(array, 10);
  printArray(array, 10);
}
