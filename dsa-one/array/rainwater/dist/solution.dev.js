"use strict";

var height = [3, 1, 2, 4, 0, 1, 3, 2];
var left = new Array(height.length).fill(0);
var right = new Array(height.length).fill(0);

for (var i = 0; i < height.length; i++) {
  if (i == 0) {
    left[i] = height[i];
  } else {
    left[i] = Math.max(left[i - 1], height[i]);
  }
}

for (var _i = height.length - 1; _i >= 0; _i--) {
  if (_i == height.length - 1) {
    right[_i] = height[_i];
  } else {
    right[_i] = Math.max(right[_i + 1], height[_i]);
  }
}

var totalWater = 0;

for (var _i2 = 0; _i2 < height.length; _i2++) {
  totalWater += Math.min(left[_i2], right[_i2]) - height[_i2];
}

console.log(totalWater);