'use strict';
const fs = require('fs');

let input = fs.readFileSync('/dev/stdin').toString().trim().split(/\s+/);
let n = Number(input[0]);
let scores = input.slice(1, n + 1).map(Number);


let maxScore = Math.max(...scores);


let sum = scores.reduce((acc, score) => acc + (score / maxScore * 100), 0);


let average = sum / n;
console.log(average);