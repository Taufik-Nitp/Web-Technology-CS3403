let main= document.getElementById('main');
console.log(main);
let container =document.getElementsByClassName('container');
console.log(container);

function toggleHide(){
//  let btn=document.getElementById('btn');
 let para=document.getElementById('para');
  if(para.style.display!='none'){
     para.style.display='none';
 }else{
    para.style.display='block';
 }      
}

function time(){
    // console.log(new Date);
    
    document.getElementById('gettime').innerHTML=new Date();
   }
setInterval(time,1000);