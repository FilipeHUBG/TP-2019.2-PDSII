#ifndef TRANSPORTADORA_H
#define TRANSPORTADORA_H

class Cidade{
public:
	// Construtor
	Cidade();
	
	// Função set
	void setParametros(const char* nome, float ang, float r);
	
	// Função get p/ nome
	const char* getNome();
	
	// Calcula a distância entre duas cidades (km)
	float calc_distancia(Cidade a);
	
	// Calcula o tempo de viagem entre duas cidades em horas
	float calc_tempo(Cidade destino);
	
private:
	const char* nome_;
	float angulo_;
	float raio_;   // medido em km
};

class Entrega : public Cidade{
public:
	// Construtor
	Entrega();
	
	// Funções set
	void setTipo_produto(const char* produto);
	void setTipo_entrega(const char* entrega);
	void setPeso(float peso);
	void setQuantidade(int quant);
	void setCidades(Cidade inicio, Cidade fim);
	
	// Imprime os parâmetros exceto peso e quantidade
	void imprime_parametros();
	
	// Calcula o tempo previsto para a entrega da mercadoria em dias
	// Recebe: distância percorrida, em km - tempo restante <= tempo total
	// Deve levar em consideração o tipo de entrega
	int calc_restante(float percorrido);
		
	// Calcula o preço da entrega
	// Deve levar em conta tipo do produto, entrega e peso
	float calc_precoPF();
	float calc_precoPJ();

private:
	const char* tipo_produto;
	const char* tipo_entrega;
	float peso_;
	int quantidade_;
	Cidade inicio_;
	Cidade fim_;
};


#endif // TRANSPORTADORA_H
