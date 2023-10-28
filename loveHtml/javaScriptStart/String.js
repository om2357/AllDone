let name = "om Kumar"
let naam = 'Om kumkar'
console.log(name[0])
console.log(name[1])
console.log(name[2])
console.log(name[3])
console.log(name[4])
console.log(name)
console.log(name.length)
console.log(naam)

// Template Literals

let boy1 = "pramod"
let boy2 = "nikhil"
console.log(`boy1 is friend of boy2`)
console.log(`${boy1} is friend of ${boy2}`)

// Escape Sequence Character

let fruit = `Banana's`
let fruit2 = 'Banana\'s'
let fruit3 = "Banana's"
let fruit4 = "Banana\n's"
let fruit5 = 'Banana\ns'
let fruit6 = "Banana\ns"
let fruit7 = "Banana\ts"
let fruit8 = "Banana\rs"
console.log(fruit)
console.log(fruit2)
console.log(fruit3)
console.log(fruit4)
console.log(fruit5)
console.log(fruit6)
console.log(fruit7)
console.log(fruit8)


let Me = "Om_kumar\""
console.log(Me)
console.log(Me.length) //Length is Property

console.log("All convert In Upper Case -->",Me.toUpperCase()) //toUpperCase is Function
console.log("All convert In Lower Case -->",Me.toLowerCase()) //toLowerCase is Function

console.log(Me.slice(2,4)) // Starting from 2nd(Second Index), End Is Less then 1(4-1) so 3
//Print from 2nd index to 3rd Index (It cut All other index and show only spacific index)

console.log(Me.slice(2))// If i don't spacify Second index then it will print 2nd to Lasr Index  

console.log(Me.replace("Om", "Dom"))
let hi = "Roshan"
console.log(hi.concat(" Is a friend of ", Me))


let otherName = "         Om kumar            "
console.log(otherName)
console.log(otherName.trim())

