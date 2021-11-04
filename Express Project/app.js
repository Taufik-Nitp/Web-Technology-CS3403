const express =require("express");
const path =require("path");
const app= express();
const fs=require("fs");


const mongoose = require('mongoose');

main().catch(err => console.log(err));

async function main() {
  await mongoose.connect('mongodb://localhost:27017/flipkart');
}

const kittySchema = new mongoose.Schema({
    name: String,
    age: String,
    gender: String,
    more: String,
    adress:String
  });

  const Kitten = mongoose.model('Kitten', kittySchema);


//   const silence = new Kitten({ name: 'Silence' });
// console.log(silence.name); 


// kittySchema.methods.speak = function speak() {
//     const greeting = this.name
//       ? "Meow name is " + this.name
//       : "I don't have a name";
//     console.log(greeting);
//   };
  


//   const fluffy = new Kitten({ name: 'fluffy' });

// fluffy.save();



const kittens = Kitten.find({name:"Saif Alam"});
console.log(kittens);









// for serving the static file 
app.use('/static',express.static('static'))
app.use(express.urlencoded())


//set the template engine as pug
app.set('view engine', 'pug')
//   // set the view directory 
app.set('views',path.join(__dirname, 'views')) 

app.get("/",(req, res)=>{

    const con="this is the best content"
    const params={'title':'pubg is the best game',"content":  con} 
    res.status(200).render('index.pug',params);
})

app.post('/',(req,res)=>{
     
       names = req.body.names
       age=req.body.age
       gender=req.body.gender;
       more=req.body.more
       adress=req.body.adress

       const fluffy = new Kitten({ name: `${names}` , age: `${age}` ,gender:`${gender}`,more:`${more}`,adress:`${adress}`});
       fluffy.save();
       let str=`the name of the custmomer is ${names},and he is :${age}, years old and gender is: ${gender}, more about him : ${more}, and adress is: ${adress}`
       fs.writeFileSync("output.txt",str);
       const params={'message':'your form has been submitted successfully'}
       res.status(200).render('index.pug',params);
})




app.listen(80,()=>{
    console.log("the app is running on the port 80...");
})

