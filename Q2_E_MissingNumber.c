//?Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

int missingNumber(int* nums, int numsSize){
    int ArraySum=0;
    for(int i=0;i<numsSize;i++){
        ArraySum = ArraySum + nums[i];
    }
    int Sn = numsSize*(numsSize+1)/2;
    int missing = Sn - ArraySum;
    return missing;
}