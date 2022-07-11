/**
 * @param {number[]} nums
 * @return {number}
 */
function maxSubArraySum(a, size) {
  var max_so_far = Number.MIN_SAFE_INTEGER;
  var max_ending_here = 0;

  for (var i = 0; i < size; i++) {
    max_ending_here = max_ending_here + a[i];
    if (max_so_far < max_ending_here) max_so_far = max_ending_here;

    if (max_ending_here < 0) max_ending_here = 0;
  }
  return max_so_far;
}
const kadane = (nums) => {
  let currSum = 0;
  let maxSum = Number.MIN_SAFE_INTEGER;
  nums.forEach((num) => {
    currSum += num;
    // if(maxSum<currSum){
    //     maxSum = currSum;
    // }
    maxSum = Math.max(maxSum, currSum);
    if (currSum < 0) {
      currSum = 0;
    }
    
  });
  return maxSum;
};

var maxSubarraySumCircular = function (nums) {
  // TODO: get the total sum of the original array
  const totalSum = nums.reduce((a, b) => a + b);
  console.log("TOTAL SUM: ", totalSum);
  //  TODO: get the max subarray sum of nonWrapping elements
  const nonWrapSum = kadane(nums);
  if(nonWrapSum<0){
    return nonWrapSum;
  }
  console.log("nonWrapSum: ", nonWrapSum);
  // TODO: Get the sum of non-contributing elements
  const reverseSignArray = nums.map((num) => -num);
  // TODO:  Max Subarray sum = Total sum  of array - Sum of non-contributing elements
  const wrapSum = totalSum + kadane(reverseSignArray);
  console.log("wrapSum: ", wrapSum);
  return Math.max(nonWrapSum, wrapSum);
};
console.log(maxSubarraySumCircular([-3,-2,-3]))
console.log(kadane([-3, -2, -3]));
console.log(maxSubArraySum([-3, -2, -3],3))
