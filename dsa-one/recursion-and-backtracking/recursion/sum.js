const sumOfN = (num)=>{
    if(num==1){
        return 1;
    }
    return num + sumOfN(num-1);
}
console.log(sumOfN(6));
