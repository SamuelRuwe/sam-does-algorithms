let dataToAppend = [];
let cb = (data) => console.log(data);
Object.defineProperty(dataToAppend, "push", {
  enumerable: false,
  configurable: false,
  writable: false,
  value: function () {
      Array.prototype.push.apply(this, arguments);
      cb(...arguments);
  }
});
dataToAppend.push(1);
dataToAppend.push(2);
dataToAppend.push(3);
