// in java Script we can store more then one type of values :- like number,, Null, String any thing
let a = [2, 3, 4, 5, 33, null, false, "NotPresent"];
console.log(a[0]);
console.log(a[1]);
console.log(a[2]);
console.log(a[3]);
console.log(a[4]);
console.log(a[5]);
console.log(a[6]);
console.log(a[7]);
console.log("Length of array is --> ", a.length);
console.log(a);

for (let i = 0; i < a.length; a++) {
  console.log(a);
}

// Some Array Methods

let num = [2, 4, 45, 53, 21];
console.log(num);
let convertInString = num.toString(); // Num is converted into the String
console.log(convertInString);

// Join Method

let c = num.join("-");
console.log(c); //Output --> 2-4-45-53-21
// so now c Also A String
console.log(typeof c);

// What is pop -->

/*let r = num.pop()
console.log(num,"Pop element is --> ", r)
console.log(num)*/

// What is push

/*num.push(3333)
console.log("New array Using Push method -->",num)
*/

// Shift methods is remove first element and modified original array

let r = num.shift();
console.log(r, " <-- Here 2 Will Remove from Orignal Array ", num);

// and In same unShift will Add in Original Array

let s = num.unshift(324656);
console.log(s, " <-- b Add It Will Return Array New Length ", num);

//  sort function
let compare = (a, b) => {
  return a - b;
};

let h = [32, 42, 2321, 42, 42, 21, 42, 1111];
console.log("Currently this will not Shorted -->", h);
let gya = h.sort();
console.log(
  "Now this will sort the array but this will Sort alphabaticaly -->",
  h
);

// if i want to sort then we have to wright a comapre function

console.log(h.sort(compare));

// reverse Function this will reverse the whole array and it can effact real array

h.reverse();
console.log("This is reversed Array --> ", h);

// splice and slice

let ff = [3, 43, 4, 54, 21, 54, 4, 5];
//in this first element is start where to start and second elemnt is end and after those numbers are added in array
let deletedArray = ff.splice(2, 3, 32232, 43434, 34344);
console.log("This are deleted array --> ",deletedArray)
console.log(ff)
