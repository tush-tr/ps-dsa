var sumOfSubArray = function (arr) {
    var res = [];
    arr.forEach(function (e, i) {
        var sum = 0;
        for (var j = i; i < arr.length; j++) {
            sum += arr[j];
        }
        res.push(sum);
    });
    return res;
};
console.log(sumOfSubArray([2, 4, 5, 2, 3]));
