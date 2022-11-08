#include <vector>
using namespace std;

int sum(std::vector<int> nums)
{
 // your code here
 float ans = 0;

 for (int i = 0; i < nums.size(); i++)
 {
  ans += nums[i];
 }
 return ans;
}
