<%-- 
Document   : perfil
Created on : 24/10/2016, 01:46:57
Author     : alexa
--%>






<%@page import="java.io.FileInputStream"%>
<%@page import="java.io.File"%>
<%@page import="java.sql.Date"%>
<%@page import="java.text.SimpleDateFormat"%>
<%@page import="entidade.Cliente"%>
<%@page import="entidade.Pessoa"%>
<%@page import="java.text.DateFormat"%>
<%@page import="javax.persistence.EntityManagerFactory"%>
<%@page import="javax.persistence.EntityManager"%>
<%@page import="javax.persistence.Persistence"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <%!
        EntityManagerFactory emf;
        EntityManager em;
        Pessoa pessoa;
        Cliente cliente;
    %> 
   
    <head>
        <link rel="stylesheet" type="text/css" href="_css/form.css" >
       <link rel="stylesheet" type="text/css" href="_css/meuestilo.css" >
       <script language="JavaScript" src="_js/arquivo.js"></script>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
   
        <title>Perfil</title>
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
                        <li onmouseover="mudafoto('_img/Disk Tools.png')" onmouseout="mudafoto('_img/logo2.png')"><a href="servicos.html">Serviços</a></li>
                        <li onmouseover="mudafoto('_img/MSN Messenger Talk.png')" onmouseout="mudafoto('_img/logo2.png')"><a href="faleconosco.php">Fale Conosco</a></li>
                        <li onmouseover="mudafoto('_img/Info.png')" onmouseout="mudafoto('_img/logo2.png')"><a href="sobre.html">Sobre</a></li>
                </nav>
            </header>
            <br>   
       <section id="corpo"><br>   
          
           <%
       
   emf = Persistence.createEntityManagerFactory("wordPU");
            em = emf.createEntityManager();
        
            pessoa = new Pessoa();
            cliente = new Cliente();
         
        
            pessoa.setNome( request.getParameter("nome") );
            pessoa.setSexo( request.getParameter("sexo"));
            String dataString = request.getParameter("datNasc");
            DateFormat fmt = new SimpleDateFormat("dd/MM/yyyy");
            java.sql.Date data = new java.sql.Date(fmt.parse(dataString).getTime()); 
            pessoa.setDatNasc(data);
            pessoa.setRg(request.getParameter("rg"));
            pessoa.setCpf(request.getParameter("cpf"));
            pessoa.setTelefone(request.getParameter("telefone"));
            pessoa.setCemail(request.getParameter("cemail"));
            pessoa.setEndereco(request.getParameter("endereco"));
            pessoa.setNumero(request.getParameter("numero"));
            pessoa.setBairro(request.getParameter("bairro"));
            pessoa.setEstado(request.getParameter("estado"));
            pessoa.setCidade(request.getParameter("cidade"));
            pessoa.setCep(request.getParameter("cep"));
            java.util.Date d1 = new java.util.Date();  
            java.sql.Date d2 = new java.sql.Date(d1.getTime());
            pessoa.setDtcad(d2);           
            cliente.setDtcad(d2);
            cliente.setLogin(request.getParameter("login"));
            cliente.setSenha(request.getParameter("senha"));
            
            
        
            em.getTransaction().begin();
            em.merge(pessoa);
            em.merge(cliente);
            em.getTransaction().commit();
            
           %> 
    
         
        
    
   <form action="perfil1.jsp" method="post" name="f1" onSubmit="return confirma()">
    
     
       
         <fieldset id="user">
        <legend> Perfil salvo </legend>
        <table cellspacing="1"> 
         <p>   
        <tr><td>Cod. de Cadastro:<%=pessoa.getId() %></td>
        </p>
         <tr><td><label>Nome:</label></td> <td><input type="text" name="nome" value="<%= request.getParameter("nome")%> "></input> </td></tr>  
          <tr><td><label>Sexo:</label></td> <td> <input type="text" name="sexo" value="<%= request.getParameter("sexo")%> "></input></td></tr>   
      <tr><td><label>Data Nascimento:</label></td> <td> <input type="text" name="datNasc" value="<%= request.getParameter("datNasc")%> "></input> </td></tr>  
        <tr><td><label>Rg:</label></td> <td><%= request.getParameter("rg")%> </td></tr>  
      <tr><td><label>Cpf:</label></td> <td><%= request.getParameter("cpf")%>  </td></tr>  
     <tr><td><label>Telefone:</label></td> <td><%= request.getParameter("telefone")%>  </td></tr>  
        <tr><td><label>Email:</label></td> <td><%= request.getParameter("cemail")%> </td></tr>  
      <tr><td><label>Endereço:</label></td> <td><%= request.getParameter("endereco")%></td></tr>  
    <tr><td><label>Numero:</label></td> <td><%= request.getParameter("numero")%></td></tr>  
       <tr><td><label>Bairro:</label></td> <td><%= request.getParameter("bairro")%>  </td></tr>  
      <tr><td><label>Estado:</label></td> <td><%= request.getParameter("estado")%>  </td></tr>
        <tr><td><label>Cep:</label></td> <td><%= request.getParameter("cep")%>  </td></tr>   
     <tr><td><label>Login</label></td> <td><%= request.getParameter("login")%> </td></tr>     
     <tr><td><label>Senha:</label></td> <td><%= request.getParameter("senha")%>  </td></tr>   
    
     
                
    
   
  
</table>    
 
</fieldset>  
        <input type="submit" value="Atualizar"/></input> 
        <a href="index.jsp">Cancelar</a>
</form> 
        
      
</section>
<footer id="rodape">
<p> Copyright &copy; 2016 - by Alexandre Felix Menezes<br></p>
<p> <a href="https://www.facebook.com/alexandre.felix.923" target="_blank"><img id="qq" src="_img/facebook_alt.png"/></a></p>
</footer>      
 </body>
</html>
