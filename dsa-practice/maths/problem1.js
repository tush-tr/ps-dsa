const isPrime = (num)=>{
    for(let i=2;i<Math.sqrt(num);i++){
        if(num/i===0){
            return false;
        }
    }
    return true;
}
const showNum = (num)=>{

    if(isPrime(num)){
        console.log("Number is Prime")
    }
    else{
        console.log("Number is not Prime")
    }
}
showNum(2)
showNum(17)