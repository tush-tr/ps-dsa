const sumOfSubArray = (arr:number[])=>{
    const res:number[] = [];
    arr.forEach((e,i)=>{
        let sum = 0;
        for(let j=i;i<arr.length;j++){
            sum += arr[j]
        }
        res.push(sum)
    })
    return res;
}
console.log(sumOfSubArray([2,4,5,2,3]))