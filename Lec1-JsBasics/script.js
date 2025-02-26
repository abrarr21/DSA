let a = 10;
let b = 20;

//swap - 1st way
let temp = a;
a = b;
b = temp;
console.log(a, b);

//swap - 2nd way
let x = 10;
let y = 20;
x = x + y; //30
y = x - y; //10
x = x - y; //20
console.log(x, y);

//swap - 3rd way
let m = 50;
let n = 100;

[m, n] = [n, m];
console.log(m, n);

//Math functions
console.log(Math.round(10.4)); //10
console.log(Math.ceil(10.4)); //11
console.log(Math.floor(10.4));
console.log(Math.trunc(10.4)); //remover the decimal and number after that
console.log(Math.pow(2, 5)); //2^5
console.log(Math.sqrt(36)); //square root of 36 = 6
console.log(Math.abs(15));
console.log(Math.max(50, 40, 299)); // gives the max number
console.log(Math.min(50, 40, 299)); // gives the min number
console.log(Math.random()); //give random num from 0 to 1
console.log(Math.random() * 100);

let xx = 89.343423;
console.log(xx.toFixed(2)); //gives 2 number after decimal
