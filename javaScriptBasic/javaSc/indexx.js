console.log("zero");



// for(i =0; i<50; i++){
    //     console.log(i + "  " + "two")  
    //     // console.log("Two")
    // }
    // console.log("two");
    
    
    // setTimeout(() => {
    //    console.log("two");
        
    // }, 1000);

setTimeout(()=>{
    console.log("one");
    setTimeout(() => {
        console.log("two");
        setTimeout(()=>{
            console.log("Three");
            setTimeout(()=>{
                console.log("four");
                setTimeout(()=>{
                    console.log("five");
                    
                },1000)
            },1000)
        },1000)

    }, 1000);
    
},1000)



console.log("six");
