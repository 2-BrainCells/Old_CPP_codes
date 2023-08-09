console.log('hello')

const daysEl = document.querySelector('#days')
const hoursEl = document.querySelector('#hours')
const minutesEl = document.querySelector('#minutes')
const secondsEl = document.querySelector('#seconds')

const newYears = '7 Aug 2022'

function countDown() {
    const newYearsDate = new Date(newYears)
    const currenDate = new Date()
    const seconds = ((newYearsDate - currenDate) / 1000)
    const showDays = Math.floor((seconds / 3600) / 24)
    const days = ((seconds / 3600) / 24)
    const showHours = Math.floor((days % 1) * 24)
    const hours = ((days % 1) * 24)
    const minutes = Math.ceil((hours % 1) * 60)
    const secondSeconds = Math.floor(seconds % 60)
    console.log(showDays, showHours, minutes, secondSeconds, seconds)

    daysEl.innerHTML = showDays
    hoursEl.innerHTML = check(showHours)
    minutesEl.innerHTML = check(minutes)
    secondsEl.innerHTML = check(secondSeconds)
}

function check(time) {
    return time < 10 ? (`0${time}`) : time
}
countDown();

setInterval(countDown, 1000)
