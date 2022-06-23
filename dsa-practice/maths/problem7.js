const fibo = (num)=>{
    if(num===1){
        return 0
    }
    else if(num===2){
        return "0 1"
    }
    else{
        let arr = [0,1]
        let a=0,b=1,i=3;
        while(i<=num){
            let fibo = a+b;
            arr.push(fibo);
            a = b;
            b = fibo;
            i++;
        }
        return arr;
    }
}
console.log(fibo(10))