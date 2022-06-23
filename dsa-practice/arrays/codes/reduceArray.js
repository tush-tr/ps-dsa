const arr = [10, 16, 7, 14, 5, 3, 12, 9];

const reduceArray = (arr) => {
  const pair = [];
  arr.forEach((e, i) => {
    pair.push({ i, e });
  });

  pair.sort((a, b) => {
    return a.e - b.e;
  });

  pair.forEach((e, i) => {
    arr[e.i] = i;
  });
};
reduceArray(arr)

console.log(arr);
