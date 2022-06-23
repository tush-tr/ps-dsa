/* 
Arrays Challenge-Record Breaker

(Google kickstart)

Problem
Isyana is given the number of visitors at her local theme park on N consecutive
days. The number of visitors on the i-th day is Vi. A day is record breaking if it
satisfies both of the following conditions:

● The number of visitors on the day is strictly larger than the number of
visitors on each of the previous days.
● Either it is the last day, or the number of visitors on the day is strictly larger
than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.

Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Vi.

Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the number of record breaking days.


*/

const bruteForceRecords = (arr) => {
  let count = 0;
  for (let i = 0; i < arr.length; i++) {
    let cond1;
    for (let j = 0; j < i; j++) {
      if (arr[j] > arr[i]) {
        cond1 = false;
        break;
      }
      cond1 = true;
    }
    if (cond1 == true && arr[i] > arr[i + 1]) {
      count++;
    }
  }
  return count;
};
const optimizedRecords = (arr) => {
  let count = 0;
  let mx = -19999999;
  arr.forEach((el, i) => {
    if (el > mx && el > arr[i + 1]) {
      count++;
    }
    mx = Math.max(mx, el);
  });
  return count;
};
console.log(bruteForceRecords([1, 2, 0, 7, 2, 0, 2, 2]));
console.log(optimizedRecords([1, 2, 0, 7, 2, 0, 2, 2]));
