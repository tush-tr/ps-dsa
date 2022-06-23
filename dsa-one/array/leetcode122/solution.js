// const maxProfit = (prices)=>{


// }
const prices = [5,2,7,3,6,1,2,4]
const ans = prices.reduce((prev,next)=>{
    return prev+next
},0)
console.log(ans)
