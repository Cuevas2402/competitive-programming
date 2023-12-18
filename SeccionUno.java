import java.util.HashSet;
import java.util.PriorityQueue;

public class SeccionUno {
    public static void main(String[] args) {
        problema1("juancuevas");

    }
    
    //Determinar si una string tiene caracteres unicos
    // O(n)
    public static void problema1(String s){
        /* 
            for (int i = 0; i < s.length()-2; i++){
                for(int j = i+1; j < s.length()-1; j++){
                    if (s.charAt(i) == s.charAt(j)){
                        System.out.println("No");
                    }
                }
            }
            System.out.println("Si");
        */
        HashSet <Character> mapa = new HashSet<>();
    

        for(int i = 0; i < s.length(); i++){

            if(mapa.contains(s.charAt(i))){
                System.out.println("No");
                return;
            }else{
                mapa.add(s.charAt(i));
            }
        }

        System.out.println("Si");
        return;
    }

    public static void problemma2(String s1, String s2){
        if (s1.length() != s2.length()){
            System.out.println("No");
            return;
        }else{

            char [] str1 = s1.toCharArray();
            char [] str2 = s2.toCharArray();

            PriorityQueue <Character> fila = new PriorityQueue<>();

            for(int i = 0; i < str1.length; i++){
                fila.add(str1[i]);
                fila.add(str2[i]);
            }

            while(!fila.isEmpty()){
                
                char aux = fila.poll();
                int counter = 1;

                    
                while(aux == fila.peek()){
                    aux = fila.poll();
                    counter++;
                }

                if(counter%2 != 0 ){
                    System.out.println("No");
                    return;
                }

            }

            System.out.println("Si");
            return;
        }


    }
}
