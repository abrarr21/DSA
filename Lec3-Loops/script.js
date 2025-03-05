var pr = prompt("Enter a number to get the sum from 1 to n");

if (pr === null) {
  console.log("Cancelled");
} else {
  var n = Number(pr);

  if (isNaN(n)) {
    console.log("Invalid Input");
  } else {
    if (n > 0) {
      var sum = 0;
      for (var i = 1; i <= n; i++) {
        sum += i;
      }
      console.log(sum);
    } else {
      console.log("number should be positive and more than 0");
    }
  }
}
