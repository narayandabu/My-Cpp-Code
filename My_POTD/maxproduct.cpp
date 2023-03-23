#include <bits/stdc++.h>
using namespace std;
#define el endl

int maxProduct(vector<int>& nums) {
        int max{0},next_max{0},size=nums.size();
        for (int i = 0; i < size; i++){
            if (max<=nums[i]){
                next_max=max;
                max=nums[i];
            }
        }
        return (max-1)*(next_max-1);
}
int main()
{
    vector<int> v{1,5,4,5};
    cout<<maxProduct(v);
    return 0;
}

