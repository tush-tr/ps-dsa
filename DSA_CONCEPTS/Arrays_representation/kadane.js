var maxSubArray = function (nums) {
  let currSum = 0;
  let mxSum = nums[0];
  for (let i = 0; i < nums.length; i++) {
    currSum += nums[i];
    if (currSum > mxSum) {
      mxSum = currSum;
    }
    if (currSum < 0) {
      currSum = 0;
    }
  }
  return mxSum;
};

