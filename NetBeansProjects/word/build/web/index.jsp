<%-- 
    Document   : index
    Created on : 23/10/2016, 00:33:01
    Author     : alexa
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<link rel="stylesheet" type="text/css" href="_css/meuestilo.css" >
<script language="JavaScript" src="_js/arquivo.js"></script>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Home</title>
</head>
<body>
<div id="interface" >


<header id="cabecalho">
   
<img id="fotojs"src="_img/logo2.png"  >
<hgroup>
    
<h1>Word Felix Informática</h1>
<h2>O Casco do Titanic foi projetado pelo Windows 95</h2>
</hgroup>
<hgroup> <% if (request.getAttribute("user") == null ){ %>
<center> Bem vindo Vamos !<a href="ServicosLogin.jsp">Entrar</a>  </center>
<% } 

%>
<% if (request.getAttribute("user") != null ){ %>
<center> Bem vindo  ! <%= request.getAttribute("user") %> |<a href="teste.jsp"> Sair</a>  </center>
<% } 

%>
 </hgroup>
<nav id="menu">
<ul>
<li onmouseover="mudafoto('_img/home.png')" onmouseout="mudafoto('_img/logo2.png')"><a href="index.jsp"> Home</a></li>
<li onmouseover="mudafoto('_img/default.png')" onmouseout="mudafoto('_img/logo2.png')"><a href="cadastro.jsp">Cadastro</a></li>
<li onmouseover="mudafoto('_img/Disk Tools.png')" onmouseout="mudafoto('_img/logo2.png')"><a href="ServicosLogin.jsp">Serviços</a></li>
<li onmouseover="mudafoto('_img/MSN Messenger Talk.png')" onmouseout="mudafoto('_img/logo2.png')"><a href="faleconosco.php">Fale Conosco</a></li>
<li onmouseover="mudafoto('_img/Info.png')" onmouseout="mudafoto('_img/logo2.png')"><a href="sobre.html">Sobre</a></li>
</ul>
</nav>

</header>

   
    
<section id="corpo">
<div id="moldura">
<ul>
<li> <img class="capa"src="_img/LOGO1.png"alt=""></li>    
<li><img class="capa"src="_img/logo4.png"alt=""></li> 
<li> <img class="capa"src="_img/2assa.png"alt=""></li>



</ul>
</div>
	
<hgroup id="baner" >
<hgroup id="ba2" >
   
    
      <h1>Uma empresa Virtual 
	Para que todas suas dúvidas e problemas 
	Sejam Tiradas e Resolvidos </h1>
                            <h1>Escolha o melhor Serviço para Sua Empresa !</h1>
                           </hgroup>
	    </hgroup>
</br></br>
<hgroup id="baner" >
<hgroup id="ba2" >
      <h1>Os melhores preços com qualidade e Rapidez diferenciada    !</h1>
                            <h1>Escolha o melhor Serviço para você !</h1>
                           </hgroup>
	    </hgroup>
		
</br></br>

<hgroup id="baner" >
<hgroup id="ba2" >
       <h1>==> Cada vez que você indica a Empresa ganhe 30% em qualquer Serviço  <==</h1>
                            <h1>Escolha o melhor Serviço para você !</h1>
                           </hgroup>
	    </hgroup>	   
</section>


</form>
</br>
</br>
</br>
</br></br>

<footer id="rodape">


   <p> Copyright &copy; 2016 - by Alexandre Felix Menezes<br></p>
       <p> <a href="https://www.facebook.com/alexandre.felix.923" target="_blank"><img id="qq" src="_img/facebook_alt.png"/></a></p>
	
		
  </footer>
</div>        
        
        
        
    </body>
</html>
