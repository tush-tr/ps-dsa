const ascii = (char)=>{
    if(typeof char !== 'string'){
        char = String(char)
    }
    return char.charCodeAt()
}
console.log(ascii('a'))