#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   int nums[] = {0,1,2,3,4,5,6,7,8,9,10};
   int target = 8;
   int len = *(&nums +1) - nums;
   for (int i = 0; i < len; i++) {
      // printf("%d\n", nums[i]);
      for (int j = 1; j < len; j++) {
         if (nums[i] + nums[j] == target) {
            printf("%d %d\n", i,j);
         }
      }
   }
   return 0;
} 