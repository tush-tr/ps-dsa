"use strict";

// const maxProfit = (prices)=>{
// }
var prices = [5, 2, 7, 3, 6, 1, 2, 4];
var ans = prices.reduce(function (prev, next) {
  return prev + next;
}, 0);
console.log(ans);