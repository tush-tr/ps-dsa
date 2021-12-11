const isPalindrome = (str,l,r)=>{
    if(l>=r){
        return true
    }
    if(str[l]!=str[r]){
        return false
    }
    return isPalindrome(str,l+1,r-1)
}
const myname = "aba"
console.log(isPalindrome(myname,0,myname.length-1))