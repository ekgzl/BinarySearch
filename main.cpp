#include<iostream>

using namespace std;

int binarySearch(int a[],int size,int searchFor)
{
    int low,high,mid;
    low = 0; high = size-1;

    while(low<=high)
    {
        mid = (low+high) /2;
        if(a[mid] == searchFor)
            return mid;
        else if(searchFor < a[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int recursiveBinarySearch(int a[],int low,int high,int searchFor)
{
    if(low > high)
        return -1;

    int mid = (high+low) /2;

    if(a[mid] == searchFor)
        return mid;
    else if(searchFor<a[mid])
        return recursiveBinarySearch(a,low,mid-1,searchFor);
    else
        return recursiveBinarySearch(a,mid+1,high,searchFor);
}


int main()
{

    int a[] = {5,9,17,19,26,78};
    cout << binarySearch(a,6,78) << endl;
    cout << binarySearch(a,6,5) << endl;



}
