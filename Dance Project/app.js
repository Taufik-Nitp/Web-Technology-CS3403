const express = require("express");
const path=require("path");
const fs=require("fs");
const app= express();
const port=80;

app.use('/static',express.static('static'))  // for serving static files

app.use(express.urlencoded())

app.set('view engine','pug')    //set the template engine as pug
app.set('views',path.join(__dirname,'views')) //set the view directory

// app.get('/',(req,res)=>{
//     // const con="this is the best dance academy"
//     const params={ }
//     res.status(200).render('index.pug',params);
// })

app.get('/',(req,res)=>{
    // const con="this is the best dance academy"
    const params={ }
    res.status(200).render('home.pug',params);
})

app.get('/contact',(req,res)=>{
    // const con="this is the best dance academy"
    const params={ }
    res.status(200).render('contact.pug',params);
})

app.listen(port,()=>{
    console.log(`the application started successfully on port ${port}`);
});