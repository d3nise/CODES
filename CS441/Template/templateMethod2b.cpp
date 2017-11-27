//using template will take out duplicate code. 
//variance steps
//Template and strategy are almost the same. 
//But template will have one base class and two subclasses, reduce duplication. 
//Two objects 
#include <iostream>
using namespace std;


//BASE CLASS DEFINES THE STRUCTURE OF THE ALGORITHM. 
class AbstractSort
{
  public:
    void sort(int arr[], int n)
    {
        for (int i = 0; i < n-1; i++)
        {
            int v = i;
            for (int j = i+1; j < n; j++)
              if (compare(arr[j], arr[v]))
                v = j;
            swap(&arr[v], &arr[i]);
        }
    }
  private:
    virtual bool compare(int, int) = 0;
    void swap(int *a, int *b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }
};

class SortUp: public AbstractSort
{
    bool compare(int a, int b)
    {
        return (a < b);
    }
};

class SortDown: public AbstractSort
{
    bool compare(int a, int b)
    {
        return (a > b);
    }
};

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
        cout << array[i] << ' ';
    cout << '\n';
}

int main()
{
  int array[10] = {3,8,2,9,1,7,4,10,6,5};
  printArray(array, 10);
  
  //2 Objects 1 interface
  AbstractSort *objs[] = { new SortUp(), new SortDown() };
  objs[0]->sort(array, 10);
  printArray(array, 10);

  SortDown Obj2;
  objs[1]->sort(array, 10);
  printArray(array, 10);
}
