// getbit
// setbit
// clearbit
// updatebit
class Questions {
    getbit(n: number, pos: number) {
        return ((n & (1 << pos)) != 0);
    }
    setbit(n: number, pos: number) {
        return (n | (1 << pos))
    }
    clearbit(n: number, pos: number) {
        return n & (~(1 << pos))
    }
    updatebit(n: number, pos: number,value:number) {
        let clear = n & ~(1 << pos);
        let set = clear | (value << pos);
        return set;
    }
}
const bit = (n: boolean) => {
    return (n ? 1 : 0)
}
const que = new Questions;
console.log(bit(que.getbit(5, 1)))
console.log(que.setbit(5, 1))
console.log(que.clearbit(7, 1))
console.log(que.updatebit(5,1,1))