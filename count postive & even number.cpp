#include <iostream>

using namespace std;

int main()
{
    int result = 0;
    int nums[] = {10, 20, -20, 13, 30, -30, 40};
    int numeSize = size(nums); // 7

    for (int i = 0; i < numeSize; i++)
    {
        if (nums[i] > 0 && nums[i] % 2 == 0)
        {
            result += nums[i];
        }
        cout << "Result Is: " << result;
    }
    return 0;
}
    