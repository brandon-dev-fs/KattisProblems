const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.on("line", (line) => {
    var nums = line.split(' ');
    var r1 = parseInt(nums[0]);
    var s = parseInt(nums[1]);
    console.log((2 * s) - r1);
});