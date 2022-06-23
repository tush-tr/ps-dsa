// Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).-- In JS
const max = (arr) => {
  let mx = arr[0]; //or -19999999999999
  arr.forEach((e, i) => {
    // mx = Math.max(mx,e);
    if (e > mx) {
      mx = e;
    }
    console.log(i + ":" + mx);
  });
};
max([1, 0, 5, 4, 6, 8]);
