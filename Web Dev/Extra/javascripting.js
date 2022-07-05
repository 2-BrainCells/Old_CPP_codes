// document.getElementById('count-el').innerText = 5;

// let count = 0;
// console.log(count)

// let myAge = 19;
// console.log(myAge);

// let myAge = 19
// let humanDogRatio = 7;
// let myDogAge = myAge * humanDogRatio;
// console.log(myDogAge)

// let count = 3;
// count++;
// console.log(count);

// let bonusPoints = 50
// bonusPoints = bonusPoints - 25;
// bonusPoints = bonusPoints + 70
// console.log(bonusPoints)

// On click listner


// let btn = document.getElementById('increment-btn');
// btn.addEventListener('click', function increment() {
//     console.log('The button was clicked')
// })
// function lapCompletedtime() {
//     let lapCompleted = 0;
//     while (lapCompleted < 3) {
//         lapCompleted++
//         console.log(lapCompleted);
//     }
// }
// console.log(lapCompletedtime())

// let lap1 = 34;
// let lap2 = 33;
// let lap3 = 36;
// function laptimesum() {
//     let laptime = lap1 + lap2 + lap3
//     console.log(laptime);
// }
// console.log(laptimesum())


let count = 0;
let btn = document.getElementById('increment-btn');
btn.addEventListener('click', function increment() {
    count++;
    document.getElementById('count-el').textContent = count;
})
let save = document.getElementById('save-btn')
save.addEventListener('click', function save () {
    document.getElementById('save-el').textContent += count +  " - " ;  
    count = 0;
    document.getElementById('count-el').textContent = count
})
 
// let message = "You have three new messages";
// let username = " per ";
// console.log(message + username)

// let name1 = "Abhinav" , greetings = "Hi , my name is ";
// let myGreeting = greetings + name1;
// console.log(myGreeting)


let firstname = 'Abhinav'
let lastname = 'Aakash'

let fullname = firstname + " " + lastname
console.log(fullname)