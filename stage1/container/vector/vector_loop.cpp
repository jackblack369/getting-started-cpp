#include <iostream>
#include <vector>


template <typename T>
void printArray(const std::vector<T>& arr)
{
	// typename keyword prefix required for dependent type
	for (typename std::vector<T>::size_type index { 0 }; index < arr.size(); ++index)
		std::cout << arr[index] << ' ';
}

using Index = std::ptrdiff_t;

int main()
{
    std::vector testScore { 84, 92, 76, 81, 56 };
    std::size_t length { testScore.size() };

    int average { 0 };
    for (std::size_t index{ 0 }; index < length; ++index) // index from 0 to length-1
        average += testScore[index];                      // add the value of element with index `index`
    average /= static_cast<int>(length);                  // calculate the average

    std::cout << "The class average is: " << average << '\n';

    std::vector arr { 9, 7, 5, 3, 1 };

    for (auto index{ static_cast<Index>(arr.size())-1 }; index >= 0; --index)
        std::cout << arr[static_cast<std::size_t>(index)] << ' ';


	printArray(arr);

    return 0;
}