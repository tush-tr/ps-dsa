class Sorting {
    selectionSort(yourArray: number[]): number[] {
        yourArray.forEach((e, i) => {
            for (let j = i + 1; j < yourArray.length; j++) {
                if (e > yourArray[j]) {
                    let temp = yourArray[i];
                    yourArray[i] = yourArray[j]
                    yourArray[j] = temp;
                }
            }
        })
        return yourArray;
    }
    bubbleSort(arr: number[]): number[] {
        let n = arr.length;
        for (let i = 0; i < n - 1; i++) {
            for (let j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]]
                }
            }
        }
        return arr;
    }
    insertionSort(arr: number[]):number[] {
        for (let i = 1; i <= arr.length - 1; i++) {
            let temp = arr[i];
            let j = i - 1;
            while (j >= 0 && arr[j] > temp) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
        return arr;
    }

}
const arr: number[] = [2, 3, 1, 5, 23, 6]
const sort = new Sorting;
console.log(sort.selectionSort(arr))
console.log(sort.bubbleSort(arr))
console.log(sort.insertionSort(arr))