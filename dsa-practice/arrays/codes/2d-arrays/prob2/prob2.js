const matrixMultiply = (m1, m2) => {
  let n1 = m1.length;
  let n2 = m2.length;
  let n3 = m2[0].length;
  let ans = Array(n1).fill(Array(n3).fill(0));
//   for(let i=0;i<n1;i++){
//     for(let j=0;j<n2;j++){
//         for(let k=0;k<n3;k++){
//             ans[i][j] += m1[i][k]*m2[k][j]
//         }
//     }
//   }
  return ans;
};
const m1 = [
  [2, 4, 1, 2],
  [8, 4, 3, 6],
  [1, 7, 9, 5],
];
const m2 = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
  [4, 5, 6],
];

console.log(matrixMultiply(m1, m2));
