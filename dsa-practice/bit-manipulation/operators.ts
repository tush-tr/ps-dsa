class BitwiseOperators{
    a:number;
    b:number;
    constructor(a:number,b:number){
        this.a = a;
        this.b = b;
    }
    And(){
        return `And operator: a&b=${this.a&this.b}`
    }
    Or(){
        return `OR operator: a|b = ${this.a | this.b}`
    }
    Xor(){
        return `XOR Operator: a^b= ${this.a^this.b}`
    }
    Not(){
        return `NOT operator: ~a=${~this.a}`
    }
    RightShift(){
        return `Right Shift Operator: a>>1=${this.a>>1}`
    }
    LeftShift(){
        return `Left Shift operator: a<<1=${this.a<<1}`
    }
}

const bitwise = new BitwiseOperators(5,4)
console.log(bitwise.And())
console.log(bitwise.Or())
console.log(bitwise.Not())
console.log(bitwise.Xor())
console.log(bitwise.LeftShift())
console.log(bitwise.RightShift())