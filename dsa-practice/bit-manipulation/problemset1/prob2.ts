const checkpow = (n:number)=>{
    return (n && !(n&n-1))
}
const powern = (n:number)=>{
    const results = []
    for(let i=1; i<=n;i++){
        if(checkpow(i) == true){
            results.push(i)
        }
    }
}
console.log(powern(5))