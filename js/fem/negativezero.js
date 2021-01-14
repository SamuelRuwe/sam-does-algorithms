// use Object.is(value,-0);
let a = -0;
console.log(a === 0); // true ??
console.log(Object.is(a,-0)); // true
console.log(Object.is(a,0)); // false
console.log(NaN === NaN); // false
