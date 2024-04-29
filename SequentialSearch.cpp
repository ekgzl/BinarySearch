#include <iostream>

using namespace std;


int recursiveSequentialSearch(int a[],int searchFor,int index,int size)
{
    if(index > size)
    {
        return -1;
    }

    if(a[index] == searchFor)
        return index;
    else
        return recursiveSequentialSearch(a,searchFor,index+1,size);
}

int sequentialSearch(int a[],int searchFor,int size)
{
    int index = 0;

    while(index < size)
    {
        if(a[index] == searchFor)
            return index;
        index++;
    }

    return -1;
}

int main() {

    int a[] = {5,9,17,19,26,78};

    int result = sequentialSearch(a,25,6);

    if(result >= 0)
    {
        cout << "Find, index: " << result;
    }
    else
        cout << "Couldn't find";

}
