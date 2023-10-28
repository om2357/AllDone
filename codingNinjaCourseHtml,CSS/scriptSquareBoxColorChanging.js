const button = document.querySelectorAll('.buttons');
console.log(button)

const body = document.querySelector("body");

button.forEach(function(buttons){
    console.log(button);
    buttons.addEventListener('click', function(e){
        // console.log(e);
        console.log(e.target);
        if(e.target.id ==='black'){
            body.style.backgroundColor = e.target.id;
        }
        if(e.target.id === 'white')
        {
            body.style.backgroundColor = e.target.id;
        }
        if(e.target.id === 'orange')
        {
            body.style.backgroundColor = e.target.id;
        }
        if(e.target.id === 'yellowgreen')
        {
            body.style.backgroundColor = e.target.id;
        }
    })
});