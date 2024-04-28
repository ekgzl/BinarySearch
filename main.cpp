#include <iostream>

using namespace std;

int binarySearch(int array[],int size,int searchFor)
{
    int first,mid;
    first = 0;
    int last = size-1;


    while(first <= last)
    {
        mid = (first + last)/2;

        if(searchFor == array[mid])
            return mid;
        else if(searchFor > array[mid])
            first = mid +1;
        else
            last = mid-1;
    }

    return -1;
}

int recursiveBinarySearch(int a[],int searchFor,int first,int last)
{
    if(first > last)
        return -1;


    int mid = (first + last) / 2;

    if(a[mid] == searchFor)
        return mid;

    if(searchFor < a[mid]  )
        return recursiveBinarySearch(a,searchFor,first,mid-1);
    else
        return recursiveBinarySearch(a,searchFor,mid+1,last);
}

int main() {

    int a[] = {7,15,27,45,87,93};

    int result = recursiveBinarySearch(a,93,0,5);

    if(result >= 0)
        cout << "Find, index: " << result;
    else
        cout << "Couldn't find.";



}
