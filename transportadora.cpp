#include "transportadora.h"
#include <iostream>
#include <cmath>

Cidade::Cidade(){
	raio_ = 0;
	angulo_ = 0;
}

void Cidade::setParametros(const char* nome, float ang, float r){
	nome_ = nome;
	angulo_ = ang;
	raio_ = r;
}

const char* Cidade::getNome(){
	return(nome_);
}

float Cidade::calc_distancia(Cidade a){
	float x1,y1,x2,y2;
	x1 = raio_*cos(angulo_*M_PI/180);
	y1 = raio_*sin(angulo_*M_PI/180);
	x2 = a.raio_*cos(a.angulo_*M_PI/180);
	y2 = a.raio_*sin(a.angulo_*M_PI/180);
	return(sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
}

float Cidade::calc_tempo(Cidade destino){
	float distancia;
	distancia = this->calc_distancia(destino);
	return(distancia/50);  // média 50km/h
}

Entrega::Entrega(){
	tipo_produto = NULL;
	tipo_entrega = NULL;
	peso_ = 0;
	quantidade_ = 0;
	Cidade inicio_;
	Cidade fim_;
}

void Entrega::setTipo_produto(const char* produto){
	tipo_produto = produto;
}

void Entrega::setTipo_entrega(const char* entrega){
	tipo_entrega = entrega;
}

void Entrega::setPeso(float peso){
	peso_ = peso;
}

void Entrega::setQuantidade(int q){
	quantidade_ = q;
}

void Entrega::setCidades(Cidade inicio, Cidade fim){
	inicio_ = inicio;
	fim_ = fim;
}

void Entrega::imprime_parametros(){
	std::cout << "Tipo do Produto: " << tipo_produto << std::endl;
	std::cout << "Tipo de Entrega: " << tipo_entrega << std::endl;
}

int Entrega::calc_restante(float percorrido){
	float dist_total = this->inicio_.calc_distancia(this->fim_);
	if(this->tipo_entrega == "Expresso"){
		return((((dist_total-percorrido)/50)/12)+1);
	}
	else if(this->tipo_entrega == "Normal"){
		return((((dist_total-percorrido)/50)/12)+5);
	}
}

float Entrega::calc_precoPF(){
	float distancia = this->inicio_.calc_distancia(this->fim_);
	if(tipo_produto == "Carta"){
		if(tipo_entrega == "Normal"){
			return(distancia/70);
		}
		else if(tipo_entrega == "Expresso"){
			return(distancia/70*1,5);
		}
	}
	else if(tipo_produto == "Pacote"){
		if(tipo_entrega == "Normal"){
			return(distancia/70+peso_/2);
		}
		else if(tipo_entrega == "Expresso"){
			return((distancia/70+peso_/2)*1,5);
		}
	}
	else if(tipo_produto == "Materiais frágeis"){
		if(tipo_entrega == "Normal"){
			return(distancia/70+quantidade_*5);
		}
		else if(tipo_entrega == "Expresso"){
			return((distancia/70+quantidade_*5)*1,5);
		}
	}
}

float Entrega::calc_precoPJ(){
	float distancia = this->inicio_.calc_distancia(this->fim_);
	if(tipo_produto == "Materiais frágeis"){
		return(distancia/5+quantidade_*15);
	}
	else if(tipo_produto == "Líquidos inflamáveis"){
		return((distancia*4)*quantidade_/10000);
	}
	else if(tipo_produto == "Outros"){
		return(distancia/5+peso_/150);
	}
}

