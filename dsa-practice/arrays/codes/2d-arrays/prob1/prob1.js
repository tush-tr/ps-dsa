const A = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];

const bruteForceTranspose = (A) => {
  let res = [];
  A.forEach((inner, row) => {
    let temp = inner.map((item, col) => {
      return A[col][row];
    });
    res.push(temp);
  });
  return res;
};

const res = bruteForceTranspose(A);
console.log(res);
