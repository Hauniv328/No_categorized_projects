#include <iostream>

using namespace std;

int main()
{
    int *dynamic_ptr = new (std::nothrow) int[(int)(1)];
    int *dynamic_ptr2 = new (std::nothrow) int[(int)(1)];

    if (dynamic_ptr == nullptr || dynamic_ptr2 == nullptr)
    {
        cout << "Dynamic allocation failed.";
    }

    else
    {
        cout << "The address of dynamic_ptr is " << dynamic_ptr << " and " << dynamic_ptr2 << endl;
        cout << "each pointer's size is: " << sizeof(dynamic_ptr) << " and " << sizeof(dynamic_ptr2) << endl;
    }

    delete[] dynamic_ptr;
}
