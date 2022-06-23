// getbit
// setbit
// clearbit
// updatebit
var Questions = /** @class */ (function () {
    function Questions() {
    }
    Questions.prototype.getbit = function (n, pos) {
        return ((n & (1 << pos)) != 0);
    };
    Questions.prototype.setbit = function (n, pos) {
        return (n | (1 << pos));
    };
    Questions.prototype.clearbit = function (n, pos) {
        return n & (~(1 << pos));
    };
    Questions.prototype.updatebit = function (n, pos, value) {
        var clear = n & ~(1 << pos);
        var set = clear | (value << pos);
        return set;
    };
    return Questions;
}());
var bit = function (n) {
    return (n ? 1 : 0);
};
var que = new Questions;
console.log(bit(que.getbit(5, 1)));
console.log(que.setbit(5, 1));
console.log(que.clearbit(7, 1));
console.log(que.updatebit(5, 1, 1));
