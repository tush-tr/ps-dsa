// var minSubArrayLen = function(target, nums) {
//     let len = 0;
//     let currSum=0;
//     let mxSum = 0;
//     for(let i=0;i<nums.length;i++){
//         currSum+=nums[i];
//         if(currSum<mxSum){
//             mxSum = currSum;
//             console.log(mxSum)
//         }
//         if(mxSum>target){
//             len++;
//         }
//         if(currSum<0){
//             currSum=0;
//         }
//     }
//     return len
// };

// console.log(minSubArrayLen(11,[1,2,3,4,5]))

var checkSubarraySum = function(nums, k) {
    for(let i=0;i<nums.length;i++){
        let sum=0;
        for(let j=i;j<nums.length;j++){
            sum+=nums[j]
            if(sum%k===0){
                return true
            }
        }
    }
    return false
};
console.log(checkSubarraySum([23,2,6,4,7],6))