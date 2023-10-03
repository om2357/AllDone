const balance = new Number(323454); //here we get some extra predefined features
let num = 232;//But here not
console.log(balance);
console.log(num);
console.log(num.toString());//converted into string;
console.log(balance.toString());//converted into string;
console.log(balance.toString().length);
console.log(balance.toFixed(2));/// here we got 2 only desimal values


const otherNum = 32412.75231;
console.log(otherNum); 
console.log(otherNum.toFixed(2));

console.log(otherNum.toPrecision(6))//for roundUp Propertys

const otherexaNum = 100000;
console.log(otherexaNum.toLocaleString('en-in'));

//****************************Maths******************************//
let num1 = 323.54;
console.log(Math); // maths is a object type
console.log(Math.abs(-4));//this will converted into Postive value(absulute value)
console.log(Math.round(num1));