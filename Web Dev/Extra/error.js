console.log('Hello')

let btn = document.getElementById('btn')
btn.addEventListener('click', function err() {
    let err = document.getElementById('error')
    err.textContent = "Something went wrong please try again"
})