package main;

import java.util.Scanner;


public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int soma = 0;
		float media = 0;
		int lidos = 0;
		int anterior = 0;
		int maior = 0;
		
		while(true) {
			int numero = sc.nextInt();
			if(numero == 0) {
				break;
			}
			
			if(numero > anterior) {
				maior = numero;
			}
			
			lidos ++;
			soma += numero;
			anterior = numero;
		}
		
		media = soma / lidos;
		
		System.out.println("Foram lidos " + lidos + " números");
		System.out.println("O maior número é " + maior);
		System.out.println("A média é " + media);
	}
}
