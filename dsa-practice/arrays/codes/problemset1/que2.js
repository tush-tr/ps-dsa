// sum of all subarrays

const sum = (arr) => {
  let n = arr.length;
  let sum = 0;
  for (let i = 0; i < n; i++) {
    sum = 0;
    for (let j = i; j < n; j++) {
      sum += arr[j];
      console.log(sum);
    }
  }
};
sum([1,2,0,7,2])