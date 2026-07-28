const mypromiseZ = new Promise((resolve, reject)=>{
    const username = "amanChai_wala";
    const password = "556655";

    if(username == "amanChai_wala" && password == "556655"){
        resolve("login success");
    }else{
        reject("invalid entry");
    }
})




async function orderconfirmation() {
    try{

        const data = await mypromiseZ;
        console.log(data);

        if(data == "login success"){
            const mypromise = new Promise((resolve, reject)=>{
            // const username = "amanChai_wala";
            const order = "paneer_bhurji";

            if(order == "paneer_bhurji"){
                resolve("order accepted");
            }else{
                reject("Order rejected");
            }
    });
    const ordermsg = await mypromise;
    console.log(ordermsg);
}
}catch(data){
        console.log(data);
        
    }finally{
        console.log("order will arrive shortly");
        
        setTimeout(() => {
            console.log("order be delivered");
            
        }, 6000);
    }
}

orderconfirmation();