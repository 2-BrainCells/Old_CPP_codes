const colors = ["green", "red", "blue", "rgba(100,100,100)"]
const btn = document.querySelector('#btn')
const color = document.querySelector('.color')

btn.addEventListener('click', function () {
    let randomNumber = Math.round(Math.random() * 3)
    console.log(randomNumber)
    color.textContent = colors[randomNumber]
    document.body.style.backgroundColor = colors[randomNumber]
})