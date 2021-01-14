let proto = (cb, container) => {
    return {
        arr: container,
        push(val) {
            cb(val);
            this.arr.push(val);
        }
    };
}
let testArr = [];
let ex = proto(console.log, testArr);
let obj = Object.create(ex);
obj.push('a');
obj.push('b');
console.log(testArr);
