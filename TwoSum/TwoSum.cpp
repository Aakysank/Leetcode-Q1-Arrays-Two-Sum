// TwoSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //brute force approach - 2 get the difference of a number from target and search that number in vector.
        size_t size = nums.size();
        if (size <= 1 || size > pow(10, 4))
            return {};

        for (int i = 0; i < size; i++)
        {
            int num1 = nums.at(i);
            int num2 = target - num1;

            for (int j = i + 1; j < size; j++)
            {
                if (nums.at(j) == num2)
                    return { i, j };
            }
        }

        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    string str;
    vector<int> indices = sol.twoSum(nums, target);
    for (const auto& index : indices)
    {
        str.append(to_string(index));
        str.append(",");
    }

    cout << str;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
