import java.io.BufferedInputStream;
import java.util.Scanner;

public class aer153{
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(new BufferedInputStream(System.in))) {
            int casos = sc.nextInt();
            int simetrico_0[] = {11,10,9,8,7,6,5,4,3,2,1,12};
            int simetrico_1[] = {10,9,8,7,6,5,4,3,2,1,12,11};
            while(casos != 0){
                StringBuilder salida = new StringBuilder();
                String linea = sc.next();
                String cadena[] = linea.split(":");
                int hora = Integer.parseInt(cadena[0]);
                int minutos = Integer.parseInt(cadena[1]);
                if(minutos == 0){
                    if(simetrico_0[hora-1] < 10){
                        salida.append("0");
                        salida.append(simetrico_0[hora-1]);
                    }else{
                        salida.append(simetrico_0[hora-1]);
                    }
                    
                    salida.append(":");
                    salida.append("00");
                }else{
                    if(simetrico_1[hora-1] < 10){
                        salida.append("0");
                        salida.append(simetrico_1[hora-1]);
                    }else{
                        salida.append(simetrico_1[hora-1]);
                    }
                    salida.append(":");
                    int min = 60-minutos;
                    if(min < 10){
                        salida.append("0");
                        salida.append(min);
                    }else{
                        salida.append(min);
                    }
                    
                }
                System.out.println(salida.toString());
                casos--;
                
            }

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}