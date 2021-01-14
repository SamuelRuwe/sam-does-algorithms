let a = () => {
    return new Promise(resolve => {
        setTimeout(() => {
        resolve('resolved');
    }, 2000);
  });
}

let b = async() => {
    let result = await a();
    console.log(result);
}

console.log('first');
b();
