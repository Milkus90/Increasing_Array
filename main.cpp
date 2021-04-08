#include <iostream>
#include <vector>


/*You are given an array of n integers. You want to modify the array so that it is increasing,
i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Example:

Input:
5
3 2 5 1 7

Output:
5
*/


class IncreasingArray
{
public:
    IncreasingArray (int n)
    {
        vectorAsArray.resize(n);
    }

    void printArray() const
    {
        std::cout << "[ ";
        for (std::size_t i = 0 ; i < vectorAsArray.size() ; i++ )
        {
            std::cout << vectorAsArray[i] << ", ";
        }
        std::cout << "]\n";
    }

    void fillArrayExample()
    {
        vectorAsArray.at(0) = 3;
        vectorAsArray.at(1) = 2;
        vectorAsArray.at(2) = 5;
        vectorAsArray.at(3) = 1;
        vectorAsArray.at(4) = 7;
    }

private:
    std::vector<int> vectorAsArray;

};





int main()
{
    IncreasingArray array = IncreasingArray(5);
    array.fillArray();
    array.printArray();
    return 0;
}
