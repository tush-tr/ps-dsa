const binarySearch = (arr, searchEl) => {
  let low = 0;
  let high = arr.length - 1;
  while (low <= high) {
    let mid = Math.floor((high + low) / 2);
    if (arr[mid].name === searchEl) {
      console.log("condition1: ", arr[mid].name);
      return mid;
    } else if (arr[mid].name > searchEl) {
      console.log("condition2: ", arr[mid].name);
      high = mid - 1;
    } else {
      console.log("condition3: ", arr[mid].name);
      low = mid + 1;
    }
  }
  return -1;
};

const arr = [1, 23, 12, 53, 63, 673, 43, 5675, 34];
const list = [
  { key: 1, name: "Tushar", role: "DevOps Engineer" },
  { key: 2, name: "Rahul", role: "DevOps Engineer" },
  { key: 3, name: "Mohit", role: "DevOps Engineer" },
  { key: 4, name: "Rishabh", role: "DevOps Engineer" },
  { key: 5, name: "Vipin", role: "DevOps Engineer" },
];
console.log(binarySearch(list, "Tushar"));
