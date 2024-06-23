const someF = () => {
  return 1;
}

// Create a function named createBase that would allow you to do this: 
var i = 0;
const createBase = (x) => {
  i = i + x;
  console.log(i);
}
createBase(7);
var addSeven = (x) => createBase(x);
addSeven(10); // logs 17 to the console
addSeven(3); // logs 20 to the console

//
// let isArray = Array.isArray()
// let str = "Abhay";
// console.log(str[0]);

// // const { 1, 2, 3, 4} = object;
