var arrayChangeHandler = {
  get: function(target, property) {
    return target[property];
  },
    // array.push sets the length which we don't want to
    // run the cb on
    //  Set(O, "length", len, true) --> after all ele pushed
  set: function(target, property, value) {
    if (property !== 'length') {
        console.log(value);
    }
    target[property] = value;
    return true;
  }
};

var originalArray = [];
var proxyToArray = new Proxy( originalArray, arrayChangeHandler );

proxyToArray.push([1]);
console.log(proxyToArray);
