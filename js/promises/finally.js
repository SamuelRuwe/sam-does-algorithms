let i = 0;
let result = Promise.resolve(console.log(i++));
result.then();
result.then();
