// Reverse a given number n
const reverseNumber = (number) =>{
    let reversedNumber = 0;
    while(number>0){
        let ld = number%10;
        reversedNumber = reversedNumber*10 + ld;
        number = parseInt(number/10);
    }
    return reversedNumber;
}
console.log(reverseNumber(345))