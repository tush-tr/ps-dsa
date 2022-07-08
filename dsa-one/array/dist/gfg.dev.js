"use strict";

// function MissingNumber(array, n) {
//   //code here
//   let ans;
//   array.sort();
//   for (let i = 1; i < n; i++) {
//     if (array[i] - array[i-1] !== 1) {
//       console.log(array[i]-1);
//       break;
//     }
//   }
//   const sum = array.reduce((a,b)=>a+b)
// console.log(sum)
//   let s=0;
//   for(let i=1;i<=n;i++){
//     s += i;
//   }
//   return s;
// }
// console.log(MissingNumber([1, 2, 3, 4, 5, 6, 7, 8, 10], 10));
var digits = [6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 4, 3];
console.log(digits.join(""));
var integer = parseInt(digits.join(""));
console.log(integer);
var answer = integer + 1;
console.log(answer);
var strArr = answer.toString().split("");
var ans = strArr.map(function (el) {
  return parseInt(el);
});
console.log(ans);