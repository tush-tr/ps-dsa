const sum = (num:number):number=>{
    if(num===1){
        return 1;
    }
    else if(num===0){
        return 0;
    }
    return num + sum(num-1)
}

console.log(sum(5))