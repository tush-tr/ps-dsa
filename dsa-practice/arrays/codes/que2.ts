const sumOfArray = (arr :number[]):number=>{
    return arr.reduce((a,b)=>{return a+b})
}
const arr1 = [1,2,3,4,5]
const arr2 = [2,'e',2]
console.log(sumOfArray(arr1)) // 15
console.log(sumOfArray(arr2)) // throw error