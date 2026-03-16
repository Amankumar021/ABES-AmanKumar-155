let user = {
    name : "Aman",
    age : 19,
    address : {
        city : "prayagraj",
        pincode: 210219,
    } 
};

console.log(user);

let usercopy = {...user};  // spread opertor

usercopy.address.city = 'mumbai';
console.log(usercopy);


