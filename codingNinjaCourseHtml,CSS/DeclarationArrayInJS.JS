//declaration of Array in Java Script

const arr1 = [0 ,1 ,3, 34, 45];
const arr2 = ["Om", "Sonu", "Roshan", "Muskan"];
const arr3 = [1, 2, "Hii"];
console.log(arr1); 
const arr4 = new Array(2, 44, 2, 21, 53);
console.log(arr4);

console.log("No change here --> ",arr1);
arr1.push(323);// a  element can push in side in the last index
console.log(arr1);
console.log(arr1);
arr1.pop();// this method can remove the last element
console.log("Last element removed --> " ,arr1);

console.log(arr1.includes(3));//element is present or not
console.log(arr1.indexOf(45));

 const newArr = arr1.join();
 console.log(`new array converted in String BEcause of join --> ${newArr}`);

 // slice and splice
 console.log(arr1);

const anotherArray = [2, 4, 4, 6, 7, 8];
console.log(anotherArray.slice(2,5));// this will not change any original value in array
console.log(anotherArray);
console.log(anotherArray.splice(2,4));
console.log(`splice is change the original array  ${anotherArray}`);
console.log()