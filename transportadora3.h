#ifndef TRANSPORTADORA3_H
#define TRANSPORTADORA3_H
#include <string>

class Cidade {
public:
	// Construtor
	Cidade();

	// Função set
	void setParametros(std::string nome, float ang, float r);

	// Função get p/ nome
	std::string getNome();

	// Calcula a distância entre duas cidades (km)
	float calc_distancia(Cidade a);

	// Calcula o tempo de viagem entre duas cidades em horas
	float calc_tempo(Cidade destino);

private:
	std::string nome_;
	float angulo_;
	float raio_;   // medido em km
};

class Entrega {
public:
	// Construtor
	Entrega();

	// Funções set
	void setTipo_produto(const char* produto);
	void setTipo_entrega(const char* entrega);
	void setPeso(float peso);
	void setQuantidade(int quant);
	void setCidadeinicio(Cidade inicio);
	void setCidadefim(Cidade fim);

	// Funções get
	const char* getTipo_prod();
	const char* getTipo_entr();

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

class Cadastro {
public:
	// Construtor
	Cadastro();

	// Funções set
	void setNome(std::string nome);
	void setEmail(std::string email);
	void setNum_id(float num);

	// Funções get
	float getNum_id();
	std::string get_id();
	std::string getEmail();

	// Imprime as informações do cliente pessoa física
	virtual void imprime_cadastro();

private:
	std::string nome_;
	std::string email_;
	float num_id_;
};

class CadastroPJ : public Cadastro {
public:
	// Construtor
	CadastroPJ();

	// Imprime as informações do cliente pessoa jurídica
	void imprime_cadastro() override;
};

class CadastroFuncionario : public Cadastro {
public:
	// Construtor
	CadastroFuncionario();

	// Funções set p/ os dados adicionais
	void setCargo(std::string cargo);
	void setSalario(float salario);
	void setData_ing(std::string ing);

	// Imprime os dados adicionais
	void imprime_DadosFunc();

private:
	std::string cargo_;
	float salario_;
	std::string data_ingresso_;
};

#endif // TRANSPORTADORA3_H
