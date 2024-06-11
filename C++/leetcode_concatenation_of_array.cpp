int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int i;
    int *arr=(int*)malloc(2*numsSize*sizeof(int));
    
    for(i=0;i<numsSize;i++){
     arr[i]=nums[i] ;
     arr[i+numsSize]=nums[i];
    }

    (*returnSize)=2*numsSize;
    return arr;
}
