const name = "Om Kumar";
const SomethingsElse = "Sonu Kumar";
const Repo = 23;
// this is one type to concatinate the String
console.log(name + Repo);

//this is most prefered type to concatinate the String ---->

console.log(`my name is ${name} and another name is ${SomethingsElse} and my total repo is ${Repo}`);
 

// another way to declare the String using new keyword
// run this on browser console this will give another special things
 
let gamename = new String('Om Kumar');
console.log(gamename[0]);
console.log(gamename.length);
console.log(gamename.toUpperCase());
console.log(gamename.toLowerCase());
console.log(gamename.charAt(3));
console.log(gamename.indexOf("u"));
console.log(gamename.substring(0, 4));
console.log(gamename.slice(-8,7 ));


let UseOfTrim = ("             Om Kumar       ");
console.log(UseOfTrim);
console.log(UseOfTrim.trim());
/// 