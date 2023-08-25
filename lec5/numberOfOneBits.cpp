#include <iostream>
using namespace std;
    class Solution{
    public:
        int hammingweight(int n) {
             int count = 0;
            while (n != 0)  {
                // checking last bit
                if (n & 1)
                {
                    count++;
                }
                n = n >> 1;
            }
            return count;
        }
    };
