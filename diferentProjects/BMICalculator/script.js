const form = document.querySelector('form')
form.addEventListener('submit', function(e)
{
    e.preventDefault();

    const height = parseInt(document.querySelector('#height').value)
    const weight = parseInt(document.querySelector('#weight').value)
    const result = document.querySelector('#results')

    if(height === '' || height < 0 || isNaN(height)){
        result.innerHTML = `please give a valid height ${height}`;
    }

    else if(weight === '' || weight < 0 || isNaN(weight)){
        result.innerHTML = `lease give a valid weight ${weight}`;
    }
    else{
       const BMI = (weight / ((height*height)/ 10000)).toFixed(2)
       if(BMI < 18.6)
       {
        result.innerHTML = `<strong>Under weight :- ${BMI}</strong>`;
       }
       else if(18.6 >= 24.9)
       {
        result.innerHTML = `<strong>Normal weight :- ${BMI}</strong>`;
       }
       else{
        result.innerHTML = `<strong>Over Weight -: ${BMI}</strong>`;
       }
        // result.innerHTML = `<span><b>${BMI}</span>`;
    }
});