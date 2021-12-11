// n - rows, m - columns
const ways = (n,m)=>{
    if(n==1 || m==1){
        return 1;
    }
    return ways(n-1,m) + ways(n,m-1);
}

console.log(ways(4,3))