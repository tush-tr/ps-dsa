// find element in an array which have more than n/2 time frequency
// brute force- O(n^2)
const bruteforce = (arr)=>{
    let max = arr.length/2;
    let res;
    arr.forEach((e)=>{
        let count = 0;
        arr.forEach((r)=>{
            if(e==r){
                count++;
            }

        })
        if(count >= max){
            max = count;
            res = e;
        }
    })
    return res;
}
console.log(bruteforce([1,1,1,2,1,5]))


