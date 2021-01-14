const timer = () => {
    let i = 1;
    return () => console.log(i++);
}

timerid1 = timer();
timerid2 = timer();
timerid1();
timerid2();
