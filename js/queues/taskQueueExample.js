const logStart = () => console.log('script start');

const timeoutStart = () => setTimeout(() => console.log('timeoutStart was executed!'), 0);

const promiseResolve = () => Promise.resolve()
  .then(() => console.log('promise1 resolved!'))
  .then(() => console.log('promise2 resolved!'));

const logEnd = () => console.log('script end');

timeoutStart();
logStart();
logEnd();
promiseResolve();
