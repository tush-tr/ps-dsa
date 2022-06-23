

const bruteForce = (str) => {
  // O(n^2)
  const strArr = str.split("");
  const count = Object.create({});
  for (let i = 0; i < strArr.length; i++) {
    count[strArr[i]] = 0;
    for (let j = 0; j < strArr.length; j++) {
      if (strArr[i] === strArr[j]) {
        count[strArr[i]] += 1;
      }
    }
  }
  return Object.values(count).reduce((prev, next) =>
    prev > next ? prev : next
  );
};

const optimized = (str) => {
    // O(n)
  const strArr = str.split("");
  const freq = {};
  strArr.forEach((el) => {
    freq[el] = 0;
  });

  strArr.forEach((el) => {
    freq[el]++;
  });
  return Object.values(freq).reduce((prev, next) => (prev > next ? prev : next));
};

const str = "aaaaaaaaabbbeee";
console.log(bruteForce(str))
console.log(optimized(str))
