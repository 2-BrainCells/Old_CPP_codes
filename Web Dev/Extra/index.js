// console.log('Hello console')
// console.log(23 + 443)
// console.log(45)
// console.log(true)
// console.log([21,3,4,6,3])
// console.log({harry : 'this'})
// console.table({harry : ' this', marks : 34})
// // console.warn('this is a warinig')
// console.time('your code');
// // console.assert(2342 < 189 , 'this is not possible')
// // console.error('This is an error');
// console.timeEnd('your code')
console.log('index.js');
// variable in js
/*
declartation
var , let , const
*/
var name = 'he heu';
var channel = 'Code with harry';
var marks = 2342
console.log(name, channel);
console.log(marks);
/*
case sensitive 
can start with letter number or $
cannot start with numbers
*/
var $city = ' Delhi'
console.log($city)

const ownersname = 'HUE HUE';
// ownersname = 'hrhr'; bug
console.log(ownersname);
const fruit = 'GHHG';
console.log(fruit);

// LET 

// block level scope

{
    let city = 'Ghaziabad'
    console.log(city);
}


const arr1 = [12, 43, 53, 53];
arr1.push(343);
console.log(arr1);

/*
most common case types in js
camel case 
kabab case
snake case
pascal case
*/

// primitive data types
/** 
 * sting*/
let name1 = "harry";
console.log("my string is " + name1);
let marks1 = 34;
console.log("Data type is " + marks1);
let nullptr = null;
console.log(typeof nullptr)
let undef = undefined;
console.log("undef " + typeof undef);
let myarray = [2, 4, 45, 3, 5, 6, "strig", false]
console.log(myarray);

// object literals

let marks3 = {
    harry: 56,
    shubam: 43,
    Rohan: 65
}
console.log(marks3)

function findname() {

}
// let date = new date();
// console.log(typeof date);

// type converstion and type coersion
console.log('Welcome to Js');
let myvar;
myvar = String(56);
console.log(myvar, typeof myvar);

let bool = true;
console.log(bool)

let date = new Date()
console.log(date);

let myarr1 = String([12, 23, 4, 53])
console.log(myarr1);

let str1 = Number(true);
console.log(str1, typeof str1);

// Parse int
let number = parseInt(78.9564);
console.log(number, typeof number);

const name4 = "Harry";
const greeting = "Good Morning";
console.log(greeting + ' ' + name4);

let html = '<h1> This is heading </h1>';
console.log(html);

html = html.concat(' this is ', html);
console.log(html);

console.log(html[1]);

let hml = 'this is a function of numbers'
console.log(hml.indexOf('s'))
console.log(hml.lastIndexOf('s'))
console.log(hml.charAt(6));
console.log(hml.endsWith('s'))

console.log(hml.substring(7, 12))
console.log(html.split(' '))
console.log(hml.replace('this', 'it'));

let myhtml = `Hello ${name4}`;
let fruits = 'Apple'
let fruits1 = 'Orange'

const marks45 = [34, 65, 45, 48, 89, 67]
const fruits2 = ['Orange', ' Apple', 'Pineapple']
const mixed = ['str', 34, [5, 7]]
const arr = new Array(23, 45, ' Orange');
console.log(arr);
console.log(marks45);
console.log(fruits2);
console.log(arr.length)

let value = marks45.indexOf(89);
console.log(value);

// mutating array;
marks45.push(35);
console.log(marks45);

// at start
marks45.unshift(23);
console.log(marks45);

// removing elements
marks45.splice(3, 6);
console.log(marks45);

// reverse
marks45.reverse();
console.log(marks45)

let obj = {
    name: ' harry',
    channel1: 'Codewithharry',
    isaActive: true,
    marks9: [32, 534, 34, 3234, 2]
}

// if  else and switch case
const age = 910;
if (age == 90) {
    console.log(' The age is 90');
}
else {
    console.log('The age is not ninty');
}

const age1 = '45';
if (age1 === 45)
    console.log('The age is 45')
else
    console.log('The age is not 45')
// !== AGE AND DATA TYPE WILL NOT MATCH

const var1 = 12;
if (typeof var1 !== 'Undefined')
    console.log('defined')
else
    console.log('undefined')

//for boolean statements 
const var2 = false;
if (var2)
    console.log('you can not drive');
else
    console.log('you can not drive')

const age4 = 45;
console.log(age4 == 45 ? 'You can drive' : 'you cannot drive')

const age6 = 18
switch (age6) {
    case 18: console.log("You are 18")
        break;
    case 67: console.log("You are 67")
}

// loops
for (let i = 0; i < 10; i++) {
    console.log(i);

}

//iteration through an array

arr5 = [1, 3, 4, 6, 7, 8, 9]
arr5.forEach(element => {
    console.log(element)

});

//functions

function greet(name7)
{
    console.log(`Happpy Birthday ${name7}`)
}
greet('hfdjfk  ')