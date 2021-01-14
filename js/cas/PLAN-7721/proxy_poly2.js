let proto = (cb, container) => {
    const obj = {
        arr: container,
        push(val) {
            cb(val);
            this.arr.push(val);
        }
    };
    return Object.create(obj);
}
let testArr = [];
let ex = proto(console.log, testArr);
ex.push('a');
ex.push('b');
console.log(testArr);
