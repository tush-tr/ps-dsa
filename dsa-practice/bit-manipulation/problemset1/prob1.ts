
const isPowerOfTwo = (n:number)=>{
    return (n && !(n&n-1))
}
console.log(isPowerOfTwo(5))