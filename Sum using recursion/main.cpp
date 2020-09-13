#include <iostream>

using namespace std;
int sum1 = 0;
int sum(int x)
{
    sum1 = sum1 + x;
    // here the numbers are added;
    if(x<0)
        // negative numbers are not in this scope;
        cout<< " negative or zero not allowed" <<endl;
    else if(x==0)
        // if x==0 then the summation is completed as the process was decremental;
    {
        cout<< "Sum is: "<<sum1<< endl;
    //sum is printed
        cout<< "Sum completed" <<endl;
    }
    else
    {
       return sum(x-1);
       // here recursion has applied also decrement the number;
    }
}
// as the function calls itself in the else condition so this process is recursive;
int main()
{
    int n;
    cin>>n;
    //number was taken
    sum(n);
    //number was given to the function
}
