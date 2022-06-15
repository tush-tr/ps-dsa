// find element in an array which have more than n/2 time frequency
// brute force- O(n^2)
const findCounts = (arr) => {
  let hash = new Array(arr.length).fill(0);
  arr.forEach((el, i) => {
    hash[el - 1]++;
  });
  arr.forEach((el, i) => {
    console.log(`${i + 1}-->${hash[i]}`);
  });
};
const bruteforce = (arr) => {
  let max = arr.length / 2;
  let res;
  arr.forEach((e) => {
    let count = 0;
    arr.forEach((r) => {
      if (e == r) {
        count++;
      }
    });
    if (count >= max) {
      max = count;
      res = e;
    }
  });
  return res;
};

const mooreAlgo = (arr) => {
  let ansIndex = 0;
  let count = 1;
  arr.forEach((el, i) => {
    if (el == arr[ansIndex]) {
      count++;
    } else {
      count--;
    }
    if (count === 0) {
      ansIndex = i;
      count = 1;
    }
  });
  // check if ansIndex is actually the answer
  let finalCount = 0;
  arr.forEach((el) => {
    if (el === arr[ansIndex]) {
      finalCount++;
    }
  });
  console.log(finalCount);
  if (finalCount > Math.floor(arr.length / 2)) {
    return arr[ansIndex];
  }
  return false;
};

// console.log(bruteforce([1, 1, 1, 2, 1, 5]));
// findCounts([1, 2, 3, 4, 2, 3, 5, 5,45]);

console.log(mooreAlgo([1, 100]));
