var BitwiseOperators = /** @class */ (function () {
    function BitwiseOperators(a, b) {
        this.a = a;
        this.b = b;
    }
    BitwiseOperators.prototype.And = function () {
        return "And operator: a&b=" + (this.a & this.b);
    };
    BitwiseOperators.prototype.Or = function () {
        return "OR operator: a|b = " + (this.a | this.b);
    };
    BitwiseOperators.prototype.Xor = function () {
        return "XOR Operator: a^b= " + (this.a ^ this.b);
    };
    BitwiseOperators.prototype.Not = function () {
        return "NOT operator: ~a=" + ~this.a;
    };
    BitwiseOperators.prototype.RightShift = function () {
        return "Right Shift Operator: a>>1=" + (this.a >> 1);
    };
    BitwiseOperators.prototype.LeftShift = function () {
        return "Left Shift operator: a<<1=" + (this.a << 1);
    };
    return BitwiseOperators;
}());
var bitwise = new BitwiseOperators(5, 4);
console.log(bitwise.And());
console.log(bitwise.Or());
console.log(bitwise.Not());
console.log(bitwise.Xor());
console.log(bitwise.LeftShift());
console.log(bitwise.RightShift());
