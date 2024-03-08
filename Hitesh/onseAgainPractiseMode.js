const account_id = 1223;
let account_email = "omk2357@gmail.com";
var acPassword = "123246567";

accountCity = "Ranchi";
console.log(account_id);
account_email = "omk235789@google.com";
console.log(account_email);

console.table([account_id, account_email, acPassword, accountCity])

let score = "344";
console.log(typeof score);
let valueOfNumber = Number(score);
console.log(valueOfNumber)

//*************************************operation ************************************************//


let value = 343
let nagative = -value;
console.log(nagative);
console.log(2**4)

let str1 = "Om"
let str2 =" kumar"
let str3 = str1 + str2;
console.log(str3);


//*********************************************************************************************** */


// total 7 type of data type
// this are primitve data type :- only copy of value is given not the actual location is given 
// number, Null, String, symboll, bigInt, Boolean, undefined

// non prmitive data type :- 

// object, function, Array


const hero = ["Om", "laxman", "shivam"];
console.log("Your heros data Type is -> " + typeof hero)
let obj = {
    name: "Om Kumar",
    age: 20,
    roll: 374
}

console.table(obj)

const myfunction = function(){
    console.log("hello");
}
console.log("Your function value is -> "+myfunction())


//***************************String Interpulation********************************************** */

value = 3;

console.log(`this is the Example of String Iterpolation ${ value} we can inject the value of variable in same time like this `)

const gameName = new String("Om kumar")
