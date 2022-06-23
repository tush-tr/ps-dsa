var Searching = /** @class */ (function () {
    function Searching() {
    }
    Searching.prototype.linearSearch = function (arr, element) {
        var res;
        arr.forEach(function (e, i) {
            if (e === element) {
                res = i;
            }
        });
        return res;
    };
    Searching.prototype.binarySearch = function (arr, element) {
        arr = arr.sort();
        var high = arr.length - 1;
        var low = 0;
        while (low <= high) {
            var mid = low + high / 2;
            if (arr[mid] === element) {
                return mid;
            }
            else if (arr[mid] > mid) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
    };
    return Searching;
}());
var search = new Searching;
var arr = [1, 2, 3, 4, 5, 6, 7];
console.log(search.linearSearch(arr, 4));
console.log(search.binarySearch(arr, 4));
