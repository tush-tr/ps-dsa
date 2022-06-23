var Sorting = /** @class */ (function () {
    function Sorting() {
    }
    Sorting.prototype.selectionSort = function (yourArray) {
        yourArray.forEach(function (e, i) {
            for (var j = i + 1; j < yourArray.length; j++) {
                if (e > yourArray[j]) {
                    var temp = yourArray[i];
                    yourArray[i] = yourArray[j];
                    yourArray[j] = temp;
                }
            }
        });
        return yourArray;
    };
    Sorting.prototype.bubbleSort = function (arr) {
        var _a;
        var n = arr.length;
        for (var i = 0; i < n - 1; i++) {
            for (var j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    _a = [arr[j + 1], arr[j]], arr[j] = _a[0], arr[j + 1] = _a[1];
                }
            }
        }
        return arr;
    };
    Sorting.prototype.insertionSort = function (arr) {
        for (var i = 1; i <= arr.length - 1; i++) {
            var temp = arr[i];
            var j = i - 1;
            while (j >= 0 && arr[j] > temp) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
        return arr;
    };
    return Sorting;
}());
var arr = [2, 3, 1, 5, 23, 6];
var sort = new Sorting;
console.log(sort.selectionSort(arr));
console.log(sort.bubbleSort(arr));
console.log(sort.insertionSort(arr));
