var isPowerOfTwo = function (n) {
    return (n && !(n & n - 1));
};
console.log(isPowerOfTwo(5));
