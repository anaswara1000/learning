 void rotate(int* nums, int numsSize, int k) {
    if (numsSize <= 1) {
        return;  // No rotation needed for arrays of size 0 or 1
    }
    
    // Adjust k to be within the range [0, numsSize)
    k = k % numsSize;
    
    if (k < 0) {
        k += numsSize;  // Handle negative k values
    }
    
    // If k is 0, no rotation is needed
    if (k == 0) {
        return;
    }
    
    int new_arr[numsSize];
    
   
    for (int i = 0; i < numsSize; i++) {
        new_arr[(i + k) % numsSize] = nums[i];
    }
    
    
    for (int i = 0; i < numsSize; i++) {
        nums[i] = new_arr[i];
    }
}
