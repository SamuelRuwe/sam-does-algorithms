onChange = (object, cb) => {
	const handler = {
        set(target, prop, val) {
           cb(val);
           return val;
        }
	};

	return new Proxy(object, handler);
};

let j = { a: [] };

let j2 = onChange(j, (val) => console.log(val));
j2.a = [1,2,3,4,5,];
