#include <iostream>
using namespace std;
int binarysearch(int arr[], int n,int key)
{
    int a = 0;
    int b = n;

    while(a<=b){
        int mid = (a + b) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]<key){
            a=mid+1;
        }
        else{
            b=mid-1;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    int key;
    cin >> key;

    cout <<binarysearch(arr,n,key);

        return 0;
}