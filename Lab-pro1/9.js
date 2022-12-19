function fact(){
    let x=document.getElementById("text").value
    let fact=1,i;
    for(i=x;i>=1;i--){
        fact=fact*i;
    }
    document.getElementById("text").value=fact;
}

let arms=document.getElementById("arms")
arms.addEventListener('click',function(){
    let x=document.getElementById("text").value
    let rem,sum=0,q;
    while (x>0){
        let n=x;
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if (sum==x){
        // document.getElementById("text").value=document.write("Armstrong");
        document.getElementById("text").value="text123"
    }
    else{
        document.getElementById("text").value=document.write("Not Armstrong");

    }

})