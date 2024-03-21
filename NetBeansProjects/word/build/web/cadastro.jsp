<%-- 
Document   : cadastro
Created on : 23/10/2016, 19:23:41
Author     : alexa
--%>



<%@page import="java.text.SimpleDateFormat"%>
<%@page import="java.text.DateFormat"%>
<%@page import="javax.persistence.Persistence"%>
<%@page import="entidade.Cliente"%>
<%@page import="entidade.Pessoa"%>
<%@page import="javax.persistence.EntityManager"%>
<%@page import="javax.persistence.EntityManagerFactory"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
  
<head>
<link rel="stylesheet" type="text/css" href="_css/form.css" >
<link rel="stylesheet" type="text/css" href="_css/meuestilo.css" >
<script language="JavaScript" src="_js/arquivo.js"></script>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Cadastro</title>
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
<li onmouseover="mudafoto('_img/Info.png')" onmouseout="mudafoto('_img/logo2.png')"><a href="sobre.html">Sobre</a></li><br><br>
</ul>
</nav>
  
</header>  
       
<section id="corpo"><br>

<form action="perfil.jsp" method="post" name="f1" onSubmit="return confirma()">
<!-- DADOS PESSOAIS-->

<fieldset id="user">
    
<legend>Dados Pessoais</legend>
<table cellspacing="1">
   
<tr>
<td><label for="nome">Nome: </label></td><td align="left">
<input required type="text" name="nome"  size="45" /></td>
</tr>  
<tr>
<td>
<label>Sexo: </label>
<td >
<input required type="radio" name="sexo" value="Masculino" id="sexo1" checked="Masculino">
<label class="as"  for="sexo1">Masculino</label>
<input type="radio" name="sexo" value="Feminino"  id="sexo2" >
<label class="as"   for="sexo2" >Feminino</label>
</td>  
</tr>
<tr> 
    <td><label for="datNasc">Nascimento: </label></td>  
<td align="left">  
<input size="14" required type="text" name="datNasc"  maxlength="10" 
value="${pessoa.dataFormatada }"placeholder="00/00/0000" OnKeyPress="formatar('##/###/####', this)" />

</td>
</tr>
<tr>
<td>
<label for="rg">RG: </label>
</td>
<td align="left">
<input required type="text" name="rg" size="14" maxlength="25"> 
</td>
</tr>
<tr>
<td>
<label for="cpf">CPF:</label>
</td>
<td align="left">
<input required type="text" name="cpf" size="14" maxlength="14" placeholder="000.000.000-00" OnKeyPress="formatar('###.###.###-##', this)" >	 
</td>
</tr>
<tr>
<td>
<label for="telefone" >Tel.Cel:</label>
</td>
<td align="left">
<input required  type="tel" name="telefone" size="14" maxlength="13" placeholder="99-99999-9999" OnKeyPress="formatar('##-#####-####', this)" >
</td>
</tr>
<tr>
<td>
<label for="cemail" >E-mail: </label>
</td>
<td align="left">
<input type="email" name="cemail" placeholder="Exemplo@.com" size="45" maxlength="90" >
</td>
</tr>
</table>
</fieldset>
<br />
<!-- ENDEREÇO -->
<fieldset id="user" >
<legend>Dados de Endereço</legend>
<table cellspacing="10">

<tr>
<td>
<label for="rua">Rua:</label>
</td>
<td align="left">
<input type="text" name="endereco">
</td>
<td>
<label for="numero">Numero:</label>
</td>
<td align="left">
<input type="text" name="numero" size="4">
</td>
</tr>
<tr>
<td>
<label for="bairro">Bairro: </label>
</td>
<td align="left">
<input type="text" name="bairro">
</td>
</tr>
<tr>
<td>
<label for="estado">Estado:</label>
</td>
<td align="left"  >
<select name="estado"> 
<option value="ac">Acre</option> 
<option value="al">Alagoas</option> 
<option value="am">Amazonas</option> 
<option value="ap">Amapá</option> 
<option value="ba">Bahia</option> 
<option value="ce">Ceará</option> 
<option value="df">Distrito Federal</option> 
<option value="es">Espírito Santo</option> 
<option value="go">Goiás</option> 
<option value="ma">Maranhão</option> 
<option value="mt">Mato Grosso</option> 
<option value="ms">Mato Grosso do Sul</option> 
<option value="mg">Minas Gerais</option> 
<option value="pa">Pará</option> 
<option value="pb">Paraíba</option> 
<option value="pr">Paraná</option> 
<option value="pe">Pernambuco</option> 
<option value="pi">Piauí</option> 
<option value="rj">Rio de Janeiro</option> 
<option value="rn">Rio Grande do Norte</option> 
<option value="ro">Rondônia</option> 
<option value="rs">Rio Grande do Sul</option> 
<option value="rr">Roraima</option> 
<option value="sc">Santa Catarina</option> 
<option value="se">Sergipe</option> 
<option value="sp">São Paulo</option> 
<option value="to">Tocantins</option> 
</select>
</td>
</tr>
<tr>
<td>
<label for="cidade">Cidade: </label>
</td>
<td align="left">
<input type="text" name="cidade">
</td>
</tr>
<tr>
<td>
<label for="cep">CEP: </label>
</td>
<td align="left">
<input required type="text" name="cep" size="9" maxlength="9" placeholder="00000-000" OnKeyPress="formatar('#####-###', this)" ></td>
</tr>
</table>
</fieldset>
<br />

<!-- DADOS DE LOGIN -->
<fieldset id="user">
<legend>Dados de login</legend>
<table cellspacing="10">
<tr>
<td>
<label for="imagem">Imagem de perfil:</label>
</td>
<td>
<input type="file" name="imagem" >

</td>
</tr>
<tr>
<td>
<label for="login">Login de usuário: </label>
</td>
<td align="left">
<input type="email" name="login" size="45" maxlength="40" placeholder="Exemplo@123 ">
</td>
</tr>
<tr>
<td>
<label for="pass">Senha: </label>
</td>
<td align="left">
<input required type="password" name="senha" size="20" maxlength="20">
</td>
</tr>
<tr>
<td>
<label for="passconfirm">Confirme a senha: </label>
</td>
<td align="left">
<input  required type="password" name="senha2"size="20" maxlength="20">
</td>
</tr>

</table>
</fieldset>
<br />
<input class="c"  type="reset"  value=" Limpar tudo " />
<input  class="c" type="submit" value=" Salvar  " name="enviarFormulario2" />
</form>
  
</section>

<footer id="rodape">


   <p> Copyright &copy; 2016 - by Alexandre Felix Menezes<br></p>
       <p> <a href="https://www.facebook.com/alexandre.felix.923" target="_blank"><img id="qq" src="_img/facebook_alt.png"/></a></p>
	
		
  </footer>
    </div>
</body>
</html>
