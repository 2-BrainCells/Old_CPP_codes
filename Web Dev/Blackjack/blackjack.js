console.log('Hello')

let firstcard = randomCard()
let secondcard = randomCard()
let sum = firstcard + secondcard
let totalCards = [firstcard, secondcard]

let hasBlackjack = false
let isAlive = false
let message = ""
let messageEl = document.getElementById('message-el')
// let sumEl = document.getElementById('sum-el')
let sumEl = document.querySelector('#sum-el')
let cardEl = document.querySelector('#cards-el')

let startBtn = document.getElementById('start-btn')

let player = {
    Name: "Abhinav",
    Chips: 143
}

let playId = document.querySelector('#credentials')
playId.textContent = player.Name + ": $ " + player.Chips

function randomCard() {
    let randomNumber = Math.round(1 + Math.random() * 13)
    if (randomNumber === 1) {
        return 11
    } else if (randomNumber >= 11 && randomNumber <= 13) {
        return 10
    } else {
        return randomNumber
    }
}
function startGame() {
    isAlive = true
    renderGame()
}
startBtn.addEventListener('click', function renderGame() {
    cardEl.textContent = "Cards: "
    for (let i = 0; i < totalCards.length; i++) {
        cardEl.textContent += totalCards[i] + " ";
    }
    sumEl.textContent = "Sum" + ": " + sum
    if (sum <= 20) {
        message = "Do you draw a new card? 🙂"
    }
    else if (sum === 21) {
        message = "Woohoo! You've got Blackjack !! 😆"
        hasBlackjack = true
    }
    else {
        message = "You'r out of the game! 😢"
        isAlive = false
    }
    messageEl.textContent = message
    console.log(message)
})

let newCard = document.getElementById('new-card')
newCard.addEventListener('click', function newCard() {
    if (isAlive = true && sum <= 21) {
        let cards = randomCard()
        sum += cards
        cardEl.textContent += " " + cards
        sumEl.textContent = "Sum: " + sum
        totalCards.push(cards)
        console.log(totalCards)
        renderGame();
    }
    else {
        let isEnd = document.querySelector('#game-ended')
        isEnd.textContent = "GAME ENDED"

    }
})

