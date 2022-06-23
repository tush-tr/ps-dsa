const binarySearch = (arr,searchEl)=>{
    let low = 0;
    let high = arr.length;
    while(low<=high){
        let mid = Math.floor((high+low)/2);
        console.log(mid)
        if(arr[mid]===searchEl){
            return mid;
        }else if(arr[mid]>searchEl){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return -1;
}
console.log(binarySearch([5],5))