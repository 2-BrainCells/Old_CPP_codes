console.log('Hello')

let num1 = 3
let num2 = 9
document.getElementById('num1-el').textContent = num1
document.getElementById('num2-el').textContent = num2
let op = document.getElementById('sum-el')

let add = document.getElementById('Add')
add.addEventListener('click', function add() {
    let addition = num1 + num2
    op.textContent = "Operation " + addition
})

let sub = document.getElementById('Subtract')
sub.addEventListener('click', function sub() {
    let subtraction = num1 - num2
    op.textContent = "Operation " + subtraction
})

let mul = document.getElementById('Multiply')
mul.addEventListener('click', function mul() {
    let multiplication = num1 * num2
    op.textContent = "Operation " + multiplication
})

let div = document.getElementById('Divide')
div.addEventListener('click', function div() {
    let division = num1 / num2
    op.textContent = "Operation " + division
})