function makeCounter() {
    let count = 0;
    return function () {
        count += 1;
        return count;
    };
}

const c = makeCounter();
console.log(c(), c(), c()); 

if (true) {
    let x = 42;
}