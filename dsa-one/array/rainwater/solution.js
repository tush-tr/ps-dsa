const height = [3, 1, 2, 4, 0, 1, 3, 2];
let left = new Array(height.length).fill(0);
let right = new Array(height.length).fill(0);
for (let i = 0; i < height.length; i++) {
  if (i == 0) {
    left[i] = height[i];
  } else {
    left[i] = Math.max(left[i - 1], height[i]);
  }
}
for (let i = height.length - 1; i >= 0; i--) {
  if (i == height.length - 1) {
    right[i] = height[i];
  } else {
    right[i] = Math.max(right[i + 1], height[i]);
  }
}
let totalWater = 0;
for (let i = 0; i < height.length; i++) {
  totalWater += Math.min(left[i], right[i]) - height[i];
}
console.log(totalWater)