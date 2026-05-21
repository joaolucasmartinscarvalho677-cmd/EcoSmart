function gerarEnergia(){

let energia =
Math.floor(Math.random() * 100);

document.getElementById("energia")
.innerHTML = energia + "%";

if(energia >= 50){

document.getElementById("status")
.innerHTML =
"Energia Solar Estável";

}else{

document.getElementById("status")
.innerHTML =
"Baixa geração de energia";

}

}
