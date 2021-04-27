const factorial = (num)=>{
    let res = 1;
    for(let i=1;i<=num;i++){
        res *= i;
    }
    return res;
}

console.log(factorial(5));