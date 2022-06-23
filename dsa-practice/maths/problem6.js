const bmr = (gender,weight,height,age) => {
    let clbmr = 10*weight + 6.25*height + 5*age;
    if(gender ==="male"){
        return clbmr+5
    }
    else{
        return clbmr - 161
    }
}
console.log(bmr("male",47,5.5,20))