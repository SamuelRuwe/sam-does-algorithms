function createOb(vals) {
   this.vals = vals;
}

createOb.prototype.inc = function(val) { this.vals.push(val); };

let a = new createOb([1,2]);
a.inc(1);
console.log(a.vals);
