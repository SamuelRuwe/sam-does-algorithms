let o = {};
Object.defineProperty(o, 'a', {
    value: 37,
    writable: true,
    enumerable: true,
    configurable: true
});

console.log(o.a);
console.log(o);
