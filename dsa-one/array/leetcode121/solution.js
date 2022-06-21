var maxProfit = function (prices) {
  const aux = new Array(prices.length).fill(0);
  const n = prices.length;
  for (let i = n - 1; i >= 0; i--) {
    if (i == n - 1) {
      aux[i] = prices[i];
    }
    if (prices[i] >= aux[i + 1]) {
      aux[i] = prices[i];
    }
    if(prices[i]<aux[i+1]){
        aux[i]=aux[i+1]
    }
  }
  console.log(aux)
  let mxProfit = 0;
  prices.forEach((price, i) => {
    if (aux[i] - price > mxProfit) {
      mxProfit = aux[i] - price;
    }
  });
  return mxProfit;
};
const mxp = maxProfit([8,6,4,3,3,2,3,5,8,3,8,2,6])
console.log(mxp)