var todo=[ "clean room", "brush teeth", "exercise", "study javascript"
      , "eat healthy"];


for(var i=0;i < 5;i++)
{
    todo[i]=todo[i]+"!";
}

for(var i=0;i < 5;i++)
{
    console.log(todo[i]);
}

var count=0;
while(count<10)
{
	console.log(count);
	count++;
}


var counter=10;
do{
    console.log(counter);
    counter--;
}while(counter>0);
 

todo.forEach(function(i)
{
console.log(i);
})
