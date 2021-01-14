setTimeout(() => console.log(`Timeout Resolution`), 0);
Promise.resolve().then(() => console.log(`Promise Resolution`));
console.log(`Console Log Resolution`);
