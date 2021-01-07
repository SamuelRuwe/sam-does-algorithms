let countFunc = () => {
    let count = 0;
    return () => ++count;
}

let example1 = countFunc();
let example2 = countFunc();

let count1 = () => console.log(`count1 is: ${example1()}`);
let count2 = () => console.log(`count2 is: ${example2()}`);

count1();
count1();
count1();
count2();
count2();
