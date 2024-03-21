

package entidade;

import java.io.Serializable;
import java.text.SimpleDateFormat;
import java.util.Date;
import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.Temporal;

@Entity
public class Cliente implements Serializable {
    
    @Id
    private String login;
    private String senha;
    @Temporal(javax.persistence.TemporalType.DATE)
    private Date dtcad;
   
       public String getDataFormatado1() {  
    String dataFormatada = null;  
    if(getDtcad()!=null)  
        
        
    {  
        SimpleDateFormat formatador = new SimpleDateFormat("dd/MM/yyyy");             
        dataFormatada = formatador.format(getDtcad());  
       
    }  
    return dataFormatada;  
} 
      
    public String getLogin() {
        return login;
    }

    public void setLogin(String login) {
        this.login = login;
    }

    public String getSenha() {
        return senha;
    }

    public void setSenha(String senha) {
        this.senha = senha;
    }

    public Date getDtcad() {
        return dtcad;
    }

    public void setDtcad(Date dtcad) {
        this.dtcad = dtcad;
    }

  

    
}
