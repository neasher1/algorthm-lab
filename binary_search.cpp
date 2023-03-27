#include<iostream>
using namespace std;

int main()
{
    int n = 7, start, end, mid, x = 100, flag = 0;
    int a[n] = {2, 9, 13, 17, 25, 51, 83};

    start = 0;
    end = n - 1;

    while(start <= end)
    {
        mid = (start + end)/2;

        if(x == a[mid])
        {
            cout<<x<<" found at index: "<<mid<<endl;
            flag = 1;
            //return 0;
            break;
        }
        else if(x > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if(flag == 0)
        cout<<x<<" is not found"<<endl;

    return 0;
}
