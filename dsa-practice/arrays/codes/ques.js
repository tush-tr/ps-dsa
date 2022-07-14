function subarraySum(arr, n, s) {
  //your code here
  for (let i = 0; i < n; i++) {
    let sum = 0;
    for (let j = i; j < n; j++) {
      sum += arr[j];
      if(sum==s){
        return [i+1,j+1]
      }
    }
  }
  return [-1];
}
console.log(subarraySum([1, 2, 3, 7, 5], 5, 12));
