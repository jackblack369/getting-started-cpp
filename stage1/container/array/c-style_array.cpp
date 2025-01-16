#include <algorithm>
#include <iostream>

int main()
{
    int arr[5]; // define an array of 5 int values

    arr[1] = 7; // use subscript operator to index array element 1
    std::cout << arr[1] << '\n'; // prints 7


    int foo[] { 1, 2, 3 };
    int src[] { 5, 6, 7 };

    // Copy src into arr
    std::copy(std::begin(src), std::end(src), std::begin(foo));
    // print the elements of foo
    for (int i : foo)
        std::cout << i << ' ';

    return 0;
}