let prom1 = Promise.resolve(2);

let fun = (pr) => {
    pr = pr.then(() => console.log(`resolved then`));
}
fun(prom1);
