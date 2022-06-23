var sumOfArray = function (arr) {
    return arr.reduce(function (a, b) { return a + b; });
};
var arr1 = [1, 2, 3, 4, 5];
var arr2 = [2, 'e', 2];
console.log(sumOfArray(arr1)); // 15
console.log(sumOfArray(arr2)); // 2e2
