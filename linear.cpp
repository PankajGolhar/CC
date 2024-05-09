#include <iostream>
using namespace std;
void linear(int arr[], int len, int key)
{
  for (int i = 0; i < len; i++)
  {
    if (arr[i] == key)
    {
      cout << "found at index= " << i;
      return;
    }
  }
  cout << "not found";
}

int main()
{
  int arr[] = {10, 20, 30, 40};
  int key;
  cin >> key;
  int len = sizeof(arr) / sizeof(arr[0]);
  linear(arr, len, key);

  return 0;
}