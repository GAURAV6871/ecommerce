var database=[
{
    username:"Gaurav",
    password:"Gaurav@2001"
}
];

var newsfeed=[
    {
        username: "bobby",
        password: "so tired"
    },
    {
        username: "sally",
        password: "so cool"
    },

];

var username=prompt("Enter username");
var password=prompt("Enter password");



function signin(user, pass)
{
    if(username===database[0].username && pass===database[0].password)
    {
        console.log(newsfeed);
    }
    else
    {
        alert("Wrong Username or Password");
    }
}

signin(username, password);

/*
if(username==="Gaurav" && password==="Gaurav@2001")
{
    alert("Welcome");
}
else
{
    alert("Wrong Username or Password");
}*/
