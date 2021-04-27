const pow = (a,b)=>{
    if(b===1){
        return a;
    }else if(b===0){
        return 0;
    }
    return a * pow(a,b-1);
}
console.log(pow(23,1))
console.log(pow(25,0))
console.log(pow(3,6))