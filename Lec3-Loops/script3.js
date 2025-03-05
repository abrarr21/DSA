//Prime

var pr = prompt("Enter a number to get the factors :");

if (pr === null) {
  console.log("Cancelled");
} else {
  var n = Number(pr);

  if (isNaN(n)) {
    console.log("Invalid Input");
  } else {
    if (n > 0) {
      var isPrime = true;
      for (var i = 2; i <= Math.floor(n / 2); i++) {
        if (n % i === 0) {
          isPrime = false;
          break;
        }
      }
      console.log(isPrime);
    } else {
      console.log("number should be positive and more than 0");
    }
  }
}

function isPrime2(n) {
  if (n <= 1) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  for (let i = 3; i <= Math.floor(Math.sqrt(n)); i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
