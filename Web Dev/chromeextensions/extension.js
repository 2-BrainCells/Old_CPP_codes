console.log('Hello')

let myLeads = []

const inputEl = document.querySelector('#input-el')
const ulEl = document.querySelector('#ul-el')
const inputBtn = document.querySelector('#input-btn')
const delBtn = document.querySelector('#del-btn')
const leadsfromlocalStorage = JSON.parse(localStorage.getItem("myLeads"))
console.log(leadsfromlocalStorage)
const tabBtn = document.querySelector("#tab-btn")

if (leadsfromlocalStorage) {
    myLeads = leadsfromlocalStorage
    render()
}

function render() {
    let listItems = ""
    for (let i = 0; i < myLeads.length; i++) {
        // listItems += "<li>" + "<a target = '_blank' href = '" + myLeads[i] + "'>" + myLeads[i]+ "</a>"+ "</li>" 
        listItems +=
            `<li>
            <a target = '_blank' href = ' ${myLeads[i]}'> 
                ${myLeads[i]} 
            </a>
        </li>`

    }
    ulEl.innerHTML = listItems
    inputEl.value = ""
}

inputBtn.addEventListener('click', function () {
    myLeads.push(inputEl.value)
    localStorage.setItem('myLeads', JSON.stringify(myLeads))
    render()
})

delBtn.addEventListener('click', function () {
    localStorage.clear();
    render()
    myLeads = []
    console.log('h')
})

tabBtn.addEventListener('click', function () {
    
    chrome.tabs.query({active: true, currentWindow: true}, function(tabs){
        myLeads.push(tabs[0].url)
        localStorage.setItem('myLeads', JSON.stringify(myLeads))
    render()
    })
    
})




