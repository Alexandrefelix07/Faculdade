/* global Persistence, pessoa, cliente, request */

/**
 * Created by TRABALHO on 10/06/2015.
 */
function mudafoto (fotos) {
    document.getElementById("fotojs").src = fotos;
}
function formatar(mascara, documento){
  var i = documento.value.length;
  var saida = mascara.substring(0,1);
  var texto = mascara.substring(i)
  
  if (texto.substring(0,1) != saida){
            documento.value += texto.substring(0,1);
  }
  
}


function confirma() {
if(document.f1.senha.value != document.f1.senha2.value) {
alert("Senha Diferente !");
return false;
}
}


