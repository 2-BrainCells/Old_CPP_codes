console.log('hello')
let songIndex = 0;
let audioElement = new Audio('song/1.mp3')
let masterPlay = document.getElementById('master-play')
let myProgressBar = document.getElementById('myProgressBar')
let songs = [
    { songName: "Let me love YOU", filePath: "song/1.mp3", coverPath: "cover/1.jpg" },
    { songName: "KSI - YOU", filePath: "song/2.mp3", coverPath: "cover/2.jpg" },
    { songName: "Rover - S1MBA", filePath: "song/3.mp3", coverPath: "cover/3.jpg" },
    { songName: "Londom BM", filePath: "song/4.mp3", coverPath: "cover/4.jpg" },
    { songName: "KSI - Sucks", filePath: "song/5.mp3", coverPath: "cover/5.jpg" }
]
let gif = document.getElementById('gif')
let songItem = Array.from(document.getElementsByClassName('songItem'))
let masterSongName = document.getElementById('masterSong')

masterPlay.addEventListener('click', function () {
    if (audioElement.paused || audioElement.currentTime <= 0) {
        audioElement.play()
        masterPlay.classList.remove('fa-play')
        masterPlay.classList.add('fa-pause')
        gif.style.opacity = 1
    }
    else {
        audioElement.pause()
        masterPlay.classList.add('fa-play')
        masterPlay.classList.remove('fa-pause')
        gif.style.opacity = 0
    }
})
audioElement.addEventListener('timeupdate', () => {
    console.log('timeupdate')
    progress = parseInt((audioElement.currentTime / audioElement.duration) * 100)
    console.log(progress)
    myProgressBar.value = progress
})

myProgressBar.addEventListener('change', function () {
    audioElement.currentTime = (myProgressBar.value * audioElement.duration) / 100
})

songItem.forEach((element, i) => {
    element.getElementsByTagName("img")[0].src = songs[i].coverPath
    element.getElementsByClassName("songName")[0].textContent = songs[i].songName
})
function makeAllPlays() {
    Array.from(document.getElementsByClassName('songItemPlay')).forEach((element) => {
        element.classList.remove('fa-pause')
        element.classList.add('fa-play')
    })

}
Array.from(document.getElementsByClassName('songItemPlay')).forEach((element) => {
    element.addEventListener('click', (e) => {
        console.log(e.target)
        makeAllPlays();
        masterSongName.innerHTML = songs[songIndex].songName
        index = parseInt(e.target.id)
        e.target.classList.remove('fa-play')
        e.target.classList.add('fa-pause')
        audioElement.src = `song/${index}.mp3`
        audioElement.currentTime = 0
        audioElement.play();
        masterPlay.classList.remove('fa-play')
        masterPlay.classList.add('fa-pause')
    })
})

document.getElementById('next').addEventListener('click', function () {
    if (songIndex >= 5) {
        songIndex = 0
    }
    else {
        songIndex += 1
    }
    audioElement.src = `song/${songIndex + 1}.mp3`
    masterSongName.innerHTML = songs[songIndex].songName
    audioElement.currentTime = 0
    audioElement.play();
    masterPlay.classList.remove('fa-play')
    masterPlay.classList.add('fa-pause')
})
document.getElementById('previous').addEventListener('click', function () {
    if (songIndex <= 0) {
        songIndex = 0
    }
    else {
        songIndex -= 1
    }
    audioElement.src = `song/${songIndex + 1}.mp3`
    masterSongName.innerHTML = songs[songIndex].songName
    audioElement.currentTime = 0
    audioElement.play();
    masterPlay.classList.remove('fa-play')
    masterPlay.classList.add('fa-pause')
})

