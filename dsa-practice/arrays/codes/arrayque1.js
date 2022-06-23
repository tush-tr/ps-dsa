class minMax {
    constructor(arr){
        this.arr = arr;
    }
    findMin() {
        let arr = this.arr
        let res = arr[0];
        for (let i = 1; i < arr.length; i++) {
            if (arr[i] < res) {
                res = arr[i]
            }
        }
        return res;
    }
    findMax() {
        let arr = this.arr
        let res = arr[0]
        for (let i = 1; i < arr.length; i++) {
            if (arr[i] > res) {
                res = arr[i]
            }
        }
        return res;
    }
    sumOfArray(){
        return this.arr.reduce((a,b)=>{return a+b})
    }
}
const arr = [1, 2, 3,4,5]
const findElement = new minMax(arr)
console.log(findElement.findMin())
console.log(findElement.findMax())