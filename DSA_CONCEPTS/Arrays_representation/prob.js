const arr = [4, 2, 1, 3];
arr.sort();
console.log(arr);

let res = 1;
for (let i = 1; i < arr.length; i++) {
  let sum = 0;
  for(let j=0;j<i;j++){
    sum +=arr[j]
  }
  if(arr[i]>=sum){
    res++;
  }
}

// arr.forEach((num,i)=>{
//     if(i===0){
//         res++;
//     }
//     let sum=0;
//     for(let j=0;j<i;j++){
//         sum=arr[j];
//     }
//     if(num>=sum){
//         res++;
//     }

// })
console.log("ANSWER", res);
