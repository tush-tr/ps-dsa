const checkPrime = (n)=>{
    for (let i = 2; i*i <= n; i++) {
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}

const primeInRange=(l)=>{
    for(let i=2;i<=l;i++){
        if(checkPrime(i)){
            console.log(i)
        }
    }
}
primeInRange(10)