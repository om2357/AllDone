console.log("Array With Loop");

let num = [29, 3, 23, 32, 43, 11];

for(let i = 0; i < num.length; i++)
{
    console.log(num[i])
}
 
// for each loop

num.forEach((element) =>
{
    console.log(element*element)
})

// Array.from used to create an Array from any other object

let name = "Sonu"

let arr = Array.from(name)
console.log(arr) 

//for ... of loop

for(let i of num)
{
    console.log(i)
}

// map is create a new array but but for each does't

let arr1 = [32,43,43,453,11,31] 
let a = arr1.map((number)=>
{
   return number + 2
})
console.log("This can create a new array -->",a)


let arr2 = [32,43,43,453,11,31] 
let b = arr1.map((number, array, index)=>
{
    //we can also pass this arguments
    console.log(number, array, index)
   return number + 2
})
console.log("This can create a new array -->",b)

// filter function

let arrrr = [23,43,54,65,23,34]
let a2 = arrrr.filter((a)=>
{
    return a<45
})
console.log("hii",a2)

