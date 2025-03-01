//Q8. Valid Voter
let ans = Number(prompt("What is your age?"));

if (isNaN(ans)) {
  console.log("Wrong Input");
} else if (ans >= 18) {
  console.log("You are eligible to vote");
} else {
  console.log("You are not eligible to vote");
}

//Q9. Calculate the amount payable after discount

let amount = Number(prompt("Enter the amount: "));

if (isNaN(amount)) {
  console.log("Invalid Input");
} else if (amount == 0 && amount <= 5000) {
  console.log(amount);
} else if (amount > 5000 && amount <= 7000) {
  console.log(amount - Math.floor((5 * amount) / 100));
} else if (amount > 7000 && amount <= 9000) {
  console.log(amount - Math.floor((10 * amount) / 100));
} else if (amount > 9000) {
  console.log(amount - Math.floor((20 * amount) / 100));
}

//Effient way

let amount2 = Number(prompt("Enter the amount2: "));
let dis = 0;

if (isNaN(amount2)) {
  console.log("Invalid Input");
} else if (amount2 == 0 && amount2 <= 5000) {
  dis = 0;
} else if (amount2 > 5000 && amount2 <= 7000) {
  dis = 5;
} else if (amount2 > 7000 && amount2 <= 9000) {
  dis = 10;
} else if (amount2 > 9000) {
  dis = 20;
}

console.log(amount2 - Math.floor((dis * amount2) / 100));

//Q10. Calculate the amount as per electricity unit

let unit = Number(prompt("Enter the electricity unit: "));
let amount = 0;

if (unit > 400) {
  amount = (unit - 400) * 13;
  unit = 400;
}

if (unit > 200 && unit <= 400) {
  amount += (unit - 200) * 8;
  unit = 200;
}

if (unit > 100 && unit <= 200) {
  amount += (unit - 100) * 6;
  unit = 100;
}

amount += unit * 4;

console.log(amount);

//Ternary Operator

let num = 12;
console.log(num > 0 ? "positive" : num < 0 ? "negative" : "zero");
