// stack ->Stack is use in Primitive data type(Number, Null, String, Symboll,BigInt, Boolean, Undifiend ) 

// heap -> Heap is use in non Primitive Data type(array, object, function)

// whenever we declare a primitiv type variable this will store in stack and we get a copy of address

// whenever we declare a non primitiv type variable this will store in heap and we get a original address and we get a reference 

let myName = "Om Kumar";
console.log(myName);
let anotherName = myName;
anotherName = "sonu kumar";
console.log(anotherName);

console.log(anotherName)
// = "Sonu kumar";
// con