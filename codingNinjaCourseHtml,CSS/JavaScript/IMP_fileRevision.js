const array1 = [1, 2, 3];
const arr = [2, 3, 4, 21, 42, 43];
const firstElement = array1.shift();
// console.log(arr)
// console.log(arr.shift())
// console.log(arr)

// console.log(array1);
// Expected output: Array [2, 3]

// console.log(firstElement);
//
//**************************************Function**************************************//
  /// here r we use rest operator dot dot ddot(...) operator -> spread opreator and rest operator are look same it's work is change in deiffrent different situation it will convert into array 
function calculateCartPrice(...num1)
{
    return num1
}
console.log(calculateCartPrice(200, 400, 500));

const user = {
    userName : "Om kumar",
    price : 144,
}
function HandleObjrct(anyObject)
{
    console.log(`userName is ${anyObject.userName} and price is ${anyObject.price}`)
}
HandleObjrct(user)

HandleObjrct({

    userName: "H**II",
    price : 223,
})

const myArray = [212, 313, 433, 323];

function returnArrayIndex(getArray)
{
    return getArray[2];
}

console.log(returnArrayIndex(myArray))

//****************************************Scop****************************************//

let a = 10;
var b = 20;
const c = 30;

// console.log(a);
// console.log(b);
// console.log(c);


//*************************************************************************************//

const user1 = {
    userName: "Om Kumar",
    website : "YouTube",
    price : 299,

    welcomeMessage: function()
    {
        console.log(`Hello ${this.userName}, Welcome to Websit ${this.website}`)
    }
}
user1.welcomeMessage()
console.log(user1);

const addTwo = (num1, num2) => ({userName : "Om kumarrr"})

console.log(addTwo(2,3))