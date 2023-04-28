var database=[
    {
        username:"Gaurav",
        password:"Gaurav@2001"
    },
    {
        username:"shivanshu",
        password:"123"
    },
    {
        username:"saumya",
        password:"456"
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
    
    function isvalid(username, password)
    {
        for(var i=0;i<database.length;i++)
        {
            if(username===database[i].username && password===database[i].password)
            {
                return true;
            }
        }
        return false;
    }
    
    function signin(username, password)
    {   
        if(isvalid(username, password))
        {
            console.log(newsfeed);
        }
        else
        {
            console.log("Wrong Username or Password");
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
    