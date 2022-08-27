const Json = {
    obj:{
        name:"Tushar"
    },
    parse:(string)=>{
        console.log(string)

    }
}
const str = '{"name":"Tushar"}'
console.log(JSON.stringify(Json.obj))
// Json.parse("Tushar")