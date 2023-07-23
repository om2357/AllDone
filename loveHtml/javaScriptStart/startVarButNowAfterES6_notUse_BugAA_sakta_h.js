//why let,
// 7 types are primitive data type and  object is non primitive data type
// Number, null, BigInt, Boolean, String, Symbol, undefined


console.log("javaScript tutorial = var, let, const");
var a = 45;
var b = "om";
var c = null;
var d = undefined;

const author = "Om_Kumar"

// var is globally scoped while let & const are block scoped
{
    var b = "hello"
    console.log(b)
}
console.log(b);
// here var is globay we can change its mean if i change in any function then it will change all over the program so we have to avoid var and we have to use let keyword.
let e = "ok"
{
  let e = "ommm";
  console.log(e)
}
console.log(e)

// Non primitive Data type:- how to make object

item =
{
  "Om": true,
  "Rosan": false,
  "sourav": undefined,
  "rajShakhar" : 77
}
console.log("this Is Value of Om -> ",item["Om"])