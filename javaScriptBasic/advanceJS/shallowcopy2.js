let user = {
    name : "Aman",
    age : 19,
    address : {
        city : "prayagraj",
        pincode: 210219,
    } 
};

console.log(user);

let userCopy = Object.assign({},user);  // spread opertor
console.log(userCopy);

userCopy.name = "ankit";
userCopy.address.city = 'mumbai';
console.log(userCopy);
console.log(user);



