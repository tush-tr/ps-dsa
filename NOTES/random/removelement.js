let nums = [3,2,2,3]
let val = 3;
const res= []
for(let i=0;i<nums.length;i++){ 
    if(nums[i]===val){
        continue;
    }
    res.push(nums[i])
}
console.log(res)