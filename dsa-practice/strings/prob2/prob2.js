// Form the biggest number from the number string

const maxNumber = (numString) => {
  return parseInt(
    numString
      .split("")
      .sort((a, b) => b - a)
      .join("")
  );
};
console.log(maxNumber("232890420"))
