const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.on("line", (line) => {
    var hi = line;
    var newhi = "";
    for(var i = 0; i < hi.length; i++){
        if(hi[i] == 'e'){
            newhi += "ee";
        }
        else{
            newhi += hi[i];
        }
    }

    console.log(newhi);
});