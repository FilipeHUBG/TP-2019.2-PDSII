#include "transportadora.h"
#include <iostream>
#include <map>

int main(){
	std::string teste;
	std::map<const std::string, Cidade>Lista_Cidades;
	std::map<const std::string, Cidade>::iterator itcidade;
	Cidade Belo_Horizonte;
	Belo_Horizonte.setParametros("Belo Horizonte", 0, 0);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>("Belo Horizonte", Belo_Horizonte));
	Cidade Sao_Paulo;
	Sao_Paulo.setParametros("São Paulo", 233, 478.723404);
	Cidade Rio_de_Janeiro;
	Rio_de_Janeiro.setParametros("Rio de Janeiro", 279.80, 319.148936);
	Cidade Campo_Grande;
	Campo_Grande.setParametros("Campo Grande", 182.50, 1074.46809);
	Cidade Curitiba;
	Curitiba.setParametros("Curitiba", 228.2, 808.510638);
	Cidade Porto_Alegre;
	Porto_Alegre.setParametros("Porto Alegre", 235.5, 1297.87234);
	Cidade Florianopolis;
	Florianopolis.setParametros("Florianopólis", 240, 968.085106);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>("Florianópolis", Florianopolis));
	Cidade Vitoria;
	Vitoria.setParametros("Vitória", 350.05, 382.978723);
	Cidade Goiania; 
	Goiania.setParametros("Goiânia", 144, 638.297872);
	Cidade Salvador;
	Salvador.setParametros("Salvador", 48.5, 1000);
	Cidade Maceio;
	Maceio.setParametros("Maceió", 48.5, 1425.53191);
	Cidade Aracaju;
	Aracaju.setParametros("Aracaju", 50.2, 1234.04255);
	Cidade Recife;
	Recife.setParametros("Recife", 50.2, 1606.38298);
	Cidade Joao_Pessoa;
	Joao_Pessoa.setParametros("João Pessoa", 51.9, 1691.48936);
	Cidade Natal;
	Natal.setParametros("Natal", 54.8, 1776.59574);
	Cidade Fortaleza;
	Fortaleza.setParametros("Fortaleza", 68, 1851.06383);
	Cidade Teresina;
	Teresina.setParametros("Teresina", 81.2, 1617.02128);
	Cidade Sao_Luis;
	Sao_Luis.setParametros("São Luís", 87.5, 1861.70213);
	Cidade Belem;
	Belem.setParametros("Belém", 99.6, 2074.46809);
	Cidade Macapa;
	Macapa.setParametros("Macapá", 107.2, 2297.87234);
	Cidade Manaus;
	Manaus.setParametros("Manaus", 131.5, 2489.3617);
	Cidade Boa_Vista;
	Boa_Vista.setParametros("Boa Vista", 125, 3021.2766);
	Cidade Rio_Branco;
	Rio_Branco.setParametros("Rio Branco", 156.5, 2723.40426);
	Cidade Cuiaba;
	Cuiaba.setParametros("Cuiabá", 157.5, 1340.42553);
	Cidade Porto_Velho;
	Porto_Velho.setParametros("Porto Velho", 149.5, 2382.97872);
	Cidade Brasilia;
	Brasilia.setParametros("Brasília", 128.4, 595.744681);
	Cidade Palmas;
	Palmas.setParametros("Palmas", 109.3, 1106.38298);
	
	getline(std::cin, teste);
	
	//itcidade = Lista_Cidades.find(teste);
	std::cout << teste << std::endl;
	
	return 0;
}

