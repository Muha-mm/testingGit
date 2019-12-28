let clock = document.getElementById('clock');
let color = document.getElementById('hesh');

function nu(){
    let time = new Date()
    let hour = time.getHours().toString();
    let minutes = time.getMinutes().toString();
    let seconds = time.getSeconds().toString();
    

    if(hour.length<2){hour = '0'+ hour}
    if(minutes.length<2){minutes = '0'+minutes}
    if(seconds.length<2){seconds = '0'+seconds}


    
    let clockString = hour + ':' + minutes + ':' + seconds;
    let colorString = '#' + hour + minutes + seconds;

    clock.textContent = clockString;
    color.textContent = colorString;

    document.body.style.background = colorString;


}
nu()
setInterval(nu,1000)














