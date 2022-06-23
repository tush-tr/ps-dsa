var mx = function (arr) {
    var m = arr[0];
    arr.forEach(function (e, i) {
        if (m < e) {
            m = e;
        }
    });
    return m;
};
console.log(mx([1, 2, 56, 23, 124, 135, 67]));
