#include <iostream>
using namespace std;

double findaverage(int a[], int n)
{
    int sum = 0;
    for (int i= 0; i<n; i++)
    sum = sum + a[i];
    return (double)sum/n;
}

    int main()
    {

        int array[]= {77,888,6,90,25,114,13,16,29};
        int n = sizeof(array)/ sizeof(array[0]);
        cout<< findaverage(array, n)<< endl;
        return 0;

    }


