#include "transportadora3.h"
#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

int main() {
	float auxiliar; // Usado para gerar os números dos pedido (CASE 4)
	std::map<std::string, Cidade>Lista_Cidades;
	std::map<std::string, Cidade>::iterator itcidade;
	Cidade Belo_Horizonte;
	Belo_Horizonte.setParametros("Belo Horizonte", 0, 0);
	Lista_Cidades.insert(std::pair<std::string, Cidade>(Belo_Horizonte.getNome(), Belo_Horizonte));
	Cidade Sao_Paulo;
	Sao_Paulo.setParametros("Sao Paulo", 233, 478.723404);
	Lista_Cidades.insert(std::pair<std::string, Cidade>(Sao_Paulo.getNome(), Sao_Paulo));
	Cidade Rio_de_Janeiro;
	Rio_de_Janeiro.setParametros("Rio de Janeiro", 279.80, 319.148936);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Rio_de_Janeiro.getNome(), Rio_de_Janeiro));
	Cidade Campo_Grande;
	Campo_Grande.setParametros("Campo Grande", 182.50, 1074.46809);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Campo_Grande.getNome(), Campo_Grande));
	Cidade Curitiba;
	Curitiba.setParametros("Curitiba", 228.2, 808.510638);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Curitiba.getNome(), Curitiba));
	Cidade Porto_Alegre;
	Porto_Alegre.setParametros("Porto Alegre", 235.5, 1297.87234);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Porto_Alegre.getNome(), Porto_Alegre));
	Cidade Florianopolis;
	Florianopolis.setParametros("Florianopolis", 240, 968.085106);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Florianopolis.getNome(), Florianopolis));
	Cidade Vitoria;
	Vitoria.setParametros("Vitoria", 350.05, 382.978723);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Vitoria.getNome(), Vitoria));
	Cidade Goiania;
	Goiania.setParametros("Goiania", 144, 638.297872);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Goiania.getNome(), Goiania));
	Cidade Salvador;
	Salvador.setParametros("Salvador", 48.5, 1000);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Salvador.getNome(), Salvador));
	Cidade Maceio;
	Maceio.setParametros("Maceio", 48.5, 1425.53191);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Maceio.getNome(), Maceio));
	Cidade Aracaju;
	Aracaju.setParametros("Aracaju", 50.2, 1234.04255);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Aracaju.getNome(), Aracaju));
	Cidade Recife;
	Recife.setParametros("Recife", 50.2, 1606.38298);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Recife.getNome(), Recife));
	Cidade Joao_Pessoa;
	Joao_Pessoa.setParametros("Joao Pessoa", 51.9, 1691.48936);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Joao_Pessoa.getNome(), Joao_Pessoa));
	Cidade Natal;
	Natal.setParametros("Natal", 54.8, 1776.59574);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Natal.getNome(), Natal));
	Cidade Fortaleza;
	Fortaleza.setParametros("Fortaleza", 68, 1851.06383);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Fortaleza.getNome(), Fortaleza));
	Cidade Teresina;
	Teresina.setParametros("Teresina", 81.2, 1617.02128);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Teresina.getNome(), Teresina));
	Cidade Sao_Luis;
	Sao_Luis.setParametros("Sao Luis", 87.5, 1861.70213);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Sao_Luis.getNome(), Sao_Luis));
	Cidade Belem;
	Belem.setParametros("Belem", 99.6, 2074.46809);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Belem.getNome(), Belem));
	Cidade Macapa;
	Macapa.setParametros("Macapa", 107.2, 2297.87234);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Macapa.getNome(), Macapa));
	Cidade Manaus;
	Manaus.setParametros("Manaus", 131.5, 2489.3617);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Manaus.getNome(), Manaus));
	Cidade Boa_Vista;
	Boa_Vista.setParametros("Boa Vista", 125, 3021.2766);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Boa_Vista.getNome(), Boa_Vista));
	Cidade Rio_Branco;
	Rio_Branco.setParametros("Rio Branco", 156.5, 2723.40426);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Rio_Branco.getNome(), Rio_Branco));
	Cidade Cuiaba;
	Cuiaba.setParametros("Cuiaba", 157.5, 1340.42553);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Cuiaba.getNome(), Cuiaba));
	Cidade Porto_Velho;
	Porto_Velho.setParametros("Porto Velho", 149.5, 2382.97872);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Porto_Velho.getNome(), Porto_Velho));
	Cidade Brasilia;
	Brasilia.setParametros("Brasilia", 128.4, 595.744681);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Brasilia.getNome(), Brasilia));
	Cidade Palmas;
	Palmas.setParametros("Palmas", 109.3, 1106.38298);
	Lista_Cidades.insert(std::pair<const std::string, Cidade>(Palmas.getNome(), Palmas));

	std::map<float, Cadastro>Lista_Pessoas;
	std::map<float, Cadastro>::iterator itpessoas;
	std::map<float, CadastroPJ>Lista_PJ;
	std::map<float, CadastroPJ>::iterator itpj;
	std::map<float, CadastroFuncionario>Lista_Funcionarios;
	std::map<float, CadastroFuncionario>::iterator itfuncionarios;

	std::map<float, Entrega>Lista_Entregas;
	std::map<float, Entrega>::iterator itentregas;

	int op;
	do {
		system("cls");
		std::cout << "Digite o numero referente a operacao e pressione a tecla ENTER" << std::endl;
		std::cout << "1. Rastreio de Pedido   2. Cadastro Pessoa Fisica   3. Cadastro Pessoa Juridica";
		std::cout << "4. Pedidos/Consulta de Preco   5. Cadastro de Funcionarios   6. Consulta/Alterar Dados de Cliente" << std::endl;
		std::cin >> op;
		switch (op) {
		case 1:
		{
			float num;
			itentregas = Lista_Entregas.find(num);
			try
			{
				if (itentregas == Lista_Entregas.end()) {
					throw "Erro. A entrega nao existe. Pressione ENTER para voltar ao menu.";
				}
			}
			catch (const char* erro)
			{
				std::cout << erro << std::endl;
				system("pause");
				break;
			}
			float teste = rand() % 100;   // UTILIZADO PARA QUE A FUNÇÃO calc_restante RECEBA UM VALOR
			itentregas->second.imprime_parametros();
			std::cout << "Tempo restante: " << itentregas->second.calc_restante(teste) << " horas." << std::endl;
			system("pause");
			break;
		}
		case 2:
		{
			float cpf;
			std::cout << "Digite o CPF: ";
			std::cin >> cpf;
			itpessoas = Lista_Pessoas.find(cpf);
			try
			{
				if (itpessoas != Lista_Pessoas.end()) {
					throw "O cliente ja esta cadastrado. Pressione ENTER para voltar ao menu.";
				}
			}
			catch (const char* erro)
			{
				std::cout << erro << std::endl;
				system("pause");
				break;
			}
			Cadastro cadastro;
			std::string nome, email;
			std::cout << "Nome: ";
			getline(std::cin, nome);
			cadastro.setNome(nome);
			std::cout << "Email: ";
			getline(std::cin, email);
			cadastro.setEmail(email);
			cadastro.setNum_id(cpf);
			Lista_Pessoas.insert(std::pair<float, Cadastro>(cpf, cadastro));
			std::cout << "Cliente cadastrado com sucesso." << std::endl;
			system("pause");
			break;
		}
		case 3:
		{
			float cpnj;
			std::cout << "Digite o CNPJ: ";
			std::cin >> cpnj;
			itpj = Lista_PJ.find(cpnj);
			try
			{
				if (itpj != Lista_PJ.end()) {
					throw "A empresa ja esta cadastrada. Pressione ENTER para voltar ao menu.";
				}
			}
			catch (const char* erro)
			{
				std::cout << erro << std::endl;
				system("pause");
				break;
			}
			CadastroPJ empresa;
			std::string nome, email;
			std::cout << "Razao Social: ";
			getline(std::cin, nome);
			empresa.setNome(nome);
			std::cout << "Email: ";
			getline(std::cin, email);
			empresa.setEmail(email);
			empresa.setNum_id(cpnj);
			Lista_PJ.insert(std::pair<float, CadastroPJ>(cpnj, empresa));
			std::cout << "Cliente cadastrado com sucesso." << std::endl;
			system("pause");
			break;
		}
		case 4:
		{
			float id;
			std::cout << "Digite o CPF/CNPJ: ";
			std::cin >> id;
			itpessoas = Lista_Pessoas.find(id);
			itpj = Lista_PJ.find(id);
			try
			{
				if (itpessoas == Lista_Pessoas.end() && itpj == Lista_PJ.end()) {
					throw "Erro. Cliente nao cadastrado. ENTER para retornar ao menu";
				}
			}
			catch (const char* erro)
			{
				std::cout << erro << std::endl;
				system("pause");
				break;
			}
			if (itpessoas != Lista_Pessoas.end() && itpj == Lista_PJ.end()) {
				Entrega pedido;
				const char* tipoentrega;
				const char* tipoprod;
				int x, y;
				do {
					std::cout << "Tipo de entrega:   1. Normal   2. Expresso - ";
					std::cin >> x;
					switch (x)
					{
					case 1:
						tipoentrega = "Normal";
						break;
					case 2:
						tipoentrega = "Expresso";
						break;
					default:
						std::cout << "Erro. Digite um numero valido." << std::endl;
						break;
					}
				} while (x<1 || x>2);
				pedido.setTipo_entrega(tipoentrega);
				do {
					std::cout << "Produto:   1. Carta   2. Pacote   3. Materiais frageis";
					std::cin >> y;
					switch (y)
					{
					case 1:
						tipoprod = "Carta";
						break;
					case 2:
						tipoprod = "Pacote";
						break;
					case 3:
						tipoprod = "Materiais frageis";
						break;
					default:
						std::cout << "Erro. Digite um numero valido." << std::endl;
						break;
					}
				} while (y<1 || y> 3);
				pedido.setTipo_produto(tipoprod);
				std::string origem, destino;
				bool aux1 = false;
				while (!aux1) {
					std::cout << "Cidade origem: ";
					getline(std::cin, origem);
					itcidade = Lista_Cidades.find(origem);
					try
					{
						if (itcidade == Lista_Cidades.end()) {
							throw "Erro: digite uma capital com letras maiusculas e minusculas.";
						}
						else aux1 = true;
					}
					catch (const char* erro)
					{
						std::cout << erro << std::endl;
					}
				}
				pedido.setCidadeinicio(itcidade->second);
				bool aux2 = false;
				while (!aux2) {
					std::cout << "Cidade destino: ";
					getline(std::cin, destino);
					itcidade = Lista_Cidades.find(destino);
					try
					{
						if (itcidade == Lista_Cidades.end()) {
							throw "Erro: digite uma capital com letras maiusculas e minusculas.";
						}
						else aux2 = true;
					}
					catch (const char* erro)
					{
						std::cout << erro << std::endl;
					}
				}
				pedido.setCidadefim(itcidade->second);
				float p;
				int q;
				if (tipoprod = "Pacote") {
					std::cout << "Digite o peso: ";
					std::cin >> p;
					pedido.setPeso(p);
				}
				else {
					std::cout << "Digite a quantidade: ";
					std::cin >> q;
					pedido.setQuantidade(q);
				}
				pedido.imprime_parametros();
				std::cout << "PRECO: " << pedido.calc_precoPF() << std::endl;
				int z;
				do {
					std::cout << "Digite 1 para confirmar o pedido ou 2 para cancelar e voltar ao menu.";
					std::cin >> z;
					switch (z)
					{
					case 1:
						Lista_Entregas.insert(std::pair<float, Entrega>(auxiliar, pedido));
						std::cout << "Guarde o numero do pedido: " << auxiliar << std::endl;
						system("pause");
						auxiliar++;
						break;
					default:
						std::cout << "Erro. Digite 1 ou 2.";
						break;
					}
				} while (z<1 || z>2);
			}
			else if (itpessoas == Lista_Pessoas.end() && itpj != Lista_PJ.end()) {
				Entrega pedidoemp;
				int a, b;
				const char* tipoemp;
				do
				{
					std::cout << "Produto:   1. Materiais frageis   2. Liquidos Inflamaveis   3. Outros - ";
					std::cin >> a;
					switch (a)
					{
					case 1:
						tipoemp = "Materiais frageis";
						break;
					case 2:
						tipoemp = "Liquidos Inflamaveis";
						break;
					case 3:
						tipoemp = "Outros";
						break;
					default:
						std::cout << "Erro. Digite 1, 2 ou 3.";
						break;
					}
				} while (a<1 || a>3);
				pedidoemp.setTipo_produto(tipoemp);
				std::string orig, dest;
				bool valido = false;
				while (!valido) {
					std::cout << "Cidade origem: ";
					getline(std::cin, orig);
					itcidade = Lista_Cidades.find(orig);
					try
					{
						if (itcidade == Lista_Cidades.end()) {
							throw "Erro: digite uma capital com letras maiusculas e minusculas.";
						}
						else valido = true;
					}
					catch (const char* erro)
					{
						std::cout << erro << std::endl;
					}
				}
				pedidoemp.setCidadeinicio(itcidade->second);
				bool valido2 = false;
				while (!valido2) {
					std::cout << "Cidade destino: ";
					getline(std::cin, dest);
					itcidade = Lista_Cidades.find(dest);
					try
					{
						if (itcidade == Lista_Cidades.end()) {
							throw "Erro: digite uma capital com letras maiusculas e minusculas.";
						}
						else valido2 = true;
					}
					catch (const char* erro)
					{
						std::cout << erro << std::endl;
					}
				}
				pedidoemp.setCidadefim(itcidade->second);
				float c;
				int d;
				if (tipoemp = "Outros") {
					std::cout << "Digite o peso: ";
					std::cin >> c;
					pedidoemp.setPeso(c);
				}
				else {
					std::cout << "Digite a quantidade: ";
					std::cin >> d;
					pedidoemp.setQuantidade(d);
				}
				pedidoemp.imprime_parametros();
				std::cout << "PRECO: " << pedidoemp.calc_precoPJ() << std::endl;
				do {
					std::cout << "Digite 1 para confirmar o pedido ou 2 para cancelar e voltar ao menu - ";
					std::cin >> b;
					switch (b)
					{
					case 1:
						Lista_Entregas.insert(std::pair<float, Entrega>(auxiliar, pedidoemp));
						std::cout << "Guarde o numero do pedido: " << auxiliar << std::endl;
						system("pause");
						auxiliar++;
						break;
					default:
						std::cout << "Erro. Digite 1 ou 2.";
						break;
					}
				} while (b<1 || b>2);
			}
			else {
				std::cout << "Erro ao digitar o CPF/CPNJ. ENTER para voltar ao menu." << std::endl;
				system("pause");
			}
			break;
		}
		case 5:
		{
			float cpf;
			std::cout << "Digite o CPF: ";
			std::cin >> cpf;
			itfuncionarios = Lista_Funcionarios.find(cpf);
			try
			{
				if (itfuncionarios != Lista_Funcionarios.end()) {
					throw "O funcionario ja esta cadastrado. Pressione ENTER para voltar ao menu.";
				}
			}
			catch (const char* erro)
			{
				std::cout << erro << std::endl;
				system("pause");
				break;
			}
			CadastroFuncionario func;
			std::string nome, email, cargo, ing;
			float salario;
			std::cout << "Nome: ";
			getline(std::cin, nome);
			func.setNome(nome);
			std::cout << "Email: ";
			getline(std::cin, email);
			func.setEmail(email);
			func.setNum_id(cpf);
			std::cout << "Cargo: ";
			getline(std::cin, cargo);
			func.setCargo(cargo);
			std::cout << "Salario: ";
			std::cin >> salario;
			func.setSalario(salario);
			std::cout << "Data de Ingresso: ";
			getline(std::cin, ing);
			func.setData_ing(ing);
			Lista_Funcionarios.insert(std::pair<float, CadastroFuncionario>(cpf, func));
			break;
		}
		case 6:
		{
			int op2;
			do {
				std::cout << "1. Pessoa Fisica   2. Pessoa Juridica   3. Funcionario" << std::endl;
				std::cin >> op2;
				switch (op2) {
				case 1:
					float c;
					std::cout << "Digite o CPF: ";
					itpessoas = Lista_Pessoas.find(c);
					try
					{
						if (itpessoas == Lista_Pessoas.end()) {
							throw "Nao ha registro do cliente. Pressione ENTER para voltar ao menu.";
						}
					}
					catch (const char* erro)
					{
						std::cout << erro << std::endl;
						system("pause");
						break;
					}
					itpessoas->second.imprime_cadastro();
					std::cout << "1. Alterar nome   2. Alterar CPF   3. Alterar email   4. Retornar ao menu" << std::endl;
					int op3;
					do {
						std::cin >> op3;
						switch (op3)
						{
						case 1:
						{
							std::cout << "Digite o Nome: ";
							std::string novo;
							getline(std::cin, novo);
							itpessoas->second.setNome(novo);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						case 2:
						{
							std::cout << "Digite o CPF: ";
							float nvcpf;
							std::cin >> nvcpf;
							itpessoas->second.setNum_id(nvcpf);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						case 3:
						{
							std::cout << "Digite o email: ";
							std::string nvemail;
							getline(std::cin, nvemail);
							itpessoas->second.setEmail(nvemail);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						default:
							std::cout << "Digite um numero valido." << std::endl;
							break;
						}
					} while (op3 != 4);
					break;
				case 2:
					float n;
					std::cout << "Digite o CNPJ: ";
					itpj = Lista_PJ.find(n);
					try
					{
						if (itpj == Lista_PJ.end()) {
							throw "Nao ha registro do cliente. Pressione ENTER para voltar ao menu.";
						}
					}
					catch (const char* erro)
					{
						std::cout << erro << std::endl;
						system("pause");
						break;
					}
					itpj->second.imprime_cadastro();
					std::cout << "1. Alterar nome   2. Alterar CNPJ   3. Alterar email   4. Retornar ao menu" << std::endl;
					int op4;
					do {
						std::cin >> op4;
						switch (op4)
						{
						case 1:
						{
							std::cout << "Digite o Nome: ";
							std::string novo;
							getline(std::cin, novo);
							itpj->second.setNome(novo);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						case 2:
						{
							std::cout << "Digite o CNPJ: ";
							float nvcnpj;
							std::cin >> nvcnpj;
							itpj->second.setNum_id(nvcnpj);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						case 3:
						{
							std::cout << "Digite o email: ";
							std::string nvemail;
							getline(std::cin, nvemail);
							itpj->second.setEmail(nvemail);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						default:
							std::cout << "Erro. Digite um numero valido. " << std::endl;
							break;
						}
					} while (op4 != 4);
					break;
				case 3:
					float cp;
					std::cout << "Digite o CPF: ";
					std::cin >> cp;
					itfuncionarios = Lista_Funcionarios.find(cp);
					try
					{
						if (itfuncionarios == Lista_Funcionarios.end()) {
							throw "Nao ha registro do funcionario. Pressione ENTER para voltar ao menu.";
						}
					}
					catch (const char* erro)
					{
						std::cout << erro << std::endl;
						system("pause");
						break;
					}
					itfuncionarios->second.imprime_DadosFunc();
					std::cout << "1. Alterar nome   2. Alterar CPF   3. Alterar email   4. Alterar cargo" << std::endl;
					std::cout << "5. Alterar salario   6. Alterar data de ingresso   7. Retornar ao menu" << std::endl;
					int op5;
					do {
						std::cin >> op5;
						switch (op5)
						{
						case 1:
						{
							std::cout << "Digite o Nome: ";
							std::string nov;
							getline(std::cin, nov);
							itfuncionarios->second.setNome(nov);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						case 2:
						{
							std::cout << "Digite o CPF: ";
							float nvc;
							std::cin >> nvc;
							itfuncionarios->second.setNum_id(nvc);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						case 3:
						{
							std::cout << "Digite o email: ";
							std::string nve;
							getline(std::cin, nve);
							itfuncionarios->second.setEmail(nve);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						case 4:
						{
							std::cout << "Digite o cargo:";
							std::string carg;
							getline(std::cin, carg);
							itfuncionarios->second.setCargo(carg);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						case 5:
						{
							std::cout << "Digite o salario: ";
							float sal;
							std::cin >> sal;
							itfuncionarios->second.setSalario(sal);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						case 6:
						{
							std::cout << "Digite a data de ingresso: ";
							std::string ingr;
							getline(std::cin, ingr);
							itfuncionarios->second.setData_ing(ingr);
							std::cout << "Alteracao realizada com sucesso." << std::endl;
							break;
						}
						default:
							std::cout << "Digite um numero valido." << std::endl;
							break;
						}
					} while (op5 != 7);
					break;
				default:
					std::cout << "Digite um numero valido - 4 para voltar ao menu." << std::endl;
					break;
				}
			} while (op2 != 4);
		}
		default:
			std::cout << "Erro. Digite um numero valido - Para encerrar o programa digite 7." << std::endl;
			system("pause");
			break;
		}
	} while (op != 7);

	return 0;
}
