class Operations {
  insertion(arr, element, index) {
    for (let i = arr.length - 1; i >= index; --i) {
      arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return arr;
  }
  deletion(arr, index) {
    for (let i = index; i <= arr.length - 1; i++) {
      arr[i] = arr[i + 1];
    }
    return arr;
  }
}

const op = new Operations();
// Insertion
console.log(op.insertion([1, 2, 3], 4, 1));
// deletion
console.log(op.deletion([1, 2, 3], 1));
module.exports = Operations;
