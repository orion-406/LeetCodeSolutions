#include <iostream>
#include <string>

#include "198 House Robber\cpp_solution.cpp"

void printPair(std::pair<int, int> pair)
{
    std::cout << "( " << pair.first << ", " << pair.second << " )\n";
}

int main()
{
    Solution s;
    
    auto arg1 = {1, 3, 4, 5, 7, 100, 11};

    auto result = s.rob(arg1);

    std::cout << result << std::endl;
}