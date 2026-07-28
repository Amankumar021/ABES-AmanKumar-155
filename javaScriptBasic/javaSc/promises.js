// const mypromise =new Promise((resolve, reject)=>{
//     const username = "aman_kumar";
//     const password = "12345";

//     if(username == "aman_kumar" && password == "12345"){
//         resolve("succesfully logged in.");
//     }else{
//         reject("invalid entry");
//     }
// })

// mypromise.then((msg)=>{
//     console.log(msg);
// }).catch((msg)=>{
//     console.log(msg);
// }).finally(()=>{
//     console.log("All done");
// })

const mypromise =new Promise((resolve, reject)=>{
    // const username = "aman_kumar";
    const number = 10;

    if(number%2 == 0){
        resolve("Number is even"); // msg
    }else{
        reject("number is odd"); // msg
    }
})

// mypromise.then((msg)=>{
//     console.log(msg); 
// }).catch((msg)=>{
//     console.log(msg);
// }).finally(()=>{
//     console.log("All done");
// })


async function handleData(){
    try{
        const data = await mypromise ;
    }catch(err){
        console.log(err);
    }finally{
        console.log("all done");
        
    }
}

handleData(); 