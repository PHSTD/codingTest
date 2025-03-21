'use strict';
const fs = require('fs');

let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
let [n, m] = input[0].split(' ').map(Number);


let baskets = Array.from({ length: n }, (_, i) => i + 1);


for (let k = 1; k <= m; k++) {
  let [i, j] = input[k].split(' ').map(Number);

  while (i < j) {
    let temp = baskets[i - 1];
    baskets[i - 1] = baskets[j - 1];
    baskets[j - 1] = temp;
    i++;
    j--;
  }
}


console.log(baskets.join(' '));
