// Check if a given number is armstrong number or not
const tripleDigit = (num)=>{
    let ns = String(num)
    let arr = ns.split('')
    return arr.reduce((a,e)=>{return parseInt(a) + (parseInt(e)*parseInt(e)*parseInt(e))})
}
const isArmstrong = (num)=>{
    return num===tripleDigit(num)
}
console.log(isArmstrong(153))