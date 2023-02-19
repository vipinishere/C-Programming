#include <iostream>
using namespace std;
#define num 50

int arr[num];
class student
{
  int static k, stnum;
  int tot;

public:
  void setData()
  {
    cout << "enter the total number out of 500 of student " << stnum << " : ";
    cin >> tot;
    arr[k] = tot / 5;
    stnum++;
    k++;
  }
};
int student ::stnum = 1;
int student ::k = 0;

void heapify(int arr[], int n, int i)
{
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])
  {
    largest = left;
  }

  if (right < n && arr[right] > arr[largest])
  {
    largest = right;
  }

  if (largest != i)
  {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

void heapSort(int arr[], int n)
{

  for (int i = n / 2 - 1; i >= 0; i--)
    {heapify(arr, n, i);}

  for (int i = n - 1; i >= 0; i--)
  {
    swap(arr[0], arr[i]);
    heapify(arr, i, 0);
  }
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; ++i)
    cout << arr[i] << " ";
  cout << "\n";
}

int main()
{
  student s[num];
  for (int i = 0; i < num; i++)
  {
    s[i].setData();
  }

  cout << "percentage in squence : "<<endl;
  for (int j = 0; j < num; j++)
  {
    cout << arr[j] << " ";
  }

  cout << endl;
  cout << endl;

  int n = sizeof(arr) / sizeof(arr[0]);
  heapSort(arr, n);
  cout << "Sorted array is :" << endl;
  printArray(arr, n);
}