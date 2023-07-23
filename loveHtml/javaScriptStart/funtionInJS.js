function om(a, b, c)
{
    console.log("Average of tree numbers is -> ", (a+b+c)/3)
    console.log("Done")
}
// some other type of function is --> Arrow function  

const sum = (x,y) =>
{
    console.log("Arrow Function => ", (x+y))
    return x + y

}

let a = 10;
let b = 10;
let c = 10;

om(a,b,c)
console.log()
console.log(sum(a,b))