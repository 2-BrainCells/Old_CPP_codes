// //document selector
// let a = window;
// console.log(a)

// // alert('Hello')

// // a = prompt('This will destroy your computer')

// // a = confirm('Are you sure you want to leave the page')
// a = innerHeight;
// a = innerWidth
// a = scrollX;
// a = location
// console.log(a);

// // DOM
// let b = document;
// b = document.all
// // b = document.body
// // b = document.forms;
// // Array.from(b).forEach(element => {
// //     console.log(element)
// // });
// b = document.links
// console.log(b)

// // Element Selector

// let c = document.getElementById('first');
// // c = document.getElementsByClassName('child')
// // c = c.childNodes
// // c = c.parentNode;
// // c = c.childNodes
// c.style.color = 'red';
// c.innerHTML = '<i>Harry is a good boy</i>'  // changes the text
// console.log(c.innerHTML);

// // query selector;

// //let   sel =  document.querySelector('#first')
// let sel = document.querySelector('.child')
// sel = document.querySelector('div')
// sel.style.color = 'green'
// console.log(sel)

// // multi selector

// let elems = document.getElementsByClassName('child')
// elems = document.getElementsByClassName('container')
// Array.from(elems).forEach(element => {
//     console.log(element)
// });
// console.log(elems)


// child parent and traversing in DOM

// let cont = document.querySelector('.child')
// cont = document.querySelector('.container')
// let nodetype = cont.childNodes[1].nodeType;
// let nodename = cont.childNodes[2].nodeName;
// console.log(nodename)
// console.log(nodetype);
// console.log(cont.childNodes);

/*
Node types

1. elements
2. attributes
3. text
8. Comments
9. document
10. doctype
*/

// let container = document.querySelector('.container')
// // console.log(container.children)

// // console.log(container.childElementCount)

// console.log(container.firstElementChild.parentNode)
// console.log(container.firstElementChild.nextSibling)
// console.log(container.firstElementChild.nextSibling.nextSibling)

// Creating removing and editing

// let element = document.createElement('li');
// element.className = 'chidli'
// element.id = 'idchild'
// element.setAttribute('title', 'mytitle')
// element.innerHTML = 'Hello'

// let ul = document.querySelector('ul.this')

// ul.appendChild(element)

// console.log(ul)
// console.log(element)

// //replace element

// let elems = document.createElement('h3')
// elems.id = 'elems2'
// elems.className = 'elems'
// let tnode = document.createTextNode('This is a created node for elems 2')
// elems.appendChild(tnode);

// element.replaceWith(elems)

// Events

// document.getElementById('heading').addEventListener(
//     'click', function(e){
//         console.log('you have clicked the heading')
//         console.log(e.target.classList );
//         // location.href =  '//google.com'
//     }
// );

// More on events

// let btn = document.getElementById('btn')
// // btn.addEventListener('click', func1)
// btn.addEventListener('dbclick', func2)

// // function func1(e)
// // {
// //     console.log("Thanks", e)
// //     e.preventDefault();
// // }
// function func2(e)
// {
//     console.log("Thanks its a double click", e)
//     e.preventDefault();

// }
// localStorage.clear();
// // Local Storage
// let impArry1 = ['hah', 'jjf','dsds'];
// localStorage.setItem('name', 'Abhinav')
// localStorage.setItem('name2', 'HUE HUE')

// clear storage

// localStorage.clear();

// clear particular key value

// localStorage.removeItem('name');
// localStorage.setItem('array',  JSON.stringify(impArry1));
// console.log(JSON.parse(localStorage.getItem('array')))


// //exercise 2

// let element = document.createElement('div')
// let heading = document.querySelector('#heading')
// element.addEventListener('click',function1)
// heading.appendChild(element);
// console.log(heading);

// function function1(e)
// {
//    e.addEventListener('text')
// }

//Math Operator
let x = 5;
let y = 3;
let z = x + y;

// Math Object
//   z = Math;
//   z = Math.PI;
//   z = Math.E;
//   z = Math.ceil(5.4)
//   z = Math.floor(5.4)
//  console.log(z)

// DATE OBJECT

// let today =  new Date();
// console.log(today);
// // let otherdate = new Date('05-23-2003 05:43:34');
// // let otherdate = new Date('August 2 2002')
// let otherdate = new Date('5/23/2003');
// let a 
// a = otherdate.getDay()
// a = otherdate.getDate()
// a = otherdate.getMinutes()
// a = otherdate.getTime()  
// console.log(a)
// otherdate.setDate(4);
// console.log(otherdate)


// Editable div

let divElem = document.createElement('div')

let val = localStorage.getItem('text')
let text;
if (val == null) {
   text = document.createTextNode('This is my element . Click here to edit')
}
else {
   text = document.createTextNode(val);
}
divElem.appendChild(text);
// Styling
divElem.setAttribute('id', 'elem')
divElem.setAttribute('class', 'elem')
divElem.setAttribute('style', 'border: 2px solid black; width 154px; margin:34px; padding:23px')

let container = document.querySelector('.container')
let first = document.getElementById('first')

container.insertBefore(divElem, first);
console.log(divElem, container, first)

divElem.addEventListener('click', function () {
   let notext = document.getElementsByClassName('textarea').length;
   if (notext == 0) {
      let html = elem.innerHTML
      divElem.innerHTML = `<textarea class="form-control textarea" id="textarea" rows="3"> ${html} </textarea>`;
   }
   let textarea = document.getElementById('textarea')
   textarea.addEventListener('blur', function () {
      elem.innerHTML = textarea.value;
      localStorage.setItem('text', textarea.value)
   })
})

