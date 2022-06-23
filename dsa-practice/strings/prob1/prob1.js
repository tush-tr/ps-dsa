const converToUpperCase=(str)=>{
    str.split("").forEach((char)=>{
        if(char>='a'&&char<='z'){
            let asc = char.charCodeAt(0)
            char = String.fromCharCode(asc-32)
        }
    })

    return str;
}

// console.log(converToUpperCase("Afeufoer"))
const str = "iewnifinWsOnfpernININENceni"
const smalls = str.split("").filter(char => char>='a'&&char<='z')
console.log(smalls)