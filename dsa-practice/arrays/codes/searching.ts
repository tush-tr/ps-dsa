class Searching{
    linearSearch(arr:number[],element:number):number{
        let res:number;
        arr.forEach((e,i)=>{
            if(e===element){
                res=i;
            }
        })
        return res;
    }
    binarySearch(arr:number[],element:number){
        arr = arr.sort()
        let high:number = arr.length-1;
        let low:number = 0;
        while(low<=high){
            let mid:number = low+high/2;
            if(arr[mid]===element){
                return mid
            }
            else if(arr[mid]>mid){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    }

}

const search = new Searching;
const arr = [1,2,3,4,5,6,7]
console.log(search.linearSearch(arr,4))
console.log(search.binarySearch(arr,4))