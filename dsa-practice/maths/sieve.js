const sieve = (l)=>{
    let prime=new Array(l+1)
    prime.fill(true)
    for(let i=2;i<=l;i++){
        if(prime[i]==true){
            for(let j=i*i;j<=l;j+=i){
                prime[j]=false;
            }
        }
    }
    prime[0]=null
    prime[1]=null
    prime.forEach((e,i)=>{
        if(e==true){
            console.log(i)
        }
    })
}
sieve(10)