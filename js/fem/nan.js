// NaN == Not a valid number
let myAge = Number("0o46"); // 38
let myNextAge = Number("39"); // 39
let myCatsAge = Number("n/a"); // NaN
myAge - "my son's age"; // NaN
// coerces string into a number which equals NaN
// any math operation on NaN results in NaN

myCatsAge === myCatsAge; // false !!
// NaN is only value in js that does not have identity property
isNan("a string");  // true
// isNaN coerces it to a number before checking
Number.isNaN(myCatsAge); // true
Number.isNaN("a string"); // false
// typeof NaN is number, just an invalid number
