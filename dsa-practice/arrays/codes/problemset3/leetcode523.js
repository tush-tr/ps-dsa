var checkSubarraySum = function(nums, k) {
    for(let i=0;i<nums.length;i++){
        let sum=0;
        for(let j=i;j<nums.length;j++){
            sum+=nums[j]
            if(sum%k===0){
                console.log(j)
                if(j-i>=1){
                    console.log(sum)
                    return true;
                }
            }
        }
    }
    return false
};

console.log(checkSubarraySum([1,0],2))
Number.MIN_SAFE_INTEGER