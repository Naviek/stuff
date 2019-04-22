let s = 'Max';
let fs = require('fs');
let readline = require('readline');

let text = fs.readFileSync('./lv17.csv');
let lines = text.toString().split('\n');

let arr = [];

for (let line of lines) {
	arr.push(line.split(','));
}

let arr2 = [];

for (let i = 0; i < arr[0].length; ++i) {
	let l = [];
	for (let j = 0; j < arr.length; ++j) {
		l.push(arr[j][i]);
	}
	arr2.push(l);
}

let cnt = 0;
ans = [];

for (let line of arr2) {
	for (let e of line) {
		if (e.indexOf(s) != -1) {
			cnt++;
			ans.push([line[1], e]);
		}
	}
}

if (cnt == 0) {
	console.log('not found');
}
else {
	for (let e of ans) {
		console.log(e[0], e[1]);
	}
}
