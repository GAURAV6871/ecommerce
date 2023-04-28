var button=document.getElementById("enter");
var input=document.getElementById("userinput");
var ul=document.querySelector("ul");

function inputlistener()
{
    return input.value.length;
}

function additems()
{
    var li=document.createElement("li");
    li.appendChild(document.createTextNode(input.value));
    ul.appendChild(li);
    input.value="";
}
button.addEventListener("click", function(){
    if(inputlistener()>0)
    {
        additems();
    }
})

input.addEventListener("keypress", function(event){
    if(inputlistener()>0  &&  event.keyCode===13)
    {
        additems();
    }
    
})