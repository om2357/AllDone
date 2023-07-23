// for(let i = 0; i<30; i++)
// {
//     console.log(i);
// }

// for in loop

let obj = 
{
    harry: 93,
    Om: 88,
    rahul: 72,
    roshan: 71
}
for(let a in obj)
{
    console.log("Marks Of ", a,"are --> ",obj[a]) 
}
for(let a of "obj")
{
    console.log("Marks Of ", a,"are --> ",obj[a]) 
}

// while Loop
let i = 0;
let num = 20;
while(i <= num)
{
    console.log(i)
    i++;
}

let a = 0;
let b = 20;

do
{
    console.log("do while Loop ->",a);
    a++
}while(a<b)
