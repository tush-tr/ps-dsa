const bruteforce = (arr) => {
  let mxSum = -199999999;
  // O(n^2)
  for (let i = 0; i < arr.length; i++) {
    let sum = 0;
    for (let j = i; j < arr.length; j++) {
      sum += arr[j];
      if (sum > mxSum) {
        mxSum = sum;
      }
    }
  }
  return mxSum;
};
const optimized = (arr) => {
  // O(n)
  let mxSum = arr[0];
  let currSum = 0;
  for (let i = 0; i < arr.length; i++) {
    currSum += arr[i];
    if (currSum > mxSum) {
      mxSum = currSum;
    }
    if (currSum < 0) {
      currSum = 0;
    }
  }
  return mxSum;
};
console.log(bruteforce([-5, 4, 6, -3, 4, -1]));
console.log(optimized([-5, 4, 6, -3, 4, -1]));
console.log(bruteforce([5,4,-1,7,8]))
console.log(optimized([5,4,-1,7,8]))

