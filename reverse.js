const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter String : ", function (answer) {
  var out = answer.split("").reverse().join("");
  console.log(`OUTPUT : ${out}`);
  rl.close();
});
