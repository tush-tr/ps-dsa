type Int = number & { __int__: void };
const reverseNumber = (number: Int) =>{
    let reversedNumber = 0;
    while(number>0){
        let ld = number%10;
        reversedNumber = reversedNumber*10 + ld;
        number = number/10;
    }
    return reversedNumber;
}