/* 2 classes 
   Class SortingAlgorithm - Check input type. + return new sortUp. - return sortDown. 
   ^^ is the difference between the client only needs to know one object. 
   Client does not need to create muliple objects. 
   Further decouples the client from the algorithm. 
*/
#include <iostream>
using namespace std;

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

//Algorithm to sort
class SortingAlgorithm
{
public:
  SortingAlgorithm() {
    algorithm_ = NULL;
  }
  void setOrder(int type) {
    delete algorithm_;
    algorithm_ = (type > 0) ? (AbstractSort*)new SortUp() : (AbstractSort*)new SortDown();
  }
  void sort(int a[], int n) {
    algorithm_->sort(a, n);
  }
private:
  AbstractSort *algorithm_;
};

int main()
{
  int array[10] = {3,8,2,9,1,7,4,10,6,5};
  printArray(array, 10);

  SortingAlgorithm obj;
  obj.setOrder(1);
  obj.sort(array, 10);
  printArray(array, 10);

  obj.setOrder(-1);
  obj.sort(array, 10);
  printArray(array, 10);
}
