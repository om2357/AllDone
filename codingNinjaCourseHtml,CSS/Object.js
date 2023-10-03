
let mySym = Symbol("key1");
const myObj = {
    name : "Om kumar",
    roll : 32,
    age  : 20,
    [mySym] : "key1",// here we can initilize symbol
    "full name" : "Om kumar",
}

console.log(myObj.age);
console.log(myObj[mySym]);
console.log(myObj["full name"])//another way to print object
console.log(myObj["age"]);
console.log(myObj)