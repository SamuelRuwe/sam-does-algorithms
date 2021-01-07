let arrayChangeHandler = {
  get: function(target, property) {
    return target[property];
  },
    // array.push sets the length which we don't want to
    // run the cb on
    //  Set(O, "length", len, true) --> after all ele pushed
  set: function(target, property, value) {
    if (property === "length") return true;
    console.log(`cur value = ${value}`);
    target.push(...value);
    return true;
  }
};

let originalArray = [];
let proxyToArray = new Proxy( originalArray, arrayChangeHandler );

proxyToArray.push([1,2,3,4,5]);
proxyToArray.push([2,2,3,4,5]);
