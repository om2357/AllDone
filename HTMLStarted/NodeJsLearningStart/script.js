console.log("Hello Every One");
//basics :- variable

var fullName = "Om Kumar";

// how to name variables

var courseName = "Coming soon";
var isLoggedIn = true; //0 or 1

var loggedCount = 34;

var paymentMood;
paymentMood = "Credit Card";

console.log(loggedCount);

var fullName = "Om kumar";
var uid = "abc123";
var email = "omk235789@gmail.com";
var password = "123456";
var confirmPassword = "123456";
var courseCount = 0;
var isLoggedInFromGoogl = false;

console.log("Your name is : ", fullName);
console.log("Your uid is :", uid);
console.log("Your password is : ", password);

// Bellow is called interpolation
console.log(`

With Unique ID: ${uid}
User is : ${fullName}
and his email is: ${email}
and users Password is: ${password}

`);

var num1 = 20;
var num2 = 30;

console.log("Your addition is : ", num1 + num2);
console.log("Your Multiplication is ", num1 * num2);
console.log("Your divition is : ", num1 / num2);

var answer = num1 > num2;
console.log("Your answer is : ", answer);

if (num1 > num2) {
  console.log(num1, "num1 is greater then num2");
} else {
  console.log(num2, "num1 is less then num2");
}

// var arr = [ 1, , 3, 4 ];

var words = ['one', 'two', 'three', 'four'];

words.forEach(function(word) {
    console.log(word);
    if (word === 'two') {
        words.shift();
    }
});

var color = ['red', 'orange', 'blue', 'violet'];

var removed = color.splice(2);

console.log(color);
console.log(removed);

var sum = 0; 
var arr = [1, 2, 3];
arr.forEach(getSum);
console.log(sum);

function getSum(ele) {
   sum += ele;
}

function a(){
  function b() {
      return 3;
  }

  return b();

  function b() {
      return 8;
 }
} 

console.log(a());


function fun(...input){
  var sum = 0;
  for(var i = 0; i < input.length; i++){
      sum += input[i];
  }
  return sum;
}
console.log(fun(1,2,3,4,5)); 


function f(a,b = 1) {
  console.log(a*b)
}
var x = // some hidden  value
f(5,x)

var person = {
  name: "Jack",
  age: 50
};

setTimeout(function () {
  console.log("a")
},20)
setTimeout(function () {
  console.log("b")
})
console.log("c")

var d = {h: 2, j: 3}

var e = d
var f = {...d, j: 4}

console.log(f.h)
console.log(f.j)