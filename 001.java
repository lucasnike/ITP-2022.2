package main;

import java.util.Scanner;


public class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int temperatura;
		String umidade;
		
		System.out.print("Temperatura: ");
		temperatura = sc.nextInt();
		
		
		System.out.print("Umidade do solo: ");
		umidade = sc.next();
		
		
		if(temperatura > 30) {
			System.out.println("Tensão da bomba é 100% de sua capacidade");
		} else if((temperatura >= 20 && temperatura <= 29) && (umidade.toUpperCase().intern() == "MÉDIA" || umidade.toUpperCase().intern() == "BAIXA")) {
			System.out.println("Tensão da bomba é 80% de sua capacidade.");
		} else if(temperatura >= 20 && temperatura <= 29 && umidade.toUpperCase().intern() == "ALTA") {
			System.out.println("Tensão da bomba é 60%");
		} else if(temperatura >= 10 && temperatura <= 19 && umidade.toUpperCase().intern() != "ALTA") {
			System.out.println("Tensão da bomba é 50% da capacidade");
		} else if(temperatura >= 10 && temperatura <= 19 && umidade.toUpperCase().intern() == "ALTA") {
			System.out.println("Tensão da bomba é 30%");
		} else if(temperatura < 10) {
			System.out.println("Tensão da bomba é 15%");
		}
	}
}
