class Searching{
    linearSearch(arr,element){
        let re = arr.map((e)=>{
            if(element===e){
                return e;
            }
        })
        return re
    }
}
const search = new Searching

let a = search.linearSearch([1,2,3,4,5],3);
console.log(a)