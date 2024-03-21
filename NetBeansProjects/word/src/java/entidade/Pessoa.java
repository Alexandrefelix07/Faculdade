package entidade;

import com.mysql.jdbc.Blob;
import java.io.File;
import java.io.Serializable;
import java.text.SimpleDateFormat;
import java.util.Date;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.Inheritance;
import javax.persistence.InheritanceType;
import javax.persistence.Temporal;








@Entity
@Inheritance(strategy=InheritanceType.JOINED) 
public class Pessoa implements Serializable {
    


    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private int id;
    private String nome;
    private String sexo;
    @Temporal(javax.persistence.TemporalType.DATE)
    private Date datNasc;
    private String rg;
    private String cpf;
    private String telefone;
    private String cemail;
    private String endereco;
    private String numero;
    private String bairro;
    private String estado;
    private String cidade;
    private String cep;
    @Temporal(javax.persistence.TemporalType.DATE)
    private Date dtcad;
  

   
    public String getDataFormatado() {  
    String dataFormatada = null;  
    if(getDatNasc()!=null)  
        
        
    {  
        SimpleDateFormat formatador = new SimpleDateFormat("dd/MM/yyyy");             
        dataFormatada = formatador.format(getDatNasc());  
       
    }  
    return dataFormatada;  
}
   public String getDataFormatado1() {  
    String dataFormatada = null;  
    if(getDtcad()!=null)  
        
        
    {  
        SimpleDateFormat formatador = new SimpleDateFormat("dd/MM/yyyy");             
        dataFormatada = formatador.format(getDtcad());  
       
    }  
    return dataFormatada;  
}   

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

   public String getSexo() {
        return sexo;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }

    public Date getDatNasc() {
        return datNasc;
    }

    public void setDatNasc(Date datNasc) {
        this.datNasc = datNasc;
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getCemail() {
        return cemail;
    }

    public void setCemail(String cemail) {
        this.cemail = cemail;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getNumero() {
        return numero;
    }

    public void setNumero(String numero) {
        this.numero = numero;
    }

    public String getBairro() {
        return bairro;
    }

    public void setBairro(String bairro) {
        this.bairro = bairro;
    }

    public String getEstado() {
        return estado;
    }

    public void setEstado(String estado) {
        this.estado = estado;
    }

    public String getCidade() {
        return cidade;
    }

    public void setCidade(String cidade) {
        this.cidade = cidade;
    }

    public String getCep() {
        return cep;
    }

    public void setCep(String cep) {
        this.cep = cep;
    }

    public Date getDtcad() {
        return dtcad;
    }

    public void setDtcad(Date dtcad) {
        this.dtcad = dtcad;
    }

 
   

  
    
    
}